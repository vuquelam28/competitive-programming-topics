# Bộ Ba Số

Cho một tập gồm $n$ số nguyên dương $a_1, a_2, \dots, a_n$. Một bộ ba chỉ số $(i, j, k)$ gọi là ***bộ ba chỉ số đẹp*** nếu như tổng $a_i + a_j + a_k$ không vượt quá một giá trị $m$ cho trước.

***Yêu cầu:*** Cho trước dãy số và giá trị $m,$ hãy xác định bộ ba chỉ số đẹp có tổng lớn nhất?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $m$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $3 \le n \le 1000$.
- $1 \le m \le 10^9$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra tổng của bộ ba đẹp có tổng lớn nhất trong dãy. Nếu không tồn tại bộ ba nào thỏa mãn thì in ra $0$.

## Sample Input 1

```
5 21
5 6 7 8 9
```

## Sample Output 1

```
21
```

