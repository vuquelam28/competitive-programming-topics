# Những Nhà Ga

Chị Đan Thanh mới xây dựng một hệ thống đường sắt tư nhân. Do mới đi vào hoạt động nên chi phí còn hạn chế, vì vậy chị Đan Thanh phải tự mình đứng ra làm quản lý và sắp xếp công việc. Hệ thống đường sắt gồm có $n$ nhà ga liên tiếp đánh số từ $1$ tới $n,$ tất cả chúng nối với nhau bằng một tuyến đường sắt hai chiều. 

Hiện tại, đã có $m$ chuyến tàu đăng ký đi qua hệ thống đường sắt, mỗi chuyến sẽ dừng tại một nhà ga duy nhất trong một khoảng thời gian cố định. Khi một nhà ga đã có tàu dừng tại đó thì các chuyến tàu khác sẽ không thể dừng tại nhà ga đó nữa, mà buộc phải đi qua luôn. Biết rằng, mỗi tàu sẽ đến nhà ga tại một thời điểm cố định, dừng lại trong một khoảng thời gian rồi mới rời đi.

***Yêu cầu:*** Số lượng chuyến tàu khá nhiều khiến chị Đan Thanh không thể tự mình sắp xếp được. Hãy giúp chị Thanh chọn ra các chuyến tàu được phép dừng lại sao cho số lượng tàu được dừng là nhiều nhất có thể?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $m$.
- $m$ dòng tiếp theo, dòng thứ $i$ chứa ba số nguyên dương $a_i, b_i, t_i$ - thời gian đến, thời gian rời đi và nhà ga mà chuyến tàu thứ $i$ đăng ký đỗ lại.

## Constraints

- $1 \le n, m \le 10^5$.
- $1 \le a_i < b_i \le 10^5; \forall i: 1 \le i \le m$.
- $1 \le t_i \le n; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$s số điểm): $1 \le n, m \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số lượng tàu tối đa có thể dừng tại hệ thống đường sắt.

## Sample Input 1

```
3 6
1 3 1
2 3 1
1 2 2
3 6 2
5 6 3
3 4 1
```

## Sample Output 1

```
5
```

## Explanation 1

Chỉ có tàu số $1$ không thể dừng lại, còn $5$ chuyến tàu kia đều có thể dừng tại nhà ga đã đăng ký.

