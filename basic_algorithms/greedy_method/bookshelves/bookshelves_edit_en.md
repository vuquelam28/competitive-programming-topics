# Bookshelf - Editorial

We know that each book can only have a thickness of $1$ or $2,$ so if we place $i$ books with a thickness of $1$ and $j$ books with a thickness of $2$ vertically, the total thickness will be $(i + 2j)$. We need to find the values of $i$ and $j$ such that the total width of $(N - i - j)$ remaining books does not exceed $(i + 2j)$.

As the book's thicknesses are fixed, we can apply the greedy algorithm as follows: Prioritize placing the books with large widths vertically, and books with small widths horizontally. Thus, we try every $(i, j)$ pairs, where $(i, j \ge 0),$ pick out $i$ books with thickness of $1$ that have the largest widths, $j$ books with thickness of $2$ that have the largest widths. Then, check whether the total width of $(N - i - j)$ remaining books is less than or equal to $(i + 2j)$ or not, if so, update the minimum total thickness to be $(i + 2j)$. Applying sort and iteration, we can obtain an algorithm with a complexity of $O(N^3),$ satisfying the problem's constraints.

Another approach to this problem is using dynamic programming, which is not necessary, so I don't mention it here.