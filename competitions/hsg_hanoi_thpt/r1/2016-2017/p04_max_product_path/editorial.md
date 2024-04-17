# Đường Đi Có Tích Lớn Nhất - Editorial

### Subtask 1

Với $m, n \le 12,$ cách làm đơn giản nhất cho subtask này là quay lui mọi đường đi. Mỗi khi thu được một đường đi, ta tính toán tích bằng cách:

- Đổi các số trên đường đi sang dạng thập phân.
- Nhân chúng với nhau và chọn ra tích lớn nhất.
- Đổi ngược kết quả lớn nhất lại thành hệ nhị phân.

***Độ phức tạp:*** $O(n \times 3^m)$.

### Subtask 2

Ta nhận thấy bài toán này có tính chất đệ quy. Gọi $dp[i][j]$ là tích của đường đi lớn nhất từ một ô bất kì trên hàng $1$ tới ô $(i, j)$. Ta có công thức truy hồi khá dễ:

$$dp[i][j] = \text{max}\big(dp[i - 1][j - 1], dp[i - 1][j], dp[i - 1][j + 1]\big) \times a_{i, j}$$

Tuy nhiên, điều cần làm để cải tiến tốc độ của thuật toán là thay vì đổi qua thập phân rồi nhân và lại đổi ngược lại, thì ta sẽ trực tiếp thực hiện phép nhân và phép so sánh trên hệ nhị phân. Đối với các bạn lập trình C++, ta cần phải cài đặt các phép toán nói trên bằng kĩ thuật Tính toán số lớn.

Kết quả cuối cùng sẽ là $\text{max}\big(dp[m][j]\big); \forall j: 1 \le j \le n$.

***Độ phức tạp:*** $O\big(m \times n \times \text{length}(a_{i, j})^2\big)$.

