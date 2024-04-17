# Toán Học

Hãy tạo ra một `struct`, cấu trúc dữ liệu này cung cấp các hàm để thực hiện các phép toán cơ bản như sau:

- Phép cộng hai số nguyên.
- Phép trừ hai số nguyên.
- Phép lấy  giá trị nhỏ nhất trong hai số nguyên.
- Phép lấy  giá trị lớn nhất trong hai số nguyên.
- Phép tính lũy thừa của một số nguyên.

## Input

- Dòng đầu gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, mỗi dòng bạn nhận được $3$ số nguyên dương $t,a,b$.
    - Nếu $t=1,$ hãy in ra $a+b$.
    - Nếu $t=2,$ hãy in ra $a-b$.
    - Nếu $t=3,$ hãy in ra giá trị nhỏ nhất trong hai số $a$ và $b$.
    - Nếu $t=4,$ hãy in ra giá trị lớn nhất trong hai số $a$ và $b$.
    - Nếu $t=5,$ hãy in ra $a^b$.

## Constraints

- $1 \le q \le 100$.
- $1 \le a,b \le 10$.

## Output

- Với mỗi truy vấn, in ra kết quả tương ứng

## Sample Input 1

```
5
1 2 3
2 3 1
3 1 5
4 9 10
5 3 5
```

## Sample Output 1

```
5
2
1
10
243
```
