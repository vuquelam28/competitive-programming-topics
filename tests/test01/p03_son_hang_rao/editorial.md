# Sơn Hàng Rào - Editorial

Ta phát biểu lại bài toán như sau: Đếm số cách sơn $n$ tấm ván bằng $m$ màu sao cho khi xét số lượng ít nhất các nhóm gồm các tấm ván cùng màu liên tiếp nhau thì có đúng $k + 1$ nhóm. Ta sẽ sử dụng quy hoạch động và tổ hợp để giải, các công thức bên dưới $k$ đều được tăng lên $1$ đơn vị (coi luôn $k = k + 1$).

### Subtask 1

Gọi $f[i][j][h]$ là số cách sơn khi xét đến tấm ván thứ $i,$ được sơn màu $j$ và có $h$ nhóm khác nhau. Ta sẽ tính $f[i][j][h]$ như sau:

- Bài toán cơ sở: $f[1][j][1] = 1$, $1 \le j \le m$.
- Khi ta sơn màu giống với màu trước thì số nhóm vẫn giữ nguyên: $f[i][j][h] = f[i][j][h] + f[i - 1][j][h]$.
- Khi ta sơn màu khác với màu trước thì số nhóm sẽ tăng lên $1$: $f[i][j][h] = f[i][j][h] + f[i - 1][j_1][h - 1]; \forall j_1 \ne j$.

Kết quả: $\sum_{j = 1}^{m} f[n][j][k]$.

***Độ phức tạp:*** $O(n^3)$.

### Subtask 2

Ta sẽ cải tiến từ subtask1 bằng cách bỏ đi tham số màu được sơn cho tấm $i$. Gọi $f[i][j]$ là số cách sơn hàng rào khi xét đến tấm ván thứ $i$ và đã phân ra được $j$ nhóm. Ta sẽ tính $f[i][j]$ như sau:

- Bài toán cơ sở: $f[1][1] = m$.
- Khi ta sơn màu giống với màu trước thì số nhóm vấn giữ nguyên: $f[i][j] += f[i - 1][j]$.
- Khi ta sơn màu khác với màu trước thì số nhóm tăng lên $1$ và có $m - 1$ cách chọn màu cho tấm ván $i - 1$: $f[i][j] = f[i][j] + f[i - 1][j - 1] \times (m - 1)$.

Kết quả: $f[n][k]$.

Ngoài ra ta có thể xây dựng công thức tổ hợp sau: Chọn $k$ nhóm và chọn $m$ màu để sơn sao cho màu của các tấm ván chung một nhóm sẽ khác nhau và khác màu khác với màu với tấm ván của nhóm bên trái trước đó. Vị trí đầu tiên của tấm ván nhóm đầu tiên đã cố định, nên ta còn $k - 1$ cách chọn vị trí đầu tiên của các nhóm phía sau, vậy ta có $\binom{n - 1}{k - 1}$ cách phân nhóm. Nhóm đầu tiên có $m$ cách chọn màu, $(k - 1)$ nhóm còn lại có $(m - 1)$ cách chọn màu. Vậy kết quả là: $\binom{n - 1}{k - 1} \times m \times (m - 1)^{k - 1}$.

***Độ phức tạp:*** $O(n^2)$.