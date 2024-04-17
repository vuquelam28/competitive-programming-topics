# GOSHOP

GO supermarket is one of the biggest supermarket in the country. In the supermarket, there are $n$ departments indexed from $1$ to $n$. Each item in the $i^{th}$ department has price $a_i,$ and we assume that there are infinite items in each department.

Today, there are $q$ customers go to GO supermarket. The $i^{th}$ customer brings the amount of money is $x_i$ and visit departments from position $p_i$ to position $n$ respectively. Every time the customer visits a department, if he/she has enough money, he/she will immediately buy $1$ item from that department. 

***Tasks:*** Calculate the amount of items that each customer can buy?

## Input

- The first line contains two integers $n$ and $q$ - the number of departments and customers.
- The second line contains $n$ integers $a_1, a_2, \dots, a_n$ - price of the items in the $i^{th}$ department.
- On the next $q$ lines, the $i^{th}$ line contains two integers $x_i$ and $p_i$ - the amount of money that the $i^{th}$ customer brings and the index of the first department that he/she will visit.

## Constraints 

- $1 \le n, q \leq 100000$.
- $1 \le a_i \leq 100; \forall i: 1 \le i \le n$. 
- $x_i \leq 10^7, p_i \leq N; \forall i: 1 \le i \le q$.

## Subtasks 

- Subtask $1$ ($30\%$ of the points): $1 \le n, q \le 1000$.
- Subtask $2$ ($70\%$ of the points): Original constraints.

## Output 

- Print on $q$ lines, the $i^{th}$ line show the number of items that the $i^{th}$ customer can buy.

## Sample Input 1

```
7 4
9 3 5 2 6 3 2
11 3
11 1
100 2
1 1
```

## Sample Output 1

```
3
2
6
0
```