# Đường Cao Tốc - Editorial

***Đối với subtask 1:***

Ứng với mỗi đề xuất, duyệt qua tất cả các vùng địa hình, vùng nào thấp hơn đề xuất thì tăng lượng đất phải đắp thêm, vùng nào cao hơn đề xuất thì tăng lượng đất phải san bớt đi. Giải thuật có độ phức tạp $O(M \times N)$.

***Đối với subtask 2:***

Sắp xếp lại dãy các chiều cao địa hình tăng dần, rồi tạo mảng $sum[i]$ là tổng từ $h_1$ tới $h_i$. Ứng với mỗi đề xuất $c,$ vì mảng $h$ đã sắp xếp tăng dần nên sẽ tồn tại một vị trí $\text{mid\_pos}$ chia mảng $h$ làm hai nửa thỏa mãn:
$$\begin{cases}h_i \le c; \forall i: 1 \le i \le \text{mid\_pos} \\ h_i > c; \forall i: \text{mid\_pos} < i \le N\end{cases}$$

Áp dụng công thức lấy tổng một đoạn trên mảng cộng dồn, ta có:
- Với nửa phía trước, ta cần đắp thêm lượng đất là: $c \times \text{mid\_pos} - sum[\text{mid\_pos}]$.
- Với nửa phía sau, ta cần san bớt lượng đất là: $sum[N] - sum[\text{mid\_pos}] - c \times (N - \text{mid\_pos})$.

Giải thuật này có độ phức tạp giảm xuống còn $O(M \times \log(N))$.