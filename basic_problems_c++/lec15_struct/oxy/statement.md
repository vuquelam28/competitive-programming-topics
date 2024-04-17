# OXY

Tạo ra một `struct` để khai báo kiểu dữ liệu lưu trữ một điểm nguyên trong hệ trục tọa độ $OXY$. 

***Yêu cầu:*** Trong `struct` này, hãy tạo ra:
- Hàm để nhập tọa độ điểm (gồm hoành độ và tung độ).
- Hàm trả về giá trị khoảng cách Euclid giữa điểm đó tới một điểm nguyên bất kì.
- Hàm trả về giá trị khoảng cách Manhattan giữa điểm đó tới một điểm nguyên bất kì.

## Input

- Dòng đầu ghi hai số nguyên dương $x,y$ biểu thị điểm $(x,y)$.
- Dòng thứ hai gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, mỗi dòng gồm $3$ số nguyên dương $t,a,b$:
    - Nếu $t=1,$ in ra khoảng cách Euclid giữa điểm $(x,y)$ tới điểm $(a,b)$ (được tính bằng công thức $\sqrt{(x-a)^2+(y-b)^2}$). Lưu ý chỉ lấy ***phần nguyên*** của kết quả. 
    - Nếu $t=2,$ in ra khoảng cách Manhattan giữa điểm $(x,y)$ tới điểm $(a,b)$ (được tính bằng công thức $|x-a|+|y-b|$).

## Constraints

- $1 \le q \le 10^3$.
- $1 \le x,y,a,b \le 10^9$.

## Output

- Với mỗi truy vấn, in ra kết quả tương ứng

## Sample Input 1

```
3 4
4
1 3 9
2 4 2
1 2 5
2 2 4
```

## Sample Output 1

```
5
3
1
1
```
