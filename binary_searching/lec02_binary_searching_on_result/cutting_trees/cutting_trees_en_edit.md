# Cutting Trees - Editorial

### Subtask 1

Iterate through all height from $\text{max}(h_i)$ down to $1$. For each height, iterate through all trees to calculate the total amount of wood obtained. If the amount of wood obtained is not less than $m,$ take that result and end the program.

Complexity: $O\big(n \times \text{max}(h_i)\big)$.

### Subtask 2

***Observation:*** Let $f(x)$ be the function representing the result of the problem (total amount of wood obtained if cutting at the height of $x$). Observe that when $x$ increases, $f(x)$ decreases, which means $f(x)$ is a monotonic function.

Let $g(x)$ be the condition function of the problem, meaning "whether cutting at the height of $x$ can give an amount of wood not less than $m$ or not". The problem required the largest value of $x,$ so we can reduce the problem to "finding the largest value of $x$ such that $g(x) = \text{true}$". Then, as $f(x)$ is a decreasing function, $g(x)$ will be a set of values: $\text{true, true,..., true, false, false,..., false},$ which satisfies the conditions of a ***Binary searching*** problem.

Applying binary searching, we will find the highest height $x \ \big(1 \le x \le \text{max}(h_i)\big)$ such that "it is able to get an amount of wood not less than $m$ with a cut at the height of $x$". Building the function $g(x)$ can be performed by the following formula:

$$\sum_{i = 1}^n (h_i - x) \ge m; \forall h_i > x$$

If $g(x)$ is true with a value of $x,$ increase $x$; otherwise, decreases $x$.

Complexity: $O\Big(n \times \log_2\big(\text{max}(h_i)\big)\Big)$.