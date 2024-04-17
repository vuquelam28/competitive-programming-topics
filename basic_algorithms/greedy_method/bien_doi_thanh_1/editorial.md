# Biến Đổi Thành 1 - Editorial

Trường hợp $k = 1$ bạn đọc có thể suy ra ngay kết quả bằng $(n - 1) \times A$.

### Subtask 1

Bạn đọc sử dụng quy hoạch động, gọi $f[i]$ là chi phí tối thiểu để biến đổi $n$ thành $i$.

- $f[n] = 0$.
- $f[i] = min(f[i + 1] + 1, f[n * k] + 1$.

Kết quả: $f[1]$.

Độ phức tạp thuật toán $O(n)$.

### Subtask 2

Ta sẽ giải theo hướng tham lam, cứ mỗi lần giảm $n$, ta xét $3$ trường hợp sau:

- TH1: Nếu $n < k$ thì ta giảm $n$ một đơn vị cho đến khi bằng $1$.
TH2: Nếu $n > k$ và $n$ không chia hết cho $k,$ thì ta chỉ có một cách biến đổi duy nhất là giảm $n$ đi $1$ đơn vị tới khi $n$ chia hết cho $k,$ chi phí bỏ ra sẽ là $(n \text{ mod } k) \times A,$ rồi chuyển sang trường hợp $3$.
- TH3: Nếu $n$ chia hết cho $k$ thì ta sẽ giảm $n$ xuống $\frac{n}{k}$ với chi phí $\text{min}\Big(B, \left(n - \frac{n}{k}\right) \times A\Big),$ cách làm này luôn luôn thu được chi phí tối ưu. Thật vậy:

    - Nếu như $B < \left(n - \frac{n}{k}\right) \times A,$ thì tất nhiên chi phí tối ưu là $B$.
    - Ngược lại, giả sử ta không giảm $n$ luôn về $\frac{n}{k},$ mà ta sử dụng $i \times k \ (i \ge 1)$ lần thao tác giảm $1$ đơn vị để giảm $n$ về $(n - i \times k);$ sau đó giảm tiếp về $\left(\frac{n}{k} - i\right)$. Khi đó, tổng chi phí phải bỏ ra là:

    $$\text{min}\bigg(B, \left(n - i \times k - \frac{n}{k} + i \right) \times A \bigg) + i \times k \times A$$

    $$= \text{min}\bigg(B, \left(n - \frac{n}{k}\right) \times A - i \times (k - 1) \times A\bigg) + i \times k \times A$$

    $$= \text{min}\bigg(\left(n - \frac{n}{k}\right) \times A + i \times A, B + i \times k \times A \bigg)$$

    Chi phí này chắc chắn lớn hơn việc giảm trực tiếp $n$ về $\frac{n}{k}$ rồi trừ tiếp để được $\frac{n}{k} - i$. Vì thế, cách làm ban đầu là tối ưu.

Độ phức tạp tối đa trong việc xử lý ba trường hợp trên chỉ có thể là $O\big(\log(k) \times n\big),$ nên ta thu được giải thuật có độ phức tạp thuật toán: $O(\log_k n)$.