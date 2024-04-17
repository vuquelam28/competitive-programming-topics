# Đào Vàng

Tí đang chơi trò chơi "đào vàng" phiên bản đặc biệt, nó rất khác với trò đào vàng quen thuộc mà chúng ta đã biết.

Ở trò chơi này, vàng được dàn trải trên khắp bản đồ, và việc của Tí chỉ là đi nhặt vàng trên toàn bản đồ đó. Nhưng không hề đơn giản như ta nghĩ, trên bản đồ còn có nhiều lính canh làm nhiệm vụ canh gác. Phạm vi canh gác của $1$ lính canh là hàng và cột mà anh lính này đang đứng. Nói cách khác thì Tí không được nhặt vàng tại những hàng, cột có lính canh.
	
<center>

![](https://i.ibb.co/JHcv7QT/Screen-Shot-2020-03-01-at-2-12-50-PM.png)
</center>

Do thời gian không có nhiều, nên Tí không muốn tốn thời gian cho việc nhặt vàng, mà có thể chuyển qua màn chơi khác nếu lượng vàng nhặt được từ bản đồ này quá ít.

***Yêu cầu:*** Hãy giúp Tí tính toán số lượng ô trong bản đồ mà Tí có thể nhặt vàng?

## Input

- Dòng đầu tiên chứa số nguyên dương $T$ - số lượng test cases.
- $T$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một test case cấu trúc như sau:
 
	- Dòng đầu tiên là $2$ số $m, n$  mô tả kích thước bản đồ.
	- Tiếp đến là ma trận kích thước $m \times n$. Lính canh được đánh dấu là $1,$ các ô không có lính canh được đánh dấu là $0$.

## Constraints

- $1 \le T \le 100$.
- $1 \le m, n \le 100$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $T \le 10; m, n \le 50$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Kết quả mỗi test case được in trên $1$ dòng theo mô tả: Bắt đầu bằng ký tự `#`, tiếp theo là số thứ tự của testcase đó, tiếp đến là $1$ khoảng trắng (dấu cách), và cuối cùng là kết quả của testcase đó.

## Sample Input 1

```
2
3 3
1 0 0
0 1 0
0 0 0
4 4
1 0 0 1
0 1 1 0
0 0 0 0
0 0 0 0
```

## Sample Output 1

```
#1 1
#2 0
```

## Sample Input 2

```
1
5 5
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 1 0
```

## Sample Output 2

```
#1 16
```

