# Biểu Diễn Thập Phân - Editorial

### Subtask 1

Lưu biểu diễn thập phân của phân số $\frac{a}{b}$ vào một biến số thực rồi chuyển số đó thành chuỗi, sau đó tính tổng $n$ chữ số sau dấu phẩy.

Độ phức tạp: $O(n)$.

### Subtask 2

Trước tiên thực hiện thuật toán tìm chu kỳ của số thập phân:

- Bước $1$: Đặt phép $a$ chia $b,$ ghi nhận thương nguyên ở lần chia đầu tiên. Thương này là phần nguyên của số thập phân. Kế đến tiếp tục đặt phép chia với số dư của phép chia đầu tiên, lưu các thương và số dư ở mỗi lần chia tiếp theo vào hai mảng phân biệt.
- Bước $2$: Lặp lại liên tục quá trình chia $a$ cho $b$ giống như phép chia số thập phân: Lấy số dư nhân thêm $10$ rồi chia cho $b,$ tiếp tục lưu thương và số dư của phép chia mới và lại lặp lại quá trình,…
- Bước $3$: Lặp lại bước $2$ cho tới khi thấy số dư bị lặp lại. Gọi vị trí xuất hiện đầu tiên của số dư này trên dãy số dư là $x,$ thì chu kỳ của số thập phân sẽ bắt đầu từ vị trí $x$ trên dãy thương cho tới hết dãy thương. Còn các chữ số nằm trước vị trí $x$ trên dãy thương sẽ là các chữ số thập phân tự do.

***Ví dụ:*** Giả sử phân số là $\frac{1}{14}$. Thương nguyên ban đầu là $0,$ đây chính là phần nguyên của biểu diễn thập phân của phân số này. Gọi thương và số dư của các phép chia tiếp theo lần lượt là $k$ và $r,$ quy trình để tìm ra biểu diễn thập phân của nó là:

- Lần chia thứ nhất: $k = 0, r = 1$.
- Lần chia thứ hai: $k = 7, r = 2$.
- Lần chia thứ ba: $k = 1, r = 6$.
- Lần chia thứ tư: $k = 4, r = 4$.
- Lần chia thứ năm: $k = 2, r = 12$.
- Lần chia thứ sáu: $k = 8, r = 8$.
- Lần chia thứ bảy: $k = 5, r = 10$.
- Lần chia thứ tám: $k = 7, r = 2$ (số dư bị lặp lại ở vị trí $2,$ không lưu thương này mà tính luôn chu kỳ). Số thập phân lúc này sẽ là: $0.0(714285)$.

Sau khi có được chu kì và các chữ số tự do phía sau dấu phẩy, ta dễ dàng tính được tổng của $k$ chữ số sau dấu phẩy dựa vào xử lý toán học.