# Chia Hết - Editorial

### Subtask 1

Quay lui để thử mọi cách chọn các dãy con và xem tích của dãy đó có chia hết cho $10^x$ không.

Độ phức tạp: $O(2^n)$.

### Subtask 2

Gọi $dp[i][j][k]$ là số lượng số chọn ít nhất từ $a_1$ tới $a_i,$ sao cho tích các số được chọn chia hết cho $2^j \times 5^k$.

Bởi vì ta cần tìm các số sao cho tích của chúng chia hết cho $10^x,$ mà $x \le 18$ nên tối đa chỉ cần chọn các số chia hết cho $2^{18} \times 5^{18},$ tức là $j, k \le 18$.

Khởi tạo trước mảng $\text{cnt2}[i]$ và $\text{cnt5}[i]$ là số lượng thừa số $2$ và số lượng thừa số $5$ trong số $a_i$.

Sử dụng quy hoạch động giống ý tưởng bài toán cái túi như sau: Xét số thứ $i,$ ta có:
- Nếu không chọn số thứ $i,$ thì $dp[i][j][k] = dp[i - 1][j][k]$.
- Nếu chọn số thứ $i,$ xảy ra bốn trường hợp dưới đây:
    - Số thứ $i$ chia hết cho $2^j \times 5^k,$ thì chỉ cần chọn duy nhất phần tử $a_i$ là đủ, tức là: 
    $$dp[i][j][k] = 1$$
    - Nếu số thứ $i$ chỉ chia hết cho $5^k$ (tức là $\text{cnt2}[i] < j$ và $\text{cnt5}[i] \ge k$) thì ta cần chọn $a_i$ và chọn ít nhất các số trong đoạn $[1, i - 1]$ sao cho tích của chúng chia hết cho $2^{j - \text{cnt2}[i]}$ và không cần chia hết cho $5$ nữa, tức là: 
    $$dp[i][j][k] = dp\big[i - 1\big]\big[j - \text{cnt2}[i]\big]\big[0\big] + 1$$
    - Nếu số thứ $i$ chỉ chia hết cho $2^j$ (tức là $\text{cnt2}[i] \ge j$ và $\text{cnt5}[i] < k$) thì ta cần chọn $a_i$ và chọn ít nhất các số trong đoạn $[1, i - 1]$ sao cho tích của chúng chia hết cho $5^{k - \text{cnt5}[i]}$ và không cần chia hết cho $2$ nữa, tức là:
    $$dp[i][j][k] = dp\big[i - 1\big]\big[0\big]\big[k - \text{cnt5}[i]\big] + 1$$
    - Nếu số thứ $i$ không chia hết cho $2^j$ và $5^k,$ thì ta cần chọn $a_i$ và chọn ít nhất các số trong đoạn $[1, i - 1]$ sao cho tích của chúng chia hết cho $2^{j - \text{cnt2}[i]} \times 5^{k - \text{cnt5}[i]},$ tức là:
    $$dp[i][j][k] = dp\big[i - 1\big]\big[j - \text{cnt2}[i]\big]\big[k - \text{cnt5}[i]\big] + 1$$
- Tối ưu hóa cho $dp[i][j][k]$ từ tất cả các trường hợp trên, ta sẽ thu được kết quả là $dp[n][x][x]$.

Cơ sở quy hoạch động: 
- Ban đầu tất cả các $dp[i][0][0] = 1$ - luôn luôn có thể chọn ra $1$ số để nó chia hết cho $2^0 \times 5^0 = 1$.
- Các $dp[i][j][k] = \infty$ với $j \ne 0$ hoặc $k \ne 0$.

***Độ phức tạp:*** $O(n \times x^2)$.