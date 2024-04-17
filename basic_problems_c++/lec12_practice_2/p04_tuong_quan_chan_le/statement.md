# Tương Quan Chẵn Lẻ

Cho mảng một chiều các số nguyên $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$.

***Yêu cầu:*** Viết chương trình cho biết sự tương quan giữa số lượng số chẵn và số lượng số lẻ trong mảng $A?$

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai chứa $N$ phần tử $a_1, a_2, \dots, a_n,$ mỗi phần tử cách nhau một khoảng trắng.

## Constraints

- $0 < n < 1000$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- Dòng duy nhất in ra số nguyên $K$ cho biết sự tương quan giữa số lượng số chẵn và số lượng số lẻ trong mảng $A$:
    - Giá trị $-1$ có nghĩa số lượng số chẵn nhiều hơn số lẻ. 
    - Giá trị $0$ có nghĩa số lượng số lẻ bằng số lượng số chẵn 
    - Giá trị $1$ có nghĩa số lẻ nhiều hơn số chẵn.

# Sample input 1

```
5
5 8 1 4 9
```

## Sample output 1

```
1
```

# Sample input 2

```
5
6 8 1 4 9
```

## Sample output 2

```
-1
```