# Mua Đồ Chơi - Editorial

Nếu $k \le n$ thì số cách chọn bằng $\lfloor\frac{k}{2}  \rfloor - (k \mod 2),$ điều này có thể dễ dàng chứng minh.

Nếu $2 \times n \le k$ thì không thể chọn cặp nào.

Ngược lại, gọi số lớn nhất có thể chọn là $n,$ số bé nhất có thể chọn là $m = k - n$. Vậy số cách chọn là $\lfloor\frac{n - m}{2}  \rfloor$.

***Độ phức tạp:*** $O(1)$.
