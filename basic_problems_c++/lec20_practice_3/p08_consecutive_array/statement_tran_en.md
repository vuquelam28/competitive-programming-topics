# Consecutive Array

You are given an array consisting of $n$ distinct natural numbers in ascending order. A subarray of the given array is defined as one or some consecutive elements in the array, but in this cae we are only looking at subarray of length greater than or equal to $2$.

***Task:*** Determine the subarray of length greater than or equal to $2$ that has the greatest sum and consists of consecutive numbers counting from the start of the array.

## Input

- The first line contain the positive integer $n$ - size of the array
- The second line contains $n$ positive integers $a_1, a_2, \dots, a_n$ separated by a space.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^5; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($40\%$ of the points): $1 \le n \le 100$.
- Subtask $2$ ($60\%$ of the points): Original constraints.

## Output

- Print the sum of the subarray with the largest sum that satisfies the given conditions. If no such subarray exists, print $0$.

## Sample Input 1

```
11
1 2 3 5 6 7 9 10 90 91 100
```

## Sample Output 1

```
181
```

## Explanation 1
The subarray found is $[90, 91]$.

