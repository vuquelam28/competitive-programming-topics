# Hình Chữ Nhật

Bạn An là một người rất yêu thích hình học. Một ngày, An được thầy giáo ra một bài toán trên lớp như sau: Trên mặt phẳng tọa độ $(Oxy),$ cho $n$ điểm phân biệt. Từ $n$ điểm này, hãy tìm cách tạo ra nhiều hình chữ nhật nhất có thể, với điều kiện các hình chữ nhật đó có các cạnh song song với hai trục tọa độ. 

***Yêu cầu:*** Cho trước thông số hoành độ, tung độ của $n$ điểm trên mặt phẳng. Hãy giúp An đếm xem có bao nhiêu hình chữ nhật có các cạnh song song với trục tọa độ mà $4$ đỉnh là $4$ điểm bất kỳ trong số $n$ điểm đã cho?

## Input

- Dòng đầu là số nguyên dương $n$ – số lượng các điểm.
- $n$ dòng tiếp theo, mỗi dòng chứa hai số nguyên $x_i,y_i$ – tọa độ điểm thứ $i$.

## Constraints

- $4 \le n \le 6000$.
- $|x_i|, |y_i| \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $4 \le n \le 50$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra một số nguyên duy nhất là số lượng hình chữ nhật tạo thành.

## Sample Input 1

```
11
1 4
1 1
3 1
3 4
5 4
5 1
2 0
4 0
2 -2
4 -2
0 0
```

## Sample Output 1

```
4
```

## Explanation 1

Các hình chữ nhật được thể hiện như trên hình vẽ:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/XWestKfD.png)
</center>
