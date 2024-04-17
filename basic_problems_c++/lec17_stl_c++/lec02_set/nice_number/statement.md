# Nice Number

Hãy gọi một số là $k$ - tốt nếu nó chứa tất cả các chữ số không vượt quá $k \ (0, ..., k)$. Bi có một số $k$ và một mảng $A$ chứa $n$ số. Tìm giúp Bi xem có bao nhiêu số đẹp $k$ trong $A$ (đếm từng số mỗi khi nó xuất hiện trong mảng $a$).

***Yêu cầu:*** Xác định có bao nhiêu số $k$ - tốt trong dãy $A?$.

## Input

- Dòng đầu tiên chứa $n$ và $k$ tương ứng với đề bài.
- $n$ dòng tiếp theo, mỗi dòng chứa một số $a_i$ - phần tử thứ $i$ của mảng $A \ (1 \le i \le n)$.

## Constraints

- $1 \le n \le 10^5$.
- $0 \le k \le 9$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Output

- In ra số lượng số $k$ - tốt trong dãy $a$.

## Subtasks

- Subtask $1$ ($30\%$ points): $1 \le n \le 10$.
- Subtask $2$ ($70\%$ points): Không có ràng buộc gì thêm.

## Sample Input 1

```
2 1
1
10
```

## Sample Output 1

```
1
```