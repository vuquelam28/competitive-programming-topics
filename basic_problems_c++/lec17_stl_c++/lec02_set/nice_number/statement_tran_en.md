# Nice Number

Let's call a number $k$ - good if it contains all the digits not exceeding $k \ (0, ..., k)$. Bi has a number $k$ and an array $a$ containing $n$ numbers. Find and help Bi see how many nice numbers $k$ are in $a$ (count each number each time it appears in the array $a$).

***Requirement:*** Determine how many $k$ - good numbers are there in the array $a?$.

## Input

- The first line contains $n$ and $k$ corresponding to the topic.
- $n$ next line, each line contains a number $a_i$ is the number that Bi entered.

## Constraints

- $1 \le n \le 10^5$.
- $0 \le k \le 9$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Output

- Print out the number of $k$ - good numbers in the range $a$.

## Subtasks

- Subtask $1$ ($30\%$ points): $1 \le n \le 10$.
- Subtask $2$ ($70\%$ points): Original constraints.

## Sample Input 1

```
2 1
1
10
```

## Sample Output 1

```
1
```


