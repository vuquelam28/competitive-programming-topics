# Cực Trị Lớn Nhất

Cho dãy số nguyên $A$ gồm $N$ phần tử $a_1, a_2,..., a_n$. Một phần tử được gọi là giá trị ***cực trị*** nếu như nó lớn hơn hẳn hoặc nhỏ hơn hẳn các phần tử kề cạnh nó.

***Yêu cầu:*** Tìm giá trị cực trị lớn nhất trong dãy?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2,..., a_n,$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 1000$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- Số nguyên duy nhất là giá trị cực trị lớn nhất trong dãy. Trong trường hợp không tồn tại giá trị cực trị nào, đưa ra thông báo `No solution`.

## Sample Input 1

```
6
8 -4 2 5 0 -3
```

## Sample Output 1

```
8
```

