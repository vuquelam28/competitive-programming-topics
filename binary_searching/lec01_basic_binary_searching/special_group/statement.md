# Xếp Nhóm

Cho dãy số $A$ gồm $2 \times N$ số nguyên đôi một phân biệt $a_1, a_2,..., a_{2N}$. Một cách chia các phần tử trong dãy thành $N$ nhóm, mỗi nhóm gồm hai phần tử sao cho chênh lệch giữa hai phần tử của nhóm này bằng chênh lệch giữa hai phần tử của nhóm khác được gọi là một cách chia nhóm ***đặc biệt***. Ví dụ, với dãy số $A = \{1, 3, 5, 7\},$ cách chia $\{1, 3\}, \{5, 7\}$ được gọi là ***đặc biệt***. Hai cách chia nhóm đặc biệt được coi là khác nhau nếu tồn tại hai số trong cách xếp này thì cùng nhóm, nhưng trong cách xếp kia lại khác nhóm.

***Yêu cầu:*** Hãy đếm số lượng cách chia nhóm đặc biệt trong dãy số đã cho?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai chứa $2N$ số nguyên $a_1, a_2,..., a_{2N}$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le N \le 10^6$.
- $|a_i| \le 10^9; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $N = 2$.
- Subtask $2$ ($20\%$ số điểm): $1 \le N \le 5$.
- Subtask $3$ ($20\%$ số điểm): $1 \le N \le 100$.
- Subtask $4$ ($20\%$ số điểm): $1 \le N \le 1000$.
- Subtask $5$ ($20\%$ số điểm): $1 \le N \le 10^6; a_i = a_{i - 1} + 1 \ (\forall i: 1 < i \le 2N)$.

## Output

- Số nguyên duy nhất là số cách chia nhóm ***đặc biệt*** tìm được.

## Sample Input

```
2
1 3 5 7
```

## Sample Output

```
2
```

