# Đếm Cặp Nghiệm - Editorial

Dễ thấy $1 \le x \le \left\lfloor\frac{c - b}{a}\right\rfloor$.

Xét mọi giá trị $x$ trong đoạn này rồi tính ra $y = \left\lfloor\frac{(c - a \times x)}{b}\right\rfloor$. Kiểm tra lại hai điều để kết luận $(x, y)$ là một cặp nghiệm hợp lệ:

- $a \times x + b \times y = c$ (do $x, y$ bị làm tròn).
- $\text{GCD}(x, y) = 1$.

***Độ phức tạp:*** $O\left(\left\lfloor\frac{c - b}{a}\right\rfloor \times \log \right)$.