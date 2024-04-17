# Bookshelf

Huy has $N$ books, he wants to build a bookshelf himself to put these books on. Each of Huy's books has a thickness of $t_i$ and a width of $w_i\ (1 \le i \le N)$. All the books have the same height.

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/ishPDLgw.png">
</center>

To save space, Huy put books on the bookshelf in the following way: Firstly, he chooses some books and puts them vertically next to each other. Then, the remaining books are put horizontally on top of the books lying vertically. Thus, the total width of the books lying on top must not exceed the total thickness of the books underneath. The way Huy arrange his books is illustrated by the image below:

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/zhGHCfKA.png">
</center>

***Task:*** Determine the minimum possible total thickness of the books underneath when Huy arranges the books in the above way.

## Input

- The first line contains the positive integer $N$ - the number of books Huy has.
- $N$ lines follow. Each line contains $N$ pairs of integers $t_i, w_i$ - the thickness and width of the $i$-$th$ book - separated by a space. 

## Constraints

- $1 \le N \le 100$.
- $1 \le t_i \le 2; \forall i: 1 \le i \le N$.
- $1 \le w_i \le 100; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($40\%$ of the points): $1 \le N \le 10$.
- Subtask $2$ ($60\%$ of the points): Original constraints.

## Output

- A single integer: the minimum possible total thickness of the books placed underneath.

## Sample Input 1

```
5
1 12
1 3
2 15
2 5
2 1
```

## Sample Output 1

```
5
```

## Sample Input 2

```
3
1 10
2 1
2 4
```

## Sample Output 2

```
3
```

## Explanation

In sample $1,$ the books placed vertically will be the $1st,$ $3rd$ and $4th$ books.

In sample $2,$ the books placed vertically will be the $1st$ and $3rd$ books.