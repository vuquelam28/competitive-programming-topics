# Biểu Diễn Thập Phân

Cho trước ba số nguyên dương $a, b, n$. Phân số $\frac{a}{b}$ luôn luôn có thể biểu diễn dưới dạng một số thập phân vô hạn tuần hoàn. Lấy ví dụ, $\frac{1}{4} = 0,25(0); \frac{23}{3} = 8,(3)$. Như vậy, kể cả số thập phân hữu hạn cũng có thể coi như một số thập phân vô hạn tuần hoàn với chu kì là vô hạn số $0$.

***Yêu cầu:*** Hãy tính tổng $n$ chữ số sau dấu phẩy trong biểu diễn thập phân của phân số $\frac{a}{b}?$

## Input

- Một dòng duy nhất chứa ba số nguyên dương $a, b, n$.

## Constraints

- $1 \le a \le 10^{18}$.
- $1 \le b \le 10^7$.
- $1 \le n \le 10^9$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $1 \le a, b \le 100; 1 \le n \le 10$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra tổng của $n$ chữ số sau dấu phẩy trong biểu diễn thập phân của phân số $\frac{a}{b}$.

## Sample Input 1

```
25 3 4
```

## Sample Output 1

```
12
```

## Explanation 1

Ta có $\frac{25}{3} = 8,333333...$Tổng $4$ chữ số sau dấu phẩy là $12$.
