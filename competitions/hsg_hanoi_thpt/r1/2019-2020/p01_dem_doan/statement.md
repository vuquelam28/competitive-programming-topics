# Đếm Đoạn

Cho trước số nguyên dương $n$. 

***Yêu cầu:*** Đếm xem có bao nhiêu cặp số nguyên $(a,b) \ (0 < a \le b)$ để tổng các số nguyên trong đoạn $[a,b]$ bằng $n?$ Hai đoạn khác nhau là hai đoạn có ít nhất một phần tử khác nhau.

## Input

- Gồm một dòng duy nhất chứa số nguyên dương $N$.

## Constraints

- $n \le 10^{15}$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $n \le 10^4$.
- Subtask $2$ ($30\%$ số điểm): $n \le 10^8$.
- Subtask $3$ ($30\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất là kết quả bài toán.

## Sample Input 1

```
9
```

## Sample Output 1

```
3
```

## Explanation 1

Có $3$ đoạn thỏa mãn là : $[2,4]$, $[4,5]$, $[9,9]$.
