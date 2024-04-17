# Tìm Giữa

Cho hai số nguyên dương $L$ và $R$.

***Yêu cầu:*** Tìm số nguyên dương $M \ (L≤M<R)$ để chênh lệch giữa tổng các số nguyên liên tiếp từ $L$ tới $M$ và tổng các số nguyên liên tiếp từ $M+1$ tới $R$ là nhỏ nhất?

## Input

- Một dòng duy nhất chứa hai số nguyên dương $L$ và $R$ cách nhau một dấu cách.

## Constraints

- $1 \le L < R \le 10^9$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $1 \le L < R \le 10^3$.
- Subtask $2$ ($40\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên dương $M$ duy nhất thỏa mãn yêu cầu đề bài. Nếu có nhiều đáp án thỏa mãn thì in ra đáp án lớn nhất có thể.

## Sample Input 1

```
2 7
```

## Sample Output 1

```
5
```

## Explanation 1

Tổng từ $2$ tới $5$ là $14,$ tổng từ $6$ tới $7$ là $13$. Chênh lệch nhỏ nhất là $1$.