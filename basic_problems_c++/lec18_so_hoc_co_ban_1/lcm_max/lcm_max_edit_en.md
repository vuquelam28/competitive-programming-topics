# Least Common Multiple - Editorial

Let $maxLCM$ be the largest value of $LCM(x, a)$.

***Solution:*** Iterate all the values from $x$ to $b$ in descending order, $LCM(x, a) = x \times a / GCD(x, a)$. When $GCD(x, a) = 1$, $LCM(x, a)$ is surely maximized. Thus, there is no need to continue examining. 

***Verify:*** With the two numbers $x$ and $a$, least common multiple is calculated by the formula: $\text{LCM}(x, a) = x\times a / \text{GCD}(x, a)$. Supposing $\text{GCD}(x_max, a) = 1$ at $x = x_max$, then with all values of $x < x_max,$ $\text{LCM}(x, a) < \text{LCM}(x_max, a)$.
