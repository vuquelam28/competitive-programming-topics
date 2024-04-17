# Chữ Số Lớn Nhất - Editorial

Kĩ thuật tách các chữ số của $n$: Liên tục lấy các chữ số từ cuối lên đầu (từ phải qua trái).

Nhận xét: Chữ số tận cùng của số $n$ chính bằng $n \text{ mod } 10$ (số dư của $n$ khi chia cho $10$). Vậy ta lặp liên tục công việc dưới đây tới khi $n = 0$:
- Lấy chữ số cuối của $n$ bằng công thức $n \text{ mod } 10$.
- Cập nhật kết quả chữ số lớn nhất vào biến $res$.
- Chia $n$ cho $10$ và lấy phần nguyên để loại bỏ chữ số tận cùng của $n$.