# Xây Hàng Rào (Bản Dễ) - Editorial

Đề bài yêu cầu tìm ra một cách ghép cặp các $a_i$ với $b_j$ và biến $a_i = a_i + b_j,$ sao cho:

- Các $b_j$ được chọn có thứ tự tăng dần.
- Sau khi ghép xong, $\text{min}(a_i)$ đạt giá trị lớn nhất có thể.

Đây là một bài toán có thể thực hiện tìm kiếm nhị phân. Thật vậy, giả sử $P(k)$ là một hàm kiểm tra có thể xây dựng được một hàng rào có độ dài $\ge k$ hay không, thì định lý chính có thể được xây dựng như sau:

$$P(k) = \text{true true ... true false false ... false}$$

<center>

*khi xét $k$ tăng dần*
</center>

Lí do khá dễ chứng minh, nếu như ta đã dựng được một hàng rào với độ cao $\ge k$ thì hẳn nhiên cũng dễ dàng dựng được hàng rào với độ cao $\ge k - 1$. Vì vậy, ta sẽ đi tìm kiếm nhị phân giá trị $k$ lớn nhất thỏa mãn $P(k) = \text{true}$.

Ta xây dựng hàm $P(k)$ như sau để đảm bảo khả năng đúng cao nhất của hàm:

- Với $a_i < k,$ tìm $b_j$ đầu tiên thỏa mãn $a_i + b_j \ge k$.
- Di chuyển sang $a_i$ tiếp theo và lặp lại bước 1, tuy nhiên $b_j$ sẽ được tiếp tục tìm kiếm từ vị trí của $b_j$ ở bước trước. Lí do là vì các $b_j$ phải được chọn theo thứ tự tăng dần. 
- Nếu như toàn bộ các $a_i$ đều trở thành $\ge k$ thì kết luận $P(k) = \text{true}$ và tăng khoảng tìm kiếm nhị phân, ngược lại thì giảm khoảng tìm kiếm nhị phân.

***Độ phức tạp:*** $O\big(\log (a_i + b_i) \times (n + m)\big)$.