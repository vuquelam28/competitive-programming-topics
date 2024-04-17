# Power Pole - Editorial

Firstly, we have the following observation: The poles cannot be raised to higher than the initial highest pole, since it not only increases the cost of raising the poles, but also worsens the height differences between two adjacent poles. Thus, let $hmax$ be the height of the initial highest pole; the other poles, if necessary, can only be raised to $\text{hmax}$.

***For subtask 1:*** As $N \le 10$ and $h_i \le 3,$ we can use backtracking to iterate through all different cases of heights of the poles and calculate the fee for each case. The total number of cases will be$3^{10},$ which is enough to pass this subtask.

***For subtask 2:*** 

Let $dp[i][j]$ be the minimum total fee paid for the power poles from $1$ to $i$ and the $i$-$th$ pole has a height of $j$. We have the following formula:
$$dp[i][j] =\text{min }\{dp[i - 1][k] + c \times |j - k| + (j - h_i)^2\}; \text{where } 1 \le i \le N \text{ and }j \ge h_i$$

Then, iterate through all the poles, for each $i$-$th$ pole, iterate through all heights of $j$ from $h_i$ to $hmax.$ For each value of $j,$ iterate to choose the heights $k$ for the $i-1$-$th$ pole $(h_{i - 1} \le k \le \text{hmax})$ to optimize for $dp[i][j]$. The total complexity of this algorithm is $O(N \times \text{hmax}^2),$ which is enough for this subtask.

***For subtask 3:*** Still based on the idea of subtask $2,$ but we observe that using $3$ loops means that the complexity can reach $O(10^9),$ which cannot pass this final subtask. To improve the algorithm, notice that:
$$dp[i][j] = \begin{cases}(dp[i - 1][k] + ck) - cj + (j - h_i)^2,&\text{where }k > j.\\(dp[i - 1][k] - ck) + cj + (j - h_i)^2,&\text{where }k \le j.\end{cases}$$

Obviously, the values of $dp[i][j]$ are completely calculated based on the values of $dp[i - 1][k]$. Therefore, we can create two arrays after each step of calculating $dp[i][j]$:
$$\begin{cases}low[i - 1][j] = \text{min}\{dp[i - 1][k] - ck\},&\text{where }1\le k \le j.\\high[i - 1][j] = \text{min}\{dp[i - 1][k] + ck\},&\text{where }\text{hmax} \ge k > j. \end{cases}$$

These two arrays can be precalculated using the dynamic programming formula when preparing to calculate the $i$-$th$ row in the $dp$ plan table as follows:
$$\begin{cases}low[i - 1][k] = \text{min}(low[i - 1][k - 1], dp[i - 1][k] - ck),& \text{where } k = 1 \rightarrow \text{hmax}.\\ high[i - 1][k] = \text{min}(high[i - 1][k + 1], dp[i - 1][k] + ck), & \text{where } k = \text{hmax} \rightarrow 1. \end{cases}$$

Then, the formula to calculate the entire $i$-$th$ row of the plan table is:
$$dp[i][j] = \text{min}(low[i - 1][j] + cj, high[i - 1][j] - cj),  \text{where } h_i \le j \le \text{hmax}$$

The complexity of this algorithm is reduced to $O(N.\text{hmax})$ and can pass the $3rd$ subtask.