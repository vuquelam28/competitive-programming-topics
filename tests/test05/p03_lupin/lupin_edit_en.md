# The Superthief - Editorial

Consider the problem if there was only one shelf. Since the vases can only be taken from the two ends of each shelf, we can create a cumulative array $\text{total_value}[i]$ - the total value of vases positioned from $1$ to $i$. Then, suppose that we take $j$ vases from this shelf, it can be split into two turns: Take $k$ vases from the left side and $(j - k)$ from the right side; by iterating through all values of $k$ from $0$ to $j$, we then get the optimum result for one shelf.

Now, consider the problem with $N$ shelves. Firstly, create a cumulative array $\text{total_value}[i][j]$ - the total value of vases positioned from $1$ to $j$ on the $i$-$th$ shelf. The dynamic programming formula is:
$$\text{total_value}[i][j] = \text{total_value}[i][j - 1] + pot[i][j]$$
 
Let $dp[i][j]$ be the maximum total value Lupin can smash when smashing $j$ vases from the $1st$ to the $i$-$th$ shelf $(1 \le i \le N, 1 \le j \le M)$. Suppose that he smashes $x$ vases $(0 \le x \le k_i)$ on the $i$-$th$ shelf, he needs to smash $j - x$ vases from the $1st$ to the $i-1$-$th$ shelf. Thus, the dynamic programming formula is:
$$dp[i][j] = \text{max}(dp[i - 1][j - x] + \{\text{the maximum total value of x vases on the i-th shelf}\}) \ (*)$$

For subtask $1,$ we can iterate through all the options of $x$ vases on the $i$-$th$ shelf just like the one-shelf problem: Try choosing $y$ vases from the left side and $x - y$ vases from the right side.

For subtask $2,$ we need a better approach. Observe that choosing $x$ vases on the $i$-$th$ shelf means we can find the best way to choose when considering all $(y, x - y)$ pairs. Let $\text{max_row}[i][j]$ be the maximum total value obtained if $j$ vases on the $i$-$th$ shelf are smashed. We get a dynamic programming formula:
$$\text{max_row}[i][j] = \text{max}(\text{total_value}[i][y] + \text{total_value}[i][k_i] - \text{total_value}[i][k_i - (j - y)])$$

Then, the dynamic programming formula $(*)$ will become:
$$dp[i][j] = \text{max}(dp[i - 1][j - x] + \text{max_row}[i][j])$$

The complexity of the algorithm reduces to $O(N \times k_i \times M),$ which is enough to pass all the test cases. The final result of the problem is obviously $dp[N][M]$.