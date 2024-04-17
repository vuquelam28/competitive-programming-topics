# Tính Biểu Thức

Nhập vào hai số nguyên dương $x$ và $N$.

***Yêu cầu:*** Tính giá trị biểu thức sau:

$$S = x - \frac{x^3}{3!} + \frac{x^5}{5!} - \cdots + \frac{x^N}{N!}$$

## Input

- Một dòng duy nhất chứa hai số nguyên dương $x$ và $N,$ mỗi số cách nhau một dấu cách.

## Constraints

- $1 \le x, N \le 10$.
- $N$ luôn là số lẻ.

## Output

- Số thực duy nhất là giá trị biểu thức $S,$ làm tròn tới hai chữ số sau dấu chấm thập phân.

## Sample Input 1

```
7 3
```

## Sample Output 1

```
-50.17
```

## Explanation 1

$\frac{7}{1} - \frac{7^3}{3!} \approx -50.17$.

