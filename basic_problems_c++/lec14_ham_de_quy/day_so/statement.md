# Dãy Số

Một dãy số $u_n$ được định nghĩa như sau:

$$\begin{cases}u_0 = a_0&.\\u_1 = a_1\\u_n = 2.u_{n - 1} - 3.u_{n - 2},&\text{với }n > 1.\end{cases}$$ 

***Yêu cầu:*** Cho trước hai số $a_0$ và $a_1$ hãy xác định số thứ $N$ của dãy số?

## Input

- Dòng đầu tiên chứa hai số nguyên $a_0, a_1,$ phân tách nhau bởi dấu cách.
- Dòng thứ hai chứa số nguyên $N$.

## Constraints

- $-100 \le a_0, a_1 \le 100$.
- $0 \le N \le 30$.

## Output

- Số nguyên duy nhất là số thứ $N$ của dãy số.


## Sample input 1

```
1 2
5
```

## Sample output 1

```
-10
```

