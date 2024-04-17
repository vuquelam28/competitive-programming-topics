# Tổng Cặp Số

Xét dãy số nguyên dương khác nhau đôi một $a_1, a_2,..., a_n$. Cho trước một số nguyên dương $x$.

***Yêu cầu:*** Hãy xác định số cặp $(a_i, a_j)$ thỏa mãn:

- $a_i + a_j = x$.
- $1 \le i < j \le n$.

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số lượng phần tử của dãy số.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2,..., a_n$ phân tách nhau bởi dấu cách.
- Dòng thứ ba chứa số nguyên dương $x$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^6; \forall i: 1 \le i \le n$.
- $1 \le x \le 2 \times 10^5$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 1000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số cặp $(a_i, a_j)$ tìm được.

## Sample Input 1

```
9
5 12 7 10 9 1 2 3 11
13
```

## Sample Output 1

```
3
```

