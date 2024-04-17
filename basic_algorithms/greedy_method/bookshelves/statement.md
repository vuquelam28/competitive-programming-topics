# Giá Sách

Huy có $N$ cuốn sách, anh ấy muốn tự tay đóng một chiếc giá sách để đặt những cuốn sách này vào. Mỗi cuốn sách của Huy có độ dày là $t_i$ và chiều rộng $w_i \ (1 \le i \le N)$. Tất cả các cuốn sách đều có chung chiều cao.

<center>

<img src="https://cdn.ucode.vn/uploads/2247/images/ishPDLgw.png">
</center>

Để tiết kiệm diện tích, Huy đặt các cuốn sách lên giá theo cách sau: Đầu tiên, anh chọn ra một vài cuốn sách và đặt chúng theo chiều thẳng đứng cạnh nhau. sau đó, anh đặt số sách còn lại nằm ngang bên trên các cuốn sách nằm thẳng đứng. Như vậy, tổng chiều rộng của các cuốn sách nằm bên trên không được phép vượt quá tổng độ dày của các cuốn sách nằm bên dưới. Hình dưới đây là minh họa cho cách đặt sách của Huy:

<center>

<img src="https://cdn.ucode.vn/uploads/2247/images/zhGHCfKA.png">
</center>

Do phòng của Huy diện tích khá nhỏ, nên anh sẽ làm chiếc giá sách vừa khít với tổng độ dày của các cuốn sách đặt thẳng đứng.

***Yêu cầu:*** Xác định tổng độ dày nhỏ nhất có thể của các cuốn sách đặt bên dưới khi Huy đặt sách theo cách trên?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$ - số cuốn sách Huy có.
- $N$ dòng tiếp theo, mỗi dòng chứa $N$ cặp số nguyên $t_i, w_i$ phân tách nhau bởi dấu cách - là độ dày và chiều rộng của cuốn sách thứ $i$.

## Constraints

- $1 \le N \le 100$.
- $1 \le t_i \le 2; \forall i: 1 \le i \le N$.
- $1 \le w_i \le 100; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le N \le 10$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là tổng độ dày nhỏ nhất có thể của các cuốn sách đặt bên dưới.

## Sample Input 1

```
5
1 12
1 3
2 15
2 5
2 1
```

## Sample Output 1

```
5
```

## Sample Input 2

```
3
1 10
2 1
2 4
```

## Sample Output 2

```
3
```

## Explanation

Ở ví dụ $1,$ các cuốn sách đặt thẳng đứng sẽ là các cuốn số $1, 3$ và $4$.

Ở ví dụ $2,$ các cuốn sách đặt thẳng đứng sẽ là các cuốn số $1$ và $3$.