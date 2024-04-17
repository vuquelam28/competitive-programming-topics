# Divisor

A positive integer $n$ is factorized into prime factors as follows:
$$n = p_1^{k_1} \times p_2^{k_2} \times \cdots \times p_m^{k_m}$$

***Task:*** Given two non-negative integers $A, B \ (A \le B),$ count the number of $n$'s divisors belonging to the range $[A, B].$

## Input

- The first line contains the positive integer $m$.
- $m$ lines follow. The $i$-$th$ line contains two positive integers $p_i$ and $k_i$ representing the factorization of $n,$ where the values of $p_i$ are all different.
- The last three lines are three questions, each contains two non-negative integers $(A, B)$ corresponding to one question.

## Constraints

- $1 \le m \le 25$.
- $1 \le p_i, k_i \le 10^9; \forall i: 1 \le i \le m$.
- $0 \le A \le B \le 10^9$.

## Output

- On three lines, print the answer for each question in the input on each line.

## Subtasks

- Subtask $1$ ($40\%$ of the points): $m \le 5; 0 \le A \le B \le 10^6$.
- Subtask $2$ ($40\%$ of the points): $m \le 10; 0 \le A \le B \le 10^9$.
Subtask $3$ ($20\%$ of the points): Original constraints.

## Sample Input

```
3
2 4
3 4
5 4
1 5
1 10
1 5 
```

## Sample Output

```
5
9
5
```