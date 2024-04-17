# Consecutive Array - Editorial

### Subtask 1

Use two loops to iterate through each consecutive subarray of the array, check the given conditions and update the greatest sum.

Complexity: $O(n^2)$.

### Subtask 2

Since the array consists of only positive integers, instead of examining every subarray, find subarrays containing consecutive numbers and obtain the greatest sum among these subarrays using one loop.
Suppose starting from position $i,$ find position $j$ farthest from $i$ to the back such that $[i, j]$ consists of consecutive numbers. Then, continue to find the next subarray starting from position $j + 1$ (as $a_{j + 1}$ and $a_j$ are not consecutive, the next subarray satisfying the conditions must at least start from position $j + 1$).

Complexity: $O(n)$.
