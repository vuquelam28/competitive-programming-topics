# Chia Tiền Thưởng - Editorial

### Subtask 1 + 2

Với mỗi tờ tiền, có $3$ khả năng có thể xảy ra: An giữ, Bình giữ hoặc được đem đi đầu tư. Ta có thể duyệt qua $3^n$ khả năng để tìm ra phương án tối ưu nhất sử dụng quay lui.

### Subtask 3

Subtask này ta sẽ sử dụng quy hoạch động.

Gọi $f[i][diff]$ là lượng tiền đem đi đầu tư ít nhất khi xét đến tờ thứ $i$ và lượng tiền chênh lệch giữa An và Bình là $diff$.

Tương tự, vẫn có $3$ trường hợp có thể xảy ra với tờ tiền thứ $i$:
- An giữ: $f[i][diff] = f[i - 1][diff - a[i]]$
- Bình giữ: $f[i][diff] = f[i - 1][diff + a[i]]$.
- Đem đi đầu tư: $f[i][diff] = f[i - 1][diff] + a[i]$.

Giá trị của $f[i][diff]$ là min của 3 trường hợp trên.

Gọi $sum$ là tổng giá trị của $n$ tờ tiền. Đáp án bài toán sẽ là $\frac{sum - f[n][0]}{2}$.

***Lưu ý:***

- Giá trị của $diff$ có thể âm $(-10^5 \le diff \le 10^5)$ nên ta cần cộng thêm biến $diff$ một lượng $base$ là $10^5$ để tránh truy cập vào mảng có index âm.
- Việc lưu mảng $f[i][diff]$ cần dùng đến $500 \times 10^5 \times 2 = 10^8$ int nên sẽ gây tràn bộ nhớ (MLE). Để ý rằng giá trị của $f[i]$ chỉ dựa vào các $f[i - 1]$ nên ta chỉ cần duy tri trạng thái của vị trí hiện tại $i$ và vị trí trước đấy $i-1$ và cập nhật lần lượt sau khi xét đến vị trí $i + 1$. Như vậy trường $i$ có thể bỏ đi và lưu trực tiếp vào mảng $f[diff]$ ở mỗi lượt tính toán hàng $i$.