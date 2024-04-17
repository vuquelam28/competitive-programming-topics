# Tìm Số (Vòng Lặp While) - Editorial

Thực tế, nhiệm vụ là tìm số lượng số hạng nhỏ nhất của dãy $F$ để tổng của dãy lớn hơn $N$. 

Gọi $k$ là các số hạng của dãy, bắt đầu từ $1$. Ta nhận thấy nếu $k$ là số lẻ thì sẽ mang dấu `-`, ngược lại mang dấu `+`. Dựa theo quy luật đó, ta sử dụng vòng lặp `while` như sau:

- Đặt $f = 0, k = 1$.
- Trong khi $f \le n$ thì thực hiện cộng thêm $k$ vào $f$ (tất nhiên là tùy vào $k$ lẻ hay chẵn sẽ cộng hoặc trừ).
- Tăng $k$ lên $1$ đơn vị.

Kết thúc vòng lặp `while`, giá trị $k$ cần tìm sẽ là $k - 1$ (vì theo cách làm trên thì $k$ sẽ bị cộng quá $1$ đơn vị so với kết quả). 