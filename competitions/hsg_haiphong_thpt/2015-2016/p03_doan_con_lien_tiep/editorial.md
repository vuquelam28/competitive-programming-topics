# Đoạn Con Liên Tiếp - Editorial

### Subtask 1 + 2

Hai $sub$ đầu ta có thể giải được bằng thuật toán $O(n^2)$ khá đơn giản bằng cách duyệt qua toàn bộ các đoạn con. Để tính tổng của một đoạn con $[i,j]$ bất kì, ta có thể dùng mảng cộng dồn.

### Subtask 3

Tới subtask cuối, ta cần rút ra nhận xét rằng, do $a_i$ dương, nên nếu một đoạn con $[i,j]$ thỏa mãn thì bắt buộc $j-i+1 \le k$. Điều này dễ dàng chứng minh bằng cách giả sử tất cả các $a_i = 1$ thì tổng một đoạn sẽ bằng $j - i + 1,$ và vì ta lại đang tìm các đoạn con có tổng không vượt quá $k,$ nên ta có điều phải chứng minh.

Như vậy, với mỗi vị trí $j,$ ta sẽ vẫn duyệt qua các vị trí $i$ ($i < j$) để tìm dãy con $(i,j)$ thỏa mãn, nhưng $i$ sẽ chỉ nằm trong khoảng $\big[\text{max}(1,i-k+1),j-1\big]$. 

Do đó độ phức tạp sẽ là $O\big(n \times \text{min}(n,k)\big)$. Với subtask cuối do $k \le 100$ nên dễ dàng qua được.