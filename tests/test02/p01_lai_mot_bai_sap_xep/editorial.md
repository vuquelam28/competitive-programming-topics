# Lại Một Bài Sắp Xếp - Editorial

Danh sách gồm các số nguyên giảm dần thì kết quả luôn là `NO`, ngược lại in ra `YES`.

### Chứng minh

Xét danh sách gồm $n$ số nguyên và $a_i > a_{i + 1} > \dots > a_{n - 1}> a_n$. Để sắp xếp lại danh sách ta cần:

- Đưa phần tử $a_n$ (của danh sách ban đầu) về vị trí $1$, cần $n - 1$ thao tác.
- Đưa phần tử $a_{n - 1}$ (của danh sách ban đầu) về vị trí $2$, cần $n - 2$ thao tác.
- $\dots$
- Đưa phần tử $a_2$ (của danh sách ban đầu) về vị trí $n - 1$, cần $1$ thao tác.

Vậy số thao tác cần thực hiện là:

$$ 1 + 2 + ... + (n - 2) + (n - 1) = \frac{n \cdot (n - 1)}{2} > \frac{n \cdot (n - 1)}{2} - 1$$
