# Hoán Vị Số - Editorial

### Subtask 1

Sử dụng quay lui để duyệt mọi hoán vị của số $N$ và tìm ra hoán vị lớn nhất chia hết cho $30$.

### Subtask 2

Số chia hết cho $30$ bắt buộc phải chia hết cho $2, 3$ và $5$. Nghĩa là số đó cần thỏa mãn các điều kiện sau:
- Có tồn tại ít nhất một chữ số $0$. 
- Tổng các chữ số chia hết cho $3$.

Do đó, ta cần kiểm tra hai điều kiện trên trước. Nếu thỏa mãn thì sau đó chỉ cần sắp xếp lại các chữ số của số $N$ theo thứ tự giảm dần là xong. Tuy nhiên cần sắp xếp bằng phương pháp đếm phân phối để không bị quá thời gian, do $N$ có thể có tới $10^7$ chữ số.

Độ phức tạp: $O\big(|N|\big);$ với $|N|$ là số chữ số của $N$.