# Tiền Điện Thoại - Editorial

Xử lý ba trường hợp:

- Nếu $n \le 10$: Tổng số tiền là $1000 \times n$.
- Nếu $10 < n \le 40$: Tổng số tiền là $1000 \times 10 + 700 \times (n - 1000)$.
- Nếu $n > 40$: Tổng số tiền là $1000 \times 10 + 700 \times 30 + 500 \times (n - 40)$.