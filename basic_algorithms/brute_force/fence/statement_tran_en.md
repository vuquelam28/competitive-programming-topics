# Fence Posts

After $10$ years working in the information technology industry, Ms. Hai Le now has a great fortune and a huge house with a garden of all-year lush trees behind. Ms. Hai Le's garden has a white-painted fence, fence posts have heights of $c_1, c_2, \dots, c_m,$ respectively. However, Ms. Le is upset because this fence - from her point of view - is imperfect. A perfect fence, according to her, needs to satisfy these conditions:

- $c_i < c_{i + 1}$ if $i$ is odd and $i < m$.
- $c_i > c_{i + 1}$ if $i$ is even and $i < m$.

For example, the fences with heights being $[1, 5], [3, 6, 6]$ or $[2, 7, 5, 9]$ will be perfect, while fences like $[1, 1]$ or $[8, 9, 10]$ will be imperfect.

After days of thinking, Ms. Le decided to pull the fence posts up herself and re-plug them to make the fence perfect. However, because she is a woman and has limited physical strength, Ms. Le can only pull any two fence posts $i, j \ (i < j)$ up and swap them, which can only be done once.

***Task:*** Help Ms. Le count how many such ways of swapping there are.

## Input

- The first line contains the positive integer $m$ - length of the fence.
- The second line contains $m$ positive integers $c_1, c_2, \dots, c_m$ separated by spaces - heights of the fence posts. The original fence is guaranteed to be imperfect.

## Constraints

- $2 \le m \le 150000$.
- $1 \le c_i \le 150000; \forall i: 1 \le i \le m$.

## Subtasks

- Subtask $1$ ($40\%$ of the points): $2 \le m \le 50$.
- Subtask $2$ ($60\%$ of the points): Original constraints.

## Output

- A single integer: number of ways of swapping Ms. Le can perform, or print $0$ if there are no such ways.

## Sample Input 1

```
5
2 8 4 7 7
```

## Sample Output 1

```
2
```

## Sample Input 2

```
4
200 150 100 50
```

## Sample Output 2

```
1
```
