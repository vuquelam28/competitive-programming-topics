# Đường Tròn

Hãy tạo ra một ```struct``` để khai báo kiểu dữ liệu lưu trữ một đường tròn được biểu diễn qua tọa độ tâm và giá trị bán kính trên trục tọa độ OXY.

***Yêu cầu:*** Trong ```struct``` này, hãy tạo ra:
- Hàm khởi tạo có tham số cho kiểu dữ liệu  này.
- Hàm in ra chu vi của đường tròn này.
- Hàm in ra diện tích của đường tròn này.
- Hàm nhận vào một điểm nguyên và xác định xem điểm đó có nằm trong hoặc trên đường tròn hay không.

Ở đây, ta coi giá trị $\pi = 3.14$.

## Input

- Dòng đầu gồm $3$ số nguyên dương $x,y,R,$ trong đó $(x,y)$ là tâm và $R$ là bán kính của đường tròn.
- Dòng thứ hai gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, đầu tiện nhận được số nguyên dương $t$:
    - Nếu $t=1,$ bạn nhận được $3$ số nguyên dương $x,y,R,$ trong đó $(x,y)$ là tâm và $R$ là bán kính của đường tròn mới.
    - Nếu $t=2,$ hãy in ra chu vi của đường tròn, kết quả làm tròn tới $2$ chữ số thập phân sau dấu phẩy.
    - Nếu $t=3,$ hãy in ra diện tích của đường tròn, kết quả làm tròn tới $2$ chữ số thập phân sau dấu phẩy.
    - Nếu $t=4,$ bạn nhận được $2$ số nguyên dương $x,y,$ hãy xác định xem điểm $(x,y)$ có nằm trong hoặc trên đường tròn hay không. Nếu có in ra `YES`, ngược lại in ra `NO`.

## Constraints

- $1 \le q \le 10^3$.
- $1 \le x,y,R \le 10^4$.

## Output

- Với mỗi truy vấn, in ra kết quả tương ứng

## Sample Input 1

```
0 0 3
5
3
1 1 1 2
2
4 1 3
4 2 4
```

## Sample Output 1

```
28.26
12.56
YES
NO
```