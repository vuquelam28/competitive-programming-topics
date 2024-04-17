# Tổng Xung Quanh

Cho mảng một chiều các số nguyên $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$.

***Yêu cầu:*** Viết chương trình tính tổng các phần tử lớn hơn các phần tử xung quanh nó trong mảng $A$. Coi rằng $a_2$ là phần tử đứng xung quanh $a_1$ và $a_n$ là phần tử đứng xung quanh $a_{n - 1}$.

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $N$ phần tử của mảng $A$, mỗi phần tử cách nhau một khoảng trắng.

## Constraints

- $0 < N < 1000$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- Dòng duy nhất in ra số nguyên $S$ là tổng các phần tử lớn hơn các phần tử xung quanh nó trong mảng $A$.

## Sample input 1

```
5
5 8 1 4 9
```

## Sample output 1

```
17
```
