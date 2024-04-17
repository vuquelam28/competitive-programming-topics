# Next Permutation - Editorial

The algorithm to find the next permutation is as follows:

- Find the largest $i$ such that $a_i <> a_{i + 1}$.
- Find the largest $j$ such that $a_j > a_i$. This position must exist, since $i+1,$ at least, is such a position.
- Swap $a_i$ and $a_j$.
- Reverse all the elements in the ranges $[i + 1, n]$ to obtain an ascending array, making sure that the lexicographical order of this permutation is smallest but still greater than the original permutation's.