# Xâu Con Chung Lớn Nhất - Editorial

### Subtask 1

Tạo ra tất cả các xâu con liên tiếp gồm toàn chữ số của hai xâu và tìm ra xâu chung lớn nhất.

Độ phức tạp: $O(n^2 \times m^2)$.

### Subtask 2

Gọi $dp[i][j]$ là xâu con chung gồm toàn chữ số dài nhất giữa hai xâu $X_{1...i}$ và $Y_{1...j}$. 

Do xâu con chung cần tìm phải là liên tiếp, nên khá dễ để phát hiện công thức:

$$dp[i][j] = dp[i - 1][j - 1] + x_i;$$

<center>

*với $x_i = y_j$ và $x_i$ là kí tự chữ số*
</center>

Trong quá trình tính toán các $dp[i][j],$ ta sẽ cập nhật luôn xâu con chung toàn chữ số có giá trị lớn nhất vào một biến kết quả. Để cập nhật được, ta cần sử dụng so sánh hai số bằng chuỗi kí tự.

Độ phức tạp: $O(n \times m)$.