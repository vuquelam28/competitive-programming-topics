# Đếm Số Chữ Số - Editorial

Sử dụng kĩ thuật tách các chữ số của $n$: Liên tục lấy các chữ số từ cuối lên đầu (từ phải qua trái).

Nhận xét: Chữ số tận cùng của số $n$ chính bằng $n \text{ mod } 10$ (số dư của $n$ khi chia cho $10$). Vậy ta lặp liên tục công việc dưới đây tới khi $n = 0$:
- Lấy chữ số cuối của $n$ bằng công thức $n \text{ mod } 10$.
- Tăng biến kết quả lên $1$ đơn vị - số chữ số của $n$ tăng thêm $1$.
- Chia $n$ cho $10$ và lấy phần nguyên để loại bỏ chữ số tận cùng của $n$.

Chú ý khai báo $N$ là kiểu dữ liệu `long long`.