# Siêu Trộm - Editorial

***Nhận xét:*** Giả sử đã chọn được $i$ viên đá quý và hiện tại tải trọng còn trống của túi là $k$. Viên đá thứ $i + 1$ được chọn phải là vật có tỉ lệ $\frac{k}{\text{weight}} \times \text{value}$ càng lớn càng tốt. Hay nói cách khác, cần ưu tiên lựa chọn viên đá có $\frac{\text{value}}{\text{weight}}$ càng lớn càng tốt. 

Từ đây, ta rút ra một ý tưởng tham lam như sau:

- Sắp xếp các viên đá quý giảm dần theo tỉ lệ $\frac{\text{value}}{\text{weight}}$.
- Duyệt qua tất cả các viên đá quý, nếu viên thứ $i$ bỏ được hết vào túi thì lấy toàn bộ viên đó, ngược lại thì cắt viên đá đó ra sao cho lấp đầy được túi, thu nhận giá trị tăng thêm và dừng thuật toán.

***Độ phức tạp:*** $O(n \times \log n)$.
