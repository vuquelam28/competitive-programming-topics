# Dãy Tăng Giảm - Editorial

Xử lý các trường hợp sau:

- Nếu ($a \le b$ và $b < c$) hoặc ($a < b$ và $b \le c$) thì kết quả là `Increasing Sequence`.
- Nếu ($a \ge b$ và $b > c$) hoặc ($a > b$ và $b \ge c$) thì kết quả là `Decreasing Sequence`.
- Nếu $a = b$ và $b = c$ thì kết quả là `Equal Sequence`.
- Các trường hợp còn lại kết quả là `None`.