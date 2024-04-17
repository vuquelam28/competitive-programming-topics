# Đường Thẳng

Hãy tạo ra một `struct` để khai báo kiểu dữ liệu lưu trữ một đường thẳng có dạng: $a \times x + b \times y = c$. 

Ở đây, $a,b,c$ là các tham số.

***Yêu cầu:*** Trong `struct` này, hãy tạo ra:
- Hàm khởi tạo có tham số cho kiểu dữ liệu  này.
- Hàm nhận vào điểm nguyên $(u,v)$ và kiểm tra xem điểm này có nằm trên đường thẳng hay không.
- Hàm nhận vào đường thẳng có dạng $a'\times x + b'\times y=  c,$ kiểm tra xem đường thẳng này có song song với đường thẳng hiện tại hay không.

## Input

- Dòng đầu ghi $3$ số nguyên dương $a,b,c$ miêu tả đường thẳng được cho.
- Dòng thứ hai gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, đầu tiện nhận được số nguyên dương $t$:
    - Nếu $t=1,$ bạn nhận được thêm  $3$ số nguyên dương $a,b,c$ biểu thị đường thẳng mới cần xét.
    - Nếu $t=2,$ bạn nhận thêm được $2$ số nguyên $(u,v),$ hãy kiểm tra xem điểm này có nằm trên đường thẳng hay không. Nếu có in ra `YES`, ngược lại in ra `NO`.
    - Nếu $t=3,$ bạn nhận được ba số nguyên $a',b',c',$ biểu thị đường thẳng có dạng $a'\times x + b'\times y=  c',$ kiểm tra xem đường thẳng này có song song với đường thẳng hiện tại hay không. Nếu có in ra `YES`, ngược lại in ra `NO`.

## Constraints

- $1 \le q \le 10^3$.
- Các biến còn lại đều nằm trong khoảng $[1,30]$.

## Output

- Với mỗi truy vấn, in ra kết quả tương ứng

## Sample Input 1

```
2 3 9
4
2 3 2
1 1 2 3
3 2 4 6
3 1 2 5
```

## Sample Output 1

```
NO
NO
YES
```
