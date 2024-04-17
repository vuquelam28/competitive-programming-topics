# Ghép Cặp

Để chuẩn bị cho ngày hội trò chơi dân gian cấp trường, lớp 12 Tin trường THPT Chu Văn An quyết định dự thi phần nhảy sạp. Toàn bộ học sinh trong lớp sẽ được chia thành nhiều cặp, mỗi cặp dự thi phải thỏa mãn chênh lệch chiều cao giữa hai bạn không vượt quá $K$. Ngoài ra, nếu số lượng cặp dự thi càng nhiều, cơ hội giành chiến thắng sẽ càng cao.

***Yêu cầu:*** Hãy tính toán xem lớp 12 Tin có thể ghép được tối đa bao nhiêu cặp dự thi?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số lượng học sinh của lớp.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách - chiều cao của từng bạn trong lớp.

## Constraints

- $2 \le n \le 10^5$.
- $1 \le k \le 10^5$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số cặp dự thi tối đa có thể ghép được.

## Sample Input 1

```
6 2
1 1 4 6 7 9
```

## Sample Output 1

```
4
```

