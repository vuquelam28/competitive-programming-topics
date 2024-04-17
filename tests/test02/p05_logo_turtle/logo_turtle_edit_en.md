# Turtle Robot - Editorial

Let $dp[i][j][d]$ be the longest distance the turtle can travel if the first $i$ commands are executed with $j$ changes being made on these $i$ commands and the turtle's current direction is $d$ ($d = 0$ or $d = 1$ corresponding to the left or right direction).

At the beginning, we assume that the turtle is at position $0,$ and facing right. You can choose the beginning direction as you wish. 

Getting to the $i$-$th$ command, $j$ changes are made with $k$ of which being made on the $i$-$th$ command, and we have:

- If $k$ is odd, the $i$-$th$ command will be changed as follows:

    - If $s[i] =$ `F`, this command is changed from travelling to turning $180^\circ$. Then, the distance travelled will not change but re-update based on the direction, so the formula is:

    $$\begin{cases}dp[i][j][0] = \text{max}\big(dp[i][j][0], dp[i - 1][j - k][0]\big). \\dp[i][j][1] = \text{max}\big(dp[i][j][1], dp[i - 1][j - k][0]\big). \end{cases}$$

    - If $s[i] =$ `T`, this command will be changed from turning $180^\circ$ to travelling. Then, if the current direction is left, the distance decreases by $1,$ or else the distance increases by $1;$ and the direction remains the same. The formula will be:

    $$\begin{cases}dp[i][j][0] = \text{max}\big(dp[i][j][0], dp[i - 1][j - k][0] - 1\big). \\dp[i][j][1] = \text{max}\big(dp[i][j][1], dp[i - 1][j - k][1] + 1\big). \end{cases}$$

- If $k$ is even, the $i$-$th$ command will remain the same. The formula is still built on similar observations:

    - If $s[i] =$ `F`: The distance increases/decreases according to the direction, the formula is:

    $$\begin{cases}dp[i][j][0] = \text{max}\big(dp[i][j][0], dp[i - 1][j - k][0] - 1\big). \\dp[i][j][1] = \text{max}\big(dp[i][j][1], dp[i - 1][j - k][1] + 1\big). \end{cases}$$

    - If $s[i] =$ `T`: The distance does not change, but only the direction does,  and the formula is:

    $$\begin{cases}dp[i][j][0] = \text{max}\big(dp[i][j][0], dp[i - 1][j - k][0]\big). \\dp[i][j][1] = \text{max}\big(dp[i][j][1], dp[i - 1][j - k][0]\big). \end{cases}$$

The final result is $\text{max}\big(dp[m][n][0], dp[m][n][1]\big)$ where $m$ is the length of the original string of commands.

Base cases for dynamic programming:

- $dp[0][0][0] = dp[0][0][1] = 0$.
- $dp[i][k][0] = dp[i][j][1] = -\infty$.

Complexity: $O(m \times n^2)$.