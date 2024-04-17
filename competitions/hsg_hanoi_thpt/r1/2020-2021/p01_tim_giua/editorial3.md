#### subtask 1:

Ta gọi hàm $f(u, v)$ trả về tổng các số nguyên từ $u$ đến $v$. Sử dụng công thức từ cấp 1:
$f(u, v) = \frac{(v - u + 1) \times (u + v)}{2}$.

Ta duyệt từng vị trí $M$ để tìm vị trí có $|f(L, M) - f(M + 1, R)|$ nhỏ nhất.

ĐPT: $O(r - l + 1)$.

#### subtask 2:

Nhận xét: nếu $M$ tăng dần thì $f(L, M)$ tăng dần và $f(M + 1, R)$ giảm dần. Do đó tồn tại một vị trí $M'$ sao cho $f(L, M') \ge f(M' + 1, R)$ và $f(L, M' + 1) < f(M' + 2, R)$. Vị trí $M'$ hoặc $M' + 1$ cũng là vị trí tối ưu ta cần tìm. 

Việc tìm $M'$ có thể dùng kĩ thuật chặt nhị phân. Lưu ý trường hợp không tồn tại vị trí $M' + 1$.

ĐPT: $O(\log2(r - l + 1))$.