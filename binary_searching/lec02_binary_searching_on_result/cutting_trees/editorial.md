# Chặt Cây - Editorial

### Subtask 1

Có thể duyệt qua mọi độ cao từ $\text{max}(h_i)$ về $1,$ ứng với mỗi độ cao đó thì duyệt qua tất cả các cây để tính tổng lượng gỗ thu được. Nếu lượng gỗ thu được không nhỏ hơn $m$ thì thu nhận kết quả và dừng chương trình.

***Độ phức tạp:*** $O\big(n \times \text{max}(h_i)\big)$.

### Subtask 2

***Nhận xét:*** Gọi $f(x)$ là hàm biểu thị kết quả của bài toán (tổng lượng gỗ thu được với nhát cắt ở độ cao $x$). Ta nhận thấy, khi $x$ càng tăng thì $f(x)$ sẽ càng giảm, tức là $f(x)$ là một hàm số đơn điệu.

Gọi $g(x)$ là hàm điều kiện của bài toán, với ý nghĩa "nhát cắt ở độ cao $x$ có thể thu được lượng gỗ không nhỏ hơn $m$ hay không?". Bài toán yêu cầu xác định $x$ lớn nhất, vì thế ta có thể đưa bài toán về "tìm $x$ lớn nhất sao cho $g(x) = \text{true}$". Lúc này, với việc $f(x)$ là một hàm giảm thì $g(x)$ sẽ là một dãy các giá trị $\text{true, true,..., true, false, false,..., false},$ và nó thỏa mãn điều kiện của bài toán ***Tìm kiếm nhị phân***.

Áp dụng tìm kiếm nhị phân, ta sẽ tìm ra độ cao $x \ \big(1 \le x \le \text{max}(h_i)\big)$ lớn nhất thỏa mãn "có thể cắt được tổng lượng gỗ không nhỏ hơn $m$ với độ cao nhát cắt là $x$". Xây dựng hàm $g(x)$ có thể thực hiện bằng công thức kiểm tra:

$$\sum_{i = 1}^n (h_i - x) \ge m; \forall h_i > x$$

Nếu $g(x)$ đúng với một giá trị $x$ thì tăng $x$ lên, ngược lại giảm $x$ xuống.

***Độ phức tạp:*** $O\Big(n \times \log_2\big(\text{max}(h_i)\big)\Big)$.