# Cutting The Sequence - Editorial

Iterate through every element $a_i \ (i \ge 2)$ of the sequence, if $a_i < a_{i - 1}$ then it is the beginning of a new subsequence needs cutting, so increase the result by $1$.

Note that the last result must be increased by $1,$ as we must count the last subsequence.