# Biểu Thức

Xét một biểu thức đại số không có dấu ngoặc, chỉ có thể chứa các số dương thuộc tập $\{2, 3, 4, \dots, k\}$. Ta sẽ điền vào biểu thức này các toán tử $+$ và $\times,$ rồi tính toán giá trị biểu thức thu được theo đúng quy tắc: Nhân chia trước, cộng trừ sau. Lấy ví dụ, theo quy tắc này thì ta sẽ có $2 + 3 \times 4 = 14$.

***Yêu cầu:*** Cho trước hai số nguyên dương $k$ và $n$. Hãy đếm số cách tạo ra biểu thức có giá trị đúng bằng $n$ theo cách đã cho?

## Input

- Một dòng duy nhất chứa hai số nguyên dương $n$ và $k$.

## Constraints

- $2 < k < n \le 100$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $2 \le k \le 5$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số lượng biểu thức tìm được.

## Sample Input 1

```
6 3
```

## Sample Output 1

```
6
```

## Explanation 1

Các biểu thức tìm được là: $2 \times 2 + 2, 2 + 2 \times 2, 2 + 2 + 2, 3 + 3, 3 \times 2$ và $2 \times 3$.

