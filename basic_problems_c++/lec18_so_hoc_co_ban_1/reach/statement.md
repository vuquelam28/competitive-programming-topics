# Reach

Cho $2$ cặp số $(x,y)$ và $(a,b)$. Ta có thể biến đổi $1$ cặp số $(i,j)$ như sau:
- $(i,j)=(i-j,j)$.
- $(i,j)=(i,i-j)$.
- $(i,j)=(i+j,j)$.
- $(i,j)=(i,i+j)$.

***Yêu cầu:*** Hãy xác định xem có thể biến đổi cặp số $(x,y)$ thành cặp số $(a,b)$ bằng $4$ thao tác kể trên hay không?

## Input

- Dòng đầu chứa số nguyên dương $T$ – số lượng testcases.
- $T$ dòng tiếp theo, mỗi dòng chứa $4$ số nguyên $x, y, a, b$.

## Constraints

- $1≤T ≤ 1000$.
- $-10^{18}≤x,y,a,b≤10^{18}$.

## Output

- Ứng với mỗi testcase, in ra $1$ nếu như có thể biến đổi cặp số $(x,y)$ thành cặp số $(a,b)$ bằng $4$ thao tác đã cho, ngược lại in ra $0$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $-1000≤x,y,a,b≤1000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Sample Input

```
2
1 1 2 3
35 49 20 25 
```
## Sample Output

```
1
0
```



