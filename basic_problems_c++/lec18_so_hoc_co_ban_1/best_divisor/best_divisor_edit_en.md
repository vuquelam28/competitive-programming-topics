# Best Divisor - Editorial

Write, in advance, a function `sum_of_digits(n)` to calculate the sum of digits of a positive integer $n$. Then, iterate through all $i$ being the divisors of $n,$ use the function `sum_of_digits()` to calculate the sum of digits of that divisor and take the one with the greatest sum of digits but smallest value, which is the result of the problem.

To solve this problem with $n \le 10^9,$ apply the algorithm to find the divisors of $n$ in $O(\sqrt{n})$.