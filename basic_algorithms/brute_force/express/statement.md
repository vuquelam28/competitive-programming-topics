# Biểu Thức Nhân - Cộng

Cho $N$ số nguyên dương $a_1, a_2,..., a_N$ cùng với $2$ phép nhân và $N - 3$ phép cộng.

***Yêu cầu:*** Hãy đặt $2$ phép nhân và $N - 3$ phép cộng vào giữa các số $a_i$ để thu được biểu thức có giá trị lớn nhất? Biết rằng không được phép đổi chỗ các số trong dãy.

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- $N$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $a_i$ là một số trong dãy.

## Constraints

- $4 \le N \le 1000$.
- $1 \le a_i \le 10^4; \forall i: 1 \le i \le N$.

## Output

- Số nguyên duy nhất là giá trị lớn nhất của biểu thức tìm được.

## Sample Input

```
5
4
7
1
5
3
```

## Sample Output

```
44
```

## Explanation

Biểu thức thu được là: $4 \times 7 + 1 + 5 \times 3 = 44$.
