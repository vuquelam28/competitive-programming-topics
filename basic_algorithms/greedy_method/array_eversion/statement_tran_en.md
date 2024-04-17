# Array Eversion

You are given an array $a$ of length $n$.

Let's define the *eversion* operation. Let $x = a_n$. Then array $a$ is partitioned into two parts: left and right. The left part contains the elements of $a$ that are not greater than $x$ ($\le x$). The right part contains the elements of $a$ that are strictly greater than $x$ ($> x$). The order of elements in each part is kept the same as before the operation, i. e. the partition is stable. Then the array is replaced with the concatenation of the left and the right parts.

For example, if the array $a$ is $[2, 4, 1, 5, 3]$, the eversion goes like this: $[2, 4, 1, 5, 3] \to [2, 1, 3], [4, 5] \to [2, 1, 3, 4, 5]$.

We start with the array $a$ and perform eversions on this array. We can prove that after several eversions the array $a$ stops changing. Output the minimum number $k$ such that the array stops changing after $k$ eversions.

## Input

- The first line contains a single integer $n$ ($1 \le n \le 2 \times 10^5$).
- The second line contains $n$ integers $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^9$).

## Constraints

- See inline constraints in the input description

## Subtasks

- Subtask $1$ ($30\%$ of points): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ of points): Original constraints.

## Output

- Print a single integer $k$ — the number of eversions after which the array stops changing.

## Sample Input 1

```
5
2 4 1 5 3
```

## Sample Output 1

```
1
```

## Sample Input 2

```
5
5 3 2 4 1
```

## Sample Output 2

```
2
```

## Sample Input 3

```
4
1 1 1 1
```

## Sample Output 3

```
0
```
