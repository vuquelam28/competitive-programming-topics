# Kiểm Tra Mảng Toàn Dương

Cho mảng hai chiều các số nguyên $A$ gồm $M$ dòng và $N$ cột. Các hàng được đánh số từ $1$ tới $M,$ các cột được đánh số từ $1$ tới $N$.

***Yêu cầu:*** Viết chương trình kiểm tra xem các phần tử trong mảng $A$ có toàn dương hay không?

## Input

- Dòng đầu tiên chứa $2$ số nguyên dương $M$ và $N$.
- $M$ dòng tiếp theo, mỗi dòng chứa $N$ phần tử, các phần tử cách nhau một khoảng trắng.

## Constraints

- $0 < M, N \leq 100$.

## Output

- Dòng duy nhất in ra `YES` nếu các phần tử trong mảng $A$ toàn dương hoặc `NO` nếu các phần tử trong mảng $A$ không toàn dương.

# Sample input 1

```
3 4
4 7 9 3
1 6 2 8
5 3 9 8
```

## Sample output 1

```
YES
```

# Sample input 2

```
3 4
4 -7 9 3
1 6 -2 -8
-5 3 -9 8
```

## Sample output 2

```
NO
```

