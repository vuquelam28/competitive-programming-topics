# Cutting The Sequence

Huyen has a sequence consisting of $n$ elements $a_1, a_2,\dots, a_n$. She wants to cut the sequence into subsequences including consecutive elements of the sequence such that each subsequence's elements are not descending. 

***Task:*** Find the minimum number of subsequences that Huyen needs to cut in order to achieve above conditions?

## Input

- The first line contains an integer $n$.
- The second line contains $n$ integers $a_1, a_2,\dots, a_n$ separated by a blank space.

## Constraints

- $1 \le n \le 10^5$.
- $|a_i| \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ of the points): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ of the points): Original constraints.

## Output

- Print the minimum number of subsequences that Huyen needs to cut.

## Sample Input 1

```
6
3 6 1 7 8 2
```

## Sample Output 1

```
3
```

## Explanation 1

The sequence should be cut into $3$ subsequences: $$\{3, 6\}; \{1, 7, 8\}$ and $\{2)\}$.

