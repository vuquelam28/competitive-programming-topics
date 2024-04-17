# Tạo Ngoặc Đúng - Editorial

Một xâu ngoặc có thể coi như một dãy nhị phân độ dài $2 \times n,$ với bit $0$ tương ứng với dấu ngoặc mở và bit $1$ tương ứng với dấu ngoặc đóng.

Ta sử dụng quay lui sinh ra tất cả các dãy nhị phân như vậy, vừa sinh vừa kiểm tra xem dãy ngoặc tương ứng có phải là một dãy ngoặc hợp lệ hay không. Nếu như hợp lệ thì in dãy ngoặc đó ra.

Độ phức tạp: $2^{2n}$.