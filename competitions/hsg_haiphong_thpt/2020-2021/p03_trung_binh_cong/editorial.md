# Trung Bình Cộng - Editorial

Biến đổi đề bài một chút, tức là giờ ta sẽ cần tìm cặp $(p,q)$ sao cho $a_p + a_q = 2k$.

### Subtask 1

Làm trâu trong $O(n^2)$.

### Subtask 2 + 3

Ta sẽ xét từng phần tử $a_i$ của dãy $a$. Khi xét tới $a_i$, ta cần tìm xem liệu rằng đã có giá trị $2k-a_i$ xuất hiện trong dãy trước đó hay chưa, nếu rồi thì in ra $i$ và chỉ số của giá trị đó và kết thúc chương trình.
Vấn đề ở đây là làm thế nào để kiểm tra giá trị đó có hay chưa? Nếu ta lại xét từng phần tử $j < i$ thì sẽ dẫn tới thuật toán $O(n^2)$. Vậy nên, ta sẽ sử dụng một `map <int, int> m`. Với mỗi giá trị $a_i,$ ta sẽ xem $m[2k-a_i]$ có tồn tại hay không, nếu có thì in ra $i$ và $m[2k-a_i]$, ngược lại thì gán $m[a_i] = i$ và tiếp tục chương trình. Nói cách khác, `map[x]` đây dùng để ánh xạ lại giá trị $x$ tương ứng với vị trí của nó trong dãy.  

***Độ phức tạp:*** $O(n \times \log n)$.