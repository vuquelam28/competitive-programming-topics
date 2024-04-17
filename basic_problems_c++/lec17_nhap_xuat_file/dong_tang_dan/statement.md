# Dòng Tăng Dần

Cho mảng hai chiều $A$ chứa các số nguyên gồm $M$ dòng và $N$ cột. 

***Yêu cầu:*** Viết chương trình kiểm tra các phần tử trên dòng $K$ trong mảng $A$ có tăng dần hay không?

## Input

- Dòng đầu tiên chứa $3$ số nguyên dương $M, N$ và $K$.
- $M$ dòng tiếp theo, mỗi dòng chứa $N$ phần tử thể hiện một hàng của ma trận, các phần tử cách nhau một khoảng trắng.

## Constraints

- $0 < M, N \leq 100$.
- $0 < K \leq M$.

## Output

- Dòng duy nhất in ra `YES` nếu các phần tử trên dòng $K$ trong mảng $A$ tăng dần hoặc `NO` nếu các phần tử trên dòng $K$ trong mảng $A$ không tăng dần.

# Sample input 1

```
3 4 2
4 7 9 3
1 2 6 8
5 3 9 8
```

## Sample output 1

```
YES
```

# Sample input 2

```
3 4 1
4 -7 9 3
1 6 -2 -8
-5 3 -9 8
```

## Sample output 2

```
NO
```

