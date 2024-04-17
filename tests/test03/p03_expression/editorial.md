# Biểu Thức - Editorial

### Subtask 1

Biểu diễn tập nghiệm của bài toán dưới dạng một vector nghiệm $(x_0, x_1, x_2, \dots)$ với điều kiện như sau:
- $2 \le x_i \le k$.
- $\sum x_i \le n$.
- $x_i$ mang dấu $+$ hoặc $\times$ ở phía trước, ngoại trừ $x_0$.

Thử tất cả các trường hợp và đếm số nghiệm có giá trị biểu thức đúng bằng $n$.

***Độ phức tạp:*** $O\big((k \times 2)^{n}\big)$.

### Subtask 2

Nhận xét thấy, do quy tắc tính biểu thức là nhân chia trước, cộng trừ sau nên ta có thể tách riêng các cụm gồm toàn dấu $\times$ thành những nhóm có tích xác định. Sau đó, các nhóm sẽ chỉ nối với nhau bằng phép cộng thôi. Lấy ví dụ, $2 + 3 \times 4 \times 5 + 9 \times 6 + 4$ sẽ trở thành một dãy gồm $4$ nhóm:

$$(2) + (3 \times 4 \times 5) + (9 \times 6) + (4)$$

Gọi $dp[i]$ là số cách tạo ra một biểu thức có tổng các nhóm đúng bằng $i$. Nếu như ta chọn một nhóm bất kì có tích là $j,$ thì công thức sẽ là:

$$\begin{cases}dp[0] = 1. \\ dp[i] = dp[i] + dp[i - j] \times \text{ways}[j]; \forall i, j: 2 \le j \le i \le n. \end{cases}$$

Trong đó $\text{ways}[j]$ là số cách chọn ra các số thuộc đoạn $[2, k]$ mà có tích đúng bằng $j$. 

Như vậy trước tiên ta cần phải tạo ra được bảng phương án $\text{ways}[j]$. Công thức cũng khá đơn giản:

$$\begin{cases}\text{ways}[1] = 1. \\ \text{ways}[j] = \sum_{i = 2}^k \text{ways}\left[\frac{j}{i}\right]; \text{và } j \equiv 0 \ (\text{mod } i). \end{cases}$$

***Độ phức tạp:*** $O(n \times k)$.