# Next Permutation

Given $H$ - a permutation of length $n$ of the integers from $1$ to $n$. The permutation $P$ is called the next permutation of $H$ if $P$ has the smallest lexicographical order but greater than $H's$.

***Task:*** Find $P$ - the next permutation of $H$.

## Input

- The first line contains the integer $n$ - length of the permutation.
- The second line contains one permutation of the integers from $1$ to $n$.

## Constraints

- $1 \le n \le 10^4$.

## Subtasks

- Subtask $1$ ($50\%$ of the points): $1 \le n \le 200$.
- Subtask $2$ ($50\%$ of the points): Original constraints.

## Output

- Print the next permutation found in one line; the numbers to be separated by spaces.

## Sample Input 1

```
10
3 6 1 5 2 8 4 10 7 9
```

## Sample Output 1

```
3 6 1 5 2 8 4 10 9 7
```
