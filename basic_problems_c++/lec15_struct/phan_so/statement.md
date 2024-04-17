# Phân Số 

Hãy tạo ra một `struct` để khai báo kiểu dữ liệu phân số. 

***Yêu cầu:*** Trong `struct` này, hãy tạo ra:
- Hàm để nhập giá trị phân số (gồm tử và mẫu).
- Hàm so sánh phân số hiện tại với một phân số khác.
- Hàm để cộng phân số hiện tại với một phân số khác (kết quả trả về là phân số tối giản).

## Input

- Dòng đầu ghi hai số nguyên dương $x,y$ lần lượt là tử số và mẫu số của phân số được cho.
- Dòng thứ hai gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, mỗi dòng gồm $3$ số nguyên dương $t,a,b$:
    - Nếu $t=1$ có nghĩa là truy vấn so sánh phân số được cho với $\frac{a}{b},$ nếu $\frac{x}{y} < \frac{a}{b}$ in ra `YES`, ngược lại in ra `NO`.
    - Nếu $t=2$ có nghĩa là truy vấn cộng, cần in ra hai số $c$ và $d$ biểu diễn cho phân số $\frac{c}{d} = \frac{x}{y} + \frac{a}{b},$ lưu ý $\frac{c}{d}$ là phân số tối giản. Cho biết hàm `__gcd(a, b)` (thuộc thư viện `<algorithm>`) là hàm trả về ước chung lớn nhất của hai số nguyên $a$ và $b$. 

## Constraints

- $1 \le q \le 10^3$.
- $1 \le x,y,a,b \le 10^6$.

## Output

- Với mỗi truy vấn, in ra kết quả tương ứng

## Sample Input 1

```
2 3 
5
1 2 2
2 3 1
2 3 4
1 3 5
2 1 2
```

## Sample Output 1

```
YES
11 3
17 12
NO
7 6
```