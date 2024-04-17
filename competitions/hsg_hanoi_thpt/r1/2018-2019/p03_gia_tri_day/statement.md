# Giá Trị Dãy

Cho dãy số nguyên dương $a_1, a_2, \dots, a_n$. Với mỗi dãy con $a_l, a_{l + 1}, \dots, a_r \ (1 \le l \le r \le n)$ và số nguyên dương $s,$ ta gọi $k_s$ là số lần xuất hiện của $s$ trong dãy con $a_l, a_{l + 1}, \dots, a_r$. Giá trị của dãy con trên được tính bằng tổng của tất cả các tích $(k_s)^2 \times s$ với mọi số $s$ khác nhau trong dãy con.

Ví dụ, cho dãy gồm $8$ số nguyên dương $1, 1, 2, 2, 1, 3, 1, 1$. Dãy con $(l = 2, r = 7)$ có $k_1 = 3, k_2 = 2, k_3 = 1,$ do vậy giá trị của nó là $3^2 \times 1 + 2^2 \times 2 + 1^2 \times 3 = 20$.

***Yêu cầu:*** Cho $t$ dãy con, hãy xác định giá trị của mỗi dãy?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n, t$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$.
- Trên $t$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $l, r \ (1 \le l \le r \le n)$ mô tả một dãy con.

## Constraints

- $1 \le n, t \le 2 \times 10^5$.
- $1 \le a_i \le 10^6; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $n, t \le 2000; 1 \le a_i \le 10^6$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $t$ dòng, dòng thứ $k$ ghi một số nguyên là giá trị của dãy con thứ $k \ (1 \le k \le t)$.

## Sample Input 1

```
3 2
1 2 1
1 2
1 3
```

## Sample Output 1

```
3
6
```

## Explanation 1

$3 = 1^2 \times 1 + 1^2 \times 2$.

$6 = 2^2 \times 1 + 1^2 \times 2$.



