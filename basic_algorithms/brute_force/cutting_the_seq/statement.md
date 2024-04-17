# Cắt Dãy Số

Bạn Huyền có một dãy số nguyên gồm $n$ số $a_1, a_2,\dots, a_n$. Huyền muốn cắt dãy số này thành các đoạn con gồm các phần tử liên tiếp của dãy số, sao cho mỗi đoạn con đều là một dãy không giảm.

***Yêu cầu:*** Tìm số đoạn con ít nhất mà Huyền cần cắt để thu được các đoạn thỏa mãn yêu cầu trên?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2,\dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^5$.
- $|a_i| \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số đoạn con tối thiểu Huyền cần cắt.

## Sample Input 1

```
6
3 6 1 7 8 2
```

## Sample Output 1

```
3
```

## Explanation 1

Dãy số được cắt thành $3$ đoạn: $\{3, 6\}; \{1, 7, 8\}$ và $\{2\}$.
