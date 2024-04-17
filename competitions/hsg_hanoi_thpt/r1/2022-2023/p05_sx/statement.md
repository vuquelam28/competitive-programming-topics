# Sắp Xếp Hoán Vị

Cho số nguyên dương $N$ và dãy hoán vị từ $1$ đến $N$. Biết rằng có thể chọn một dãy con liên tiếp từ $i$ đến $j$ và sắp xếp lại dãy con này thành dãy tăng dần với chi phí là $\big\lfloor \sqrt {j - i + 1} \big\rfloor$ (lấy phần nguyên, ví dụ $\lfloor 10,3333 \rfloor = 10$).

***Yêu cầu:*** Hãy tính tổng chi phí nhỏ nhất để sắp xếp dãy hoán vị ban đầu thành dãy tăng dần?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai chứa $N$ số nguyên dương là hoán vị từ $1$ đến $N$.

## Constraints

- $1 \le N \le 10^6$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $N \le 9$.
- Subtask $2$ ($30\%$ số điểm): $N \le 2000$.
- Subtask $3$ ($30\%$ số điểm): $N \le 10^5$.
- Subtask $4$ ($10\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng chứa một số duy nhất là kết quả của bài toán.

## Sample Input 1

```
5
3 1 4 2 5
```

## Sample Output 1

```
2
```

## Explanation 1

Chọn dãy con $[3, 1]$ mất chi phí $1$ và chuyển dãy thành $[1, 3, 4, 2, 5]$, sau đó chọn dãy con $[3, 4, 2]$ với chi phí $1$ để sắp xếp thành dãy $[1, 2, 3, 4, 5]$ với tổng chi phí là $2$.



