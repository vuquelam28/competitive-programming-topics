# Perfect Number Pair

An and his girlfriend participated in the perfect couple show. The reason is that this year, the show replaced the dancing contest with a coding contest, which is An's advantage.

In the qualification round of the show, the Judicial panel gave the following problem: For each $(a, b)$ pair, in each operation, An can generate one of the two new pairs $(a + b, b)$ or $(a, a + b)$. An is given the $(1, 1)$ pair and a positive integer $N$. He needs to use the least operations to turn the initial $(1, 1)$ pair into a pair that has at least one number equal to $N$. Too nervous about being on TV for the first time, An can't think of anything, and of course, neither can his girlfriend!

***Task:*** Help this couple to solve the problem given by the Judicial panel.

## Input

- A single line contains the positive integer $N$.

## Constraints

- $1 \le N \le 10^6$.

## Output

- A single integer: the minimum number of operations needed.

## Sample Input

```
5
```

## Sample Output

```
3
```

## Explanation

The $(1,1)$ pair can be transformed to get the number $5$ in $3$ operations:
$$(1, 1) \rightarrow (1, 2) \rightarrow (3, 2) \rightarrow (5, 2)$$
