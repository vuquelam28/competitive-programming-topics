# Đa Thức Tổng Quát

Hãy tạo ra một `struct` để khai báo kiểu dữ liệu lưu trữ một đa thức tổng quát bậc $n$ có dạng: $a_0\times x^0+a_1\times x^1 + ... + a_n \times x^n$

Ở đây, $a_i$ và $n$ là các tham số. 

***Yêu cầu:*** Trong `struct` này, hãy tạo ra:
- Hàm khởi tạo có tham số cho kiểu dữ liệu  này.
- Hàm nhận vào giá trị nguyên $t$ và in ra giá trị của đa thức khi $x = t$.

## Input
- Dòng đầu ghi số nguyên dương $n$ và sau đó là $n+1$ số nguyên dương $a_0,a_1,...,a_n$ miêu tả bậc và hệ số của đa thức.
- Dòng thứ hai gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, đầu tiện nhận được số nguyên dương $t$:
    - Nếu $t=1,$ bạn nhận được số nguyên dương $n$ và sau đó là $n+1$ số nguyên dương $a_0,a_1,...,a_n$ miêu tả bậc và hệ số của đa thức mới cần xét.
    - Nếu $t=2,$ bạn nhận được thêm số nguyên $t,$ hãy tính giá trị của đa thức khi $x = t$.

## Constraints

- $1 \le q \le 10^3$.
- $1 \le n \le 10$.
- $0 \le a_i \le 10; \forall i: 0 \le i \le n$.
- $0 \le t \le 10$.

## Output

- Với mỗi truy vấn, in ra kết quả tương ứng.


## Sample Input 1

```
3 1 2 0 1
4
2 3
1 2 0 0 1
2 3
2 4
```

## Sample Output 1

```
34
9
16
```