# Hồi Ký - Editorial

Xét số trang của tập dày nhất là $x$.

Ta đặt hàm $P(x)$ là hàm kiểm tra điều kiện: Với số trang của tập dày nhất là $x,$ thì có thể chia được $n$ chương ban đầu thành không quá $k$ tập hay không?

Nhận xét thấy rằng, theo chiều tăng của $x$ sẽ tồn tại một giá trị $x_0$ khiến cho mọi $P(x \ge x_0) = \text{TRUE},$ và mọi $P(x < x_0) = \text{FALSE}$. Do đó bài toán thỏa mãn định lý chính, và ta tìm kiếm nhị phân đại lượng $x$ nhỏ nhất sao cho $P(x) = \text{TRUE}$.

Dễ thấy ta cần chặt nhị phân $x$ trong đoạn $\Big[1, \sum a_i\Big]$ và mất thêm $O(n)$ cho mỗi lần kiểm tra hàm $P(x)$. Vậy tổng độ phức tạp là $O\Big(n.\log\big(\sum a_i\big)\Big)$.

