# Function - Editorial

Ta có một nhận xét như sau:
- Nếu $n = 0$, $\frac{f(n)}{f(n+1)} = 1$.
- Ngược lại, giả sử $\frac{f(n)}{f(n+1)} = \frac{p}{q}$ ta có:
    - $\frac{f(2n+1)}{f(2n+2)} = \frac{f(n)}{f(n)+f(n+1)} = \frac{p}{p+q}$
    - $\frac{f(2n+2)}{f(2n+3)} = \frac{f(n)+f(n+1)}{f(n+1)} = \frac{p+q}{q}$

Vậy nên, ta có thể xây dựng hàm $cal(p,q)$ như sau:
- Nếu $p = q$ trả về $0$.
- Nếu $q < p$ trả về $2 \times \text{cal}(p-q,q)+2$.
- Ngược lại trả về $2 \times \text{cal}(p,q-p)+1$.

Có thể thấy, kết quả luôn tồn tại, và do nó có thể rất lớn nên ta cần sử dụng tính toán số lớn.