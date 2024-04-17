# Hoán Vị Cột

Cho mảng hai chiều các số nguyên $A$ gồm $M$ dòng và $N$ cột.

***Yêu cầu:*** Viết chương trình hoán vị $2$ cột $X$ và $Y$ trong mảng $A$.

## Input

- Dòng đầu tiên chứa $2$ số nguyên dương $M$ và $N$.
- Dòng thứ hai chứa $2$ số nguyên dương $X$ và $Y$.
- $M$ dòng tiếp theo, mỗi dòng chứa $N$ phần tử, các phần tử cách nhau một khoảng trắng đại diện cho một hàng của mảng $A$.

## Constraints

- $0 < M, N \leq 100$.
- $0 < X, Y \leq N$.

## Output

- Mảng $A$ sau khi đã hoán vị $2$ cột $X$ và $Y$.

# Sample input 1

```
3 4
1 2
4 7 9 3
1 6 2 8
5 3 9 8
```

## Sample output 1

```
7 4 9 3
6 1 2 8
3 5 9 8
```