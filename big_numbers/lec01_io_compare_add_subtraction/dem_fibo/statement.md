# Đếm Fibo

Ai trong chúng ta cũng đều biết về số Fibonacci. Dãy số Fibonacci được định nghĩa đệ quy như sau:

$$\begin{cases}f_0 = 0, f_1 = 1.\\ f_n = f_{n - 1} + f_{n - 2}; \forall n > 1. \end{cases}$$

***Yêu cầu:*** Cho hai số nguyên $a$ và $b,$ hãy đếm số lượng số fibonacci trong đoạn $[a, b]?$

## Input

- Dòng đầu tiên chứa số nguyên $a$.
- Dòng thứ hai chứa số nguyên $b$.

## Constraints

- $0 \le a \le b \le 10^{200}$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $0 \le a, b \le 10^9$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số lượng số Fibonacci thuộc đoạn $[a, b]$.

## Sample Input

```
2 
10
```

## Sample Output

```
4
```

Các số Fibonacci thuộc đoạn $[2, 10]$ là $\{2, 3, 5, 8\}$.

