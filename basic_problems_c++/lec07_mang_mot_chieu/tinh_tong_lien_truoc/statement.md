# Tính Tổng Liền Trước

Cho mảng một chiều các số nguyên $A$ gồm $N$ phần tử $a_1, a_2, \dots, a_n$.

***Yêu cầu:*** Viết chương trình tính tổng các phần tử lớn hơn phần tử liền trước nó trong mảng $A?$ Coi rằng $a_1$ là phần tử luôn luôn được tính trong kết quả.

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai chứa $N$ phần tử $a_1, a_2, \dots, a_N$ của mảng $A,$ mỗi phần tử cách nhau một khoảng trắng.

## Constraints

- $0 < N < 1000$.
- $|a_i| \le 100$.

## Output

- Dòng duy nhất in ra số nguyên $S$ là tổng các phần tử lớn hơn phần tử liền trước nó trong mảng $A$.

## Sample input 1

```
5
5 8 1 4 9
```

## Sample output 1

```
26
```