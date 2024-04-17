# Chia Tiền Thưởng

Nhờ hoàn thành tốt công việc, An và Bình được công ty thưởng $N$ tờ tiền. Tờ tiền thứ $i$ có mệnh giá $a_i$. Hai bạn muốn chia đôi số tiền thành hai phần bằng nhau bằng cách chia cho mỗi người một số tờ tiền. Vì thế hai bạn quyết định sẽ chọn ra những tờ tiền để tổng số tiền hai bạn nhận được bằng nhau và lớn nhất, phần còn lại (nếu có) sẽ đem đi đầu tư.

***Yêu cầu:*** Hãy giúp hai bạn tính tổng số tiền lớn nhất mà mỗi người nhận được trước khi đầu tư?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai bao gồm $N$ số nguyên dương $a_1, a_2, ..., a_N$ là mệnh giá của những tờ tiền.

## Constraints

- $1 \le N \le 500$.
- $\sum_{i = 1}^N a_i \le 10^5$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $N \le 3$.
- Subtask $2$ ($30\%$ số điểm): $N \le 12$.
- Subtask $3$ ($30\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất là số tiền lớn nhất mà mỗi người nhận được.

## Sample Input 1

```
5
1 2 4 5 2
```

## Sample Output 1

```
7
```

## Explanation 1

An có thể chọn những tờ tiền có mệnh giá $1, 2, 4$.

Bình chọn những tờ tiền còn lại có mệnh giá $5, 2$.

Mỗi người sẽ nhận được tổng số tiền là $7$. Vì số tiền mỗi người nhận đã bằng nhau và đã chia hết số tiền nên họ sẽ không đầu tư.

## Sample Input 2

```
5
9 8 4 5 13
```

## Sample Output 2

```
17
```

## Explanation 2

An sẽ chọn những tờ tiền có mệnh giá $9, 8$.

Bình sẽ chọn những tờ tiền có mệnh giá $4, 13$.

Mỗi người sẽ nhận được tổng số tiền là $17$. Tờ tiền còn lại có mệnh giá $5$ sẽ đem đi đầu tư.

