# HCN

Hãy tạo ra một `struct` để khai báo kiểu dữ liệu lưu trữ một hình chữ nhật trong hệ trục tọa độ $OXY$. 

***Yêu cầu:*** Trong `struct` này, hãy tạo ra:
- Hàm khởi tạo có tham số cho kiểu dữ liệu  này.
- Hàm trả về chu vi của hình chữ nhật.
- Hàm trả về diện tích của hình chữ nhật.
- Hàm nhận vào một điểm nguyên và kiểm tra xem điểm đó có nằm trong hoặc nằm trên hình chữ nhật hay không.

## Input

- Dòng đầu ghi $4$ số nguyên dương $(x,y); (u,v)$ biểu thị điểm trái dưới và phải trên của hình chữ nhật $(x < u, y < v)$.
- Dòng thứ hai gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, đầu tiện nhận được số nguyên dương $t$:
    - Nếu $t=1,$ bạn nhận được thêm  $4$ số nguyên dương $(x,y); (u,v),$ nghĩa là cần **thay đổi** tọa độ của hình chữ nhật hiện tại thành hình có điểm trái dưới là $(x,y)$ và phải trên là $(u,v)$.
    - Nếu $t=2,$ in ra chu vi của hình chữ nhật.
    - Nếu $t=3,$ in ra diện tích của hình chữ nhật.
    - Nếu $t=4,$ bạn nhận thêm điểm nguyên dương $(x,y),$ in ra `YES` nếu điểm đó nằm trong hoặc nằm trên hình chữ nhật hiện tại, ngược lại in ra `NO`.

## Constraints

- $1 \le q \le 10^3$.
- $1 \le x,y,u,v \le 10^9$.

## Output

- Với mỗi truy vấn dạng $2,3,4,$ in ra kết quả tương ứng.

## Sample Input 1

```
1 2 4 5
5
2 
1 1 1 3 4
3 
4 1 1
4 6 5
```

## Sample Output 1

```
12
6
YES
NO
```
