# Nhân Viên - Editorial

Bài toán có thể phát biểu lại thành: Cho một cây $T$ gồm $n$ đỉnh, $n - 1$ cạnh. Đếm số lượng cây con liên thông có gốc là đỉnh $n$.

Đặt $dp[u]$ là số cây con liên thông nhận $u$ làm gốc. Giả sử $u$ có các con là $v_1, v_2,..., v_k,$ ta có:

- Nếu không chọn $v_i$ thì chỉ có $1$ cách chọn chính gốc $u$ (vì khi đó các con của $v_i$ sẽ không chọn được).
- Nếu chọn $v_i$ thì sẽ có $dp[v_i]$ cây con trong cây gốc $v_i$ ghép với $u$.

Theo nguyên lí nhân, ta có công thức truy hồi:

$$dp[u] = \prod(1 + dp[v_i]), i = [1...k]$$

Kết quả cuối cùng là $dp[n]$. Độ phức tạp giải thuật thu được là $O(n)$.