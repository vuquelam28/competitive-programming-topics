# Đa Thức Bậc 2

Hãy tạo ra một `struct` để khai báo kiểu dữ liệu lưu trữ một đa thức bậc hai có dạng: $a \times x^2 + b \times x + c$. 

Ở đây, $a,b,c$ là các tham số.

***Yêu cầu:*** Trong `struct` này, hãy tạo ra:
- Hàm khởi tạo có tham số cho kiểu dữ liệu  này.
- Hàm tính $\Delta,$ hay giá trị $Delta$ của đa thức này, được xác định bằng công thức $b^2 + 4\times a \times c$.
- Hàm nhận vào giá trị nguyên $t$ và in ra giá trị của đa thức khi $x = t$.

## Input

- Dòng đầu ghi $3$ số nguyên dương $a,b,c$ miêu tả đa thức.
- Dòng thứ hai gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, đầu tiện nhận được số nguyên dương $t$:
    - Nếu $t=1,$ bạn nhận được thêm  $3$ số nguyên dương $a,b,c$ biểu thị đa thức mới cần xét.
    - Nếu $t=2,$ in ra $\Delta$ của đa thức.
    - Nếu $t=3,$ bạn nhận được thêm số nguyên $t,$ hãy tính giá trị của đa thức khi $x = t$.

## Constraints

- $1 \le q \le 10^3$.
- $1 \le x,a,b,c \le 10^4$.

## Output

- Với mỗi truy vấn, in ra kết quả tương ứng.


## Sample Input 1

```
2 3 1
4
3 1
1 1 4 2
2 
3 1
```

## Sample Output 1

```
6
24
7
```