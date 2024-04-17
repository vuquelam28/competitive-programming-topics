# Rùa Robot - Editorial

Gọi $dp[i][j][d]$ là quãng đường dài nhất mà chú rùa di chuyển được, nếu như thực hiện $i$ lệnh đầu tiên, tiến hành $j$ phép thay đổi trên $i$ lệnh đó và hướng di chuyển hiện tại của chú rùa là $d$ ($d = 0$ hoặc $d = 1$ tương ứng với hướng bên trái hoặc hướng bên phải).

Ban đầu, ta mặc định chú rùa đang ở vị trí $0,$ và  hướng sang bên phải. Các bạn có thể chọn hướng lúc đầu tùy ý.

Xét tới lệnh thứ $i,$ thực hiện $j$ phép thay đổi và trong đó có $k$ phép thực hiện trên lệnh thứ $i,$ ta có:

- Nếu như $k$ lẻ, thì lệnh thứ $i$ sẽ bị thay đổi, khi đó:

    - Nếu $s[i] =$ `F` thì lệnh này bị đổi từ di chuyển sang quay $180\degree$. Khi đó, quãng đường di chuyển được sẽ không thay đổi, chỉ cập nhật lại dựa trên hướng đi, nên công thức là:

    $$\begin{cases}dp[i][j][0] = \text{max}\big(dp[i][j][0], dp[i - 1][j - k][0]\big). \\dp[i][j][1] = \text{max}\big(dp[i][j][1], dp[i - 1][j - k][0]\big). \end{cases}$$

    - Còn nếu $s[i] =$ `T`, thì lệnh này bị đổi từ quay $180\degree$ sang di chuyển. Khi đó, nếu hướng hiện tại là trái thì quãng đường sẽ bị giảm đi $1,$ ngược lại thì quãng đường tăng thêm $1;$ đồng thời hướng di chuyển vẫn giữ nguyên. Công thức sẽ là:

    $$\begin{cases}dp[i][j][0] = \text{max}\big(dp[i][j][0], dp[i - 1][j - k][0] - 1\big). \\dp[i][j][1] = \text{max}\big(dp[i][j][1], dp[i - 1][j - k][1] + 1\big). \end{cases}$$

- Còn nếu $k$ chẵn, thì lệnh thứ $i$ sẽ giữ nguyên. Ta vẫn xây dựng công thức theo những nhận định tương tự trên:

    - Nếu $s[i] =$ `F`: Quãng đường di chuyển tăng/giảm theo hướng, công thức là: 

    $$\begin{cases}dp[i][j][0] = \text{max}\big(dp[i][j][0], dp[i - 1][j - k][0] - 1\big). \\dp[i][j][1] = \text{max}\big(dp[i][j][1], dp[i - 1][j - k][1] + 1\big). \end{cases}$$

    - Nếu $s[i] =$ `T`: Quãng đường di chuyển giữ nguyên, chỉ thay đổi hướng di chuyển, công thức là:

    $$\begin{cases}dp[i][j][0] = \text{max}\big(dp[i][j][0], dp[i - 1][j - k][0]\big). \\dp[i][j][1] = \text{max}\big(dp[i][j][1], dp[i - 1][j - k][0]\big). \end{cases}$$

Kết quả cuối cùng là $\text{max}\big(dp[m][n][0], dp[m][n][1]\big)$ với $m$ là độ dài của chuỗi lệnh ban đầu. 

Cơ sở quy hoạch động: 

- $dp[0][0][0] = dp[0][0][1] = 0$.
- $dp[i][k][0] = dp[i][j][1] = -\infty$.

***Độ phức tạp:*** $O(m \times n^2)$.