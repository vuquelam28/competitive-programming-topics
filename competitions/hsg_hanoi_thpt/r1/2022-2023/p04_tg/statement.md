# Trạm Gác Trung Tâm

Ban quản lý rừng nguyên sinh đang quản lý một khu vực rộng lớn. Họ đã xây dựng $N$ trạm canh gác rừng (được đánh số từ $1$ đến $N$) và các trạm này được kết nối với nhau bởi $M$ con đường. Trong $N$ trạm canh gác người ta đã chọn ra $K$ trạm làm trạm gác trung tâm - nơi điều hành các trạm gác nhỏ hơn và chứa các dụng cụ, phương tiện bảo về rừng. Để đi lại và vận chuyển thiết bị dễ dàng giữa các trạm gác trung tâm, Ban quản lý quyết định nâng cấp một số con đường sao cho $K$ trạm gác trung tâm đều đi được đến nhau.

***Yêu cầu:*** Hãy chọn các con đường nối $K$ trạm gác trung tâm để nâng cấp sao cho tổng độ dài các con đường này là nhỏ nhất?

***Lưu ý:*** Subtask $3$ của bài toán này trong kỳ thi đã được bỏ đi khi chấm bài, do subtask này không có lời giải. Vì vậy trong bộ test chỉ sinh hai subtask $1 \ (60\%)$ và $2 \ (40\%)$.

## Input

- Dòng đầu tiên ghi ba số nguyên dương $N, M, K$ lần lượt là số lượng các trạm gác, số các con đường nối giữa các trạm gác và số lượng các trạm gác trung tâm.
- Dòng thứ hai ghi $K$ số nguyên là số hiệu của $K$ trạm gác trung tâm.
- Trong $M$ dòng tiếp theo, mỗi dòng ghi ba số nguyên $u, v, c$ với ý nghĩa con đường hai chiều nối trực tiếp giữa hai trạm $u$ và $v$ có độ dài là $c$.

## Constraints

- $1 \le N \le 500$.
- $N - 1 \le M \lt \dfrac{N^2}{2}$.
- $1 \lt K \le N$.
- $1 \lt c \le 10^9$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $K = N; N \le 500$.
- Subtask $2$ ($20\%$ số điểm): $K \le 10; N \le 200$.
- Subtask $3$ ($20\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng chứa một số duy nhất là kết quả của bài toán.

## Sample Input 1

```
5 8 3
1 3 5
1 2 2
1 3 10
1 4 12
2 4 5
2 5 7
3 4 2
3 5 10
4 5 6
```

## Sample Output 1

```
15
```

## Explanation 1

Cần làm các con đường:

```
1 2
2 4
3 4
4 5
```

Tổng độ dài nhỏ nhất là: $15$.
