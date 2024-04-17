# Phát Đồng Xu

Trong một trò chơi, có $n$ người chơi xếp thành một vòng tròn và được đánh số từ $1$ tới $n$ theo chiều kim đồng hồ. Trước khi trò chơi bắt đầu, sẽ có $m$ lượt phát đồng xu cho người chơi với nguyên tắc như sau: Mỗi lượt, chọn ngẫu nhiên hai số nguyên dương $l$ và $r \ (l \le n, r \le n),$ rồi phát một đồng xu cho những người chơi mang số hiệu từ $l$ tới $r$ theo chiều kim đồng hồ.

***Yêu cầu:*** Cho trước $n, m$ và các cặp số $l, r$. Tìm số đồng xu lớn nhất mà người chơi được phát và số lượng người chơi đạt được số lượng đồng xu như vậy?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n, m$ - số lượng người chơi và số lượt phát đồng xu.
- $m$ dòng tiếp theo, mỗi dòng gồm hai số nguyên dương $l$ và $r$ mô tả một lượt phát đồng xu.

## Constraints

- $1 \le n \le 10^9$.
- $1 \le m \le 10^5$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $1 \le n, m \le 10^3$.
- Subtask $2$ ($20\%$ số điểm): $1 \le n, m \le 10^5$.
- Subtask $3$ ($20\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm hai số nguyên dương là số đồng xu lớn nhất mà người chơi được phát và số lượng người chơi đạt được số đồng xu như vậy.

## Sample Input 1

```
5 2
1 5
4 2
```

## Sample Output 1

```
2 4
```

## Explanation 1

Số đồng xu của mỗi người ở mỗi lượt phát đồng xu:
- Ban đầu: $0 \ 0 \ 0 \ 0 \ 0$.
- Lượt thứ nhất: $1 \ 1 \ 1 \ 1 \ 1$.
- Lượt thứ hai: $2 \ 2 \ 1 \ 2 \ 2$.

Vậy số lượng đồng xu lớn nhất là $2$ và có $4$ người được $2$ đồng xu.