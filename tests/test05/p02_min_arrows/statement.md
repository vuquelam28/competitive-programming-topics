# Bắn Tên

Trò chơi "Bắn tên" đang rất được ưa chuộng trên cộng đồng mạng. Trò chơi thiết kế đơn giản như sau: Có $n$ quả bóng bay đánh số từ $1$ tới $n$ theo hàng ngang từ trái qua phải, quả bóng thứ $i$ nằm ở độ cao $h_i$. Người chơi phải bắn các mũi tên để làm vỡ các quả bóng. Mỗi mũi tên được bắn ra theo phương ngang từ trái qua phải ở một độ cao ban đầu tùy chọn. Khi mũi tên bắn ra, nếu nó chạm vào một quả bóng ở cùng độ cao thì nó sẽ làm vỡ quả bóng đó và tiếp tục bay sang phải với độ cao giảm đi $1$ đơn vị. 

***Yêu cầu:*** Hãy cho biết số mũi tên ít nhất để làm vỡ tất cả $n$ quả bóng?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên dương $h_1, h_2, \dots, h_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^6$.
- $1 \le h_i \le 10^6; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số mũi tên nhỏ nhất cần bắn ra.

## Sample Input 1

```
6
5 6 5 3 2 1
```

## Sample Output 1

```
3
```
