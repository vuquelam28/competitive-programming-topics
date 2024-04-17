# Điểm Chung - Editorial

### Subtask 1

Gọi $cnt[i]$ là số đoạn thẳng mà điểm có tọa độ $i$ trên trục $Ox$ xuất hiện. 

Với subtask này, ta có thể duyệt qua từng tọa độ trong mỗi đoạn $[a, b]$ và thực hiện tăng giá trị trực tiếp trên mảng $cnt$. Cuối cùng chọn ra các điểm $M$ có $cnt[M]$ đúng bằng $k$.

***Độ phức tạp:*** $O(n \times m)$.

### Subtask 2

Với $K = N$ tức ta cần tìm các điểm nằm trong mọi đoạn $[a,b]$.
Để làm được điều này, ta sẽ lấy $l = \text{max}(a)$ và $r = \text{min}(b)$ của tất cả các đoạn. 
Nếu $l > r$ thì in ra $0$, ngược lại in ra $r-l+1$.

### Subtask 3

Để giải được trọn vẹn bài này, ta sẽ dùng tới kĩ thuật tăng đoạn $[l,r]$ offline. Khá giống (nhưng đơn giản hơn) so với bài $3$ của đề thi học sinh giỏi thành phố Hà Nội năm học $2020 - 2021$.

Gọi $val[i]$ là số những đoạn chứa điểm $i$. Như vậy với mỗi đoạn $[a,b]$, ta cần tăng các $val[a], val[a+1], ..., val[b]$ lên $1$ đơn vị. 

Cuối cùng, cần kiểm tra xem có bao nhiêu $i$ thỏa mãn $val[i] = k$. Điều này khiến ta liên tưởng tới ***Segment Tree,*** nhưng thực tế lại không cần phức tạp tới vậy. Cách làm như sau:
- Đầu tiên ta lưu $val$ bằng một `map < int, int >`.
- Với mỗi đoạn $[a,b]$ ta làm như sau:
    - `val[a] += 1` - tăng vị trí $a$ lên $1$ đơn vị.
    - `val[b+1] -= 1` - giảm vị trí $b + 1$ đi $1$ đơn vị.

Thao tác trên có nghĩa là, đầu tiên, ta sẽ đánh dấu tăng đoạn $[a,\infty]$ lên $1$ đơn vị, tuy nhiên do chỉ cần tăng từ $a$ tới $b,$ ta cần giảm đoạn $[b+1,\infty]$ xuống $1$ đơn vị. Kĩ thuật này là kĩ thuật Range Update, khá quen thuộc. Vậy "đánh dấu tăng đoạn" là gì? Sau khi đọc và tăng xong $m$ truy vấn, ta sẽ tiến hành thao tác sau:
- Gọi $value = 0$ là giá trị của điểm đang xét tới, $res = 0$ là số điểm thỏa mãn nằm trong đúng $k$ đoạn.
- Gọi $it$ là `iterator` đang trỏ tới trong `map`, $past$ là `iterator` trước đó. Ta sẽ thực hiện phép ***cộng dồn*** như sau:
    - `value += it -> second`.
    - Nếu $value = k,$ thì thực hiện `res += it -> first - past -> first`.

Như vậy, ta đã có thể thực hiện $m$ phép tăng một cách gián tiếp. Nếu $value$ đang xét tới của ta bằng $k,$ tức là điểm `it -> first` có $k$ đoạn đi qua nó. Đây là một điểm thỏa mãn, tuy nhiên các điểm trong đoạn `[past -> first+1, it -> first]` sẽ có giá trị bằng nhau, nên ta cần cộng thêm số phần tử của đoạn này vào kết quả.

***Độ phức tạp:*** $O(n + m \times log)$.