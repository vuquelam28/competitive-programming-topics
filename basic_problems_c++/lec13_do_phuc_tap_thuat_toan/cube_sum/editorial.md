# Editorial - Cubesum

### Subtask 1

Ta sẽ for qua tất cả các giá trị $i^3$ rồi cộng vào tổng.

***Độ phức tạp:*** $O(n)$.

### Subtask 2

Vì $n \le 10^9$ nên ta không thể duyệt qua hết các giá trị $1 \le i \le n$. 

Ta có công thức tính nhanh như sau:
$$S_n = \frac{n^2\times(n+1)^2}{4} (1)$$

**Chứng minh**
Ta sẽ chứng minh bằng phương pháp quy nạp toán học.

- Xét $n=1$: có $1^3 = \frac{1^2 \times 2^2}{4} = 1$.

- Giả sử $(1)$ đúng với $n=k$. Từ đó:
    $$S_k = \frac{k^2\times(k+1)^2}{4} (2)$$

- Ta sẽ cần chứng minh $(1)$ cũng đúng với $n=k+1$.
Ta có:
$$S_{k+1} = 1^3 + 2^3 + ... + k^3 + (k+1)^3$$
Thay $(2)$ vào:
$$S_{k+1}=\frac{k^2\times(k+1)^2}{4} + (k+1)^3=\frac{(k+1)^2 \times (k^2+4k+4)}{4}$$
$$=\frac{(k+1)^2 \times (k+2)^2}{4}$$

Từ đó, $(1)$ đúng với $k+1$.

Vậy theo nguyên lí quy nạp, $(1)$ đúng với mọi số nguyên dương $n$.

**Lưu ý:** Hãy sử dụng $mod$ cẩn thận vì các giá trị $n^2$ và $(n+1)^2$ rất to, nếu không $mod$ cẩn thận sẽ rất dễ bị tràn số. Ngoài ra, ta cần phải chia cho mẫu trước khi $mod,$ nếu không kết quả sẽ ra sai. Ta sẽ biến đổi công thức:
- Nếu $n \mod 2 = 0$:
    $$S_n=\left(\frac{n}{2}\right)^2 \times (n+1)^2$$
- Trường hợp còn lại:
    $$S_n= n^2 \times \left(\frac{n+1}{2}\right)^2$$

***Độ phức tạp:*** $O(1)$.