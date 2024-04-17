# Dãy Số

Cho trước dãy số $A$ gồm $N$ số nguyên $a_1, a_2,..., a_N$ và hai số nguyên không âm $L, R$.

***Yêu cầu:*** Hãy đếm số lượng cặp chỉ số $(i, j)$ thỏa mãn:
$$\begin{cases}1 \le i \le j \le N. \\ L \le |a_i + a_{i + 1} + a_{i + 2} + \cdots + a_j| \le R. \end{cases}$$

## Input

- Dòng đầu tiên chứa ba số nguyên $N, L, R$.
- Dòng thứ hai chứa $N$ số nguyên $a_1, a_2,..., a_N$.
- Các số trên cùng một dòng phân tách nhau bởi một dấu cách.

## Constraints

- $1 \le N \le 10^5$.
- $0 \le L \le R \le 10^9$.
- $|a_i| \le 10^9; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $N \le 1000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số lượng cặp chỉ số $(i, j)$ tìm được.

## Sample Input

```
3 0 1
1 -1 2
```

## Sample Output

```
4
```

