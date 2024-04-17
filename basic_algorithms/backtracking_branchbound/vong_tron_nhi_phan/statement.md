# Vòng tròn nhị phân

Dãy $p$ gồm $n$ phần tử là một hoán vị của dãy số $0, 1, 2, \dots, 2^n - 1$ được gọi là vòng tròn nhị phân nếu như:

- Phần tử cạnh nhau khác nhau đúng $1$ bit ở hệ nhị phân.
- Phần tử $p_n$ và $p_1$ khác nhau đúng $1$ bit ở hệ nhị phân.

Ví dụ: hai số $3_{10} = 11_2$ và $2_{10} = 10_2$ khác nhau đúng $1$ bit. 

***Yêu cầu:*** Cho số nguyên $n$. Bạn hãy in ra dãy $p$ gồm $n$ phần tử là vòng tròn nhị phân. Nếu có nhiều kết quả thì in ra dãy có thử tự từ điển bé nhất.

## Input

- Dòng thứ nhất chứa số nguyên $n$.

## Constraints

- $1 \le n \le 14$

## Output

- Dãy vòng tròn nhị phân có thứ tự từ điển bé nhất.

## Sample input 1

```
2
```

## Sample output 1

```
0 1 3 2
```

## Explanation 1

Dãy $p$ ở hệ nhị phân: $[00, 01, 11, 10]$

## Sample input 2

```
3
```

## Sample output 2

```
0 1 3 2 6 7 5 4
```

## Explanation 2

Dãy $p$ ở hệ nhị phân: $[000, 001, 011, 010, 110, 111, 101, 100]$