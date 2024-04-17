# Cột Điện - Editorial

Đầu tiên, ta có nhận định sau: Các cột không thể nâng lên cao hơn chiều cao của cột cao nhất, vì như vậy vừa khiến cho chi phí nâng cột nhiều lên mà độ chênh lệch giữa hai cột liên tiếp cũng không thể tốt hơn được. Vậy ta đặt $\text{hmax}$ là chiều cao của cột cao nhất ban đầu, các cột khác nếu nâng lên thì chỉ nâng tới $\text{hmax}$ thôi.

### Subtask 1

Do $N \le 10$ và $h_i \le 3$ nên có thể sử dụng quay lui để duyệt toàn bộ các trường hợp chiều cao của các cột rồi tính chi phí của từng trường hợp. Tổng số trường hợp sẽ là $3^{10},$ đủ để vượt qua subtask này.

### Subtask 2

Đặt $dp[i][j]$ là tổng chi phí nhỏ nhất phải trả cho các cột điện từ $1$ tới $i$ và cột thứ $i$ có chiều cao là $j$. Ta có công thức sau:
$$dp[i][j] =\text{min }\big\{dp[i - 1][k] + c \times |j - k| + (j - h_i)^2\big\}; \text{với } 1 \le i \le N \text{ và }j \ge h_i$$

Như vậy tiến hành duyệt qua các cột điện, ứng với mỗi cột $i$ duyệt qua các chiều cao $j$ từ $h_i$ tới $hmax,$ ứng với mỗi $j$ lại duyệt chọn các chiều cao $k$ cho cột $i - 1 \ (h_{i - 1} \le k \le \text{hmax})$ để tối ưu hóa cho $dp[i][j]$. Tổng độ phức tạp của giải thuật là $O(N \times \text{hmax}^2),$ có thể xử lý được subtask này.

### Subtask 3

Vẫn dựa trên ý tưởng của subtask $2,$ tuy nhiên ta nhận thấy nếu sử dụng $3$ vòng lặp như trên thì độ phức tạp có thể lên tới $O(10^9),$ không thể vượt qua subtask cuối. Cần cải tiến giải thuật này, nhận xét thấy:

$$dp[i][j] = \begin{cases}(dp[i - 1][k] + ck) - cj + (j - h_i)^2,&\text{với }k > j.\\(dp[i - 1][k] - ck) + cj + (j - h_i)^2,&\text{với }k \le j.\end{cases}$$

Rõ ràng các $dp[i][j]$ hoàn toàn được tính dựa trên các $dp[i - 1][k]$. Vì thế ta tạo thêm hai mảng sau ở mỗi bước tính toán $dp[i][j]$:

$$\begin{cases}low[i - 1][j] = \text{min}\{dp[i - 1][k] - ck\},&\text{với }1\le k \le j.\\high[i - 1][j] = \text{min}\{dp[i - 1][k] + ck\},&\text{với }\text{hmax} \ge k > j. \end{cases}$$

Hai mảng này có thể tính trước bằng công thức quy hoạch động mỗi khi chuẩn bị tính một hàng $i$ trên bảng phương án $dp$ như sau:

$$\begin{cases}low[i - 1][k] = \text{min}(low[i - 1][k - 1], dp[i - 1][k] - ck),& \text{với } k = 1 \rightarrow \text{hmax}.\\ high[i - 1][k] = \text{min}(high[i - 1][k + 1], dp[i - 1][k] + ck), & \text{với } k = \text{hmax} \rightarrow 1. \end{cases}$$

Khi đó, công thức để tính toàn bộ hàng thứ $i$ của bảng phương án là:

$$dp[i][j] = \text{min}(low[i - 1][j] + cj, high[i - 1][j] - cj),  \text{với } h_i \le j \le \text{hmax}$$.

Độ phức tạp giải thuật lúc này giảm xuống còn $O(N.\text{hmax})$ và và có thể vượt qua subtask $3$.