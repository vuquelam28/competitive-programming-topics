# Chia Hết

Cho dãy số nguyên dương gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Cần chọn ra một số lượng ít nhất các phần tử sao cho tích của chúng chia hết cho $10^x,$ với $x$ cho trước.

***Yêu cầu:*** Cho trước số nguyên dương $n,$ dãy số $n$ phần tử và $x$. Hãy in ra số lượng ít nhất các phần tử cần chọn trong dãy đã cho để tích của chúng chia hết cho $10^x?$

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $x$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le x \le 18$.
- $1 \le a_i \le 10^{18}; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 10$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số lượng tối thiểu các phần tử cần chọn.

## Sample Input 1

```
5 4
10 8 100 25 6
```

## Sample Output 1

```
3
```

## Explanation 1

Chọn các phần tử $8, 25$ và $100$.