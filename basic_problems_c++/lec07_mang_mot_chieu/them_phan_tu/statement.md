# Thêm Phần Tử

Cho mảng một chiều các số nguyên $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Ban đầu các phần tử này được sắp xếp sẵn theo thứ tự không giảm ($a_i \ge a_{i - 1}; \forall i: 2 \le i \le n$)

***Yêu cầu:*** Cho một giá trị $x,$ hãy thêm $x$ vào mảng sao cho mảng vẫn giữ nguyên tính không giảm?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ và số $x$.
- Dòng thứ hai chứa $n$ phần tử $a_1, a_2, \dots, a_n$ của mảng $A,$ mỗi phần tử cách nhau một khoảng trắng.

## Constraints

- $1 \le n \le 100$.
- $|x| \le 100$.
- $|a_i| \le 10; \forall i: 1 \le i \le n$.

## Output

- In ra dãy $A$ sau khi thêm phần tử $x$ vào.

## Samle Input 1

```
5 3
1 2 3 4 5
```

## Sample Output 1

```
1 2 3 3 4 5
```

