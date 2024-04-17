# Phép Cộng Thần Kỳ

Cậu bé uBoy đang cố giải một bài toán khó, bài toán nói rằng:

Cho hai số nguyên $u$, $v$, hãy tìm hai số nguyên $x, y \ \left(x \gt 0, y \neq 0 \right)$ thỏa mãn phương trình sau:

$$\frac{x}{u} + \frac{y}{v} = \frac{x + y}{u + v}$$

Vì quá bất lực trước độ khó của bài toán, uBoy đã nhờ đến sự trợ giúp của bạn. 

***Yêu cầu:*** Hãy giúp uBoy giải bài toán trên?

## Input

- Dòng đầu tiên chứa số nguyên $u$.
- Dòng thứ hai chứa số nguyên $v$.

## Constraints

- $1 \leq u, v \leq 10^9$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le u, v \le 10^5$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm hai dòng chứa lần lượt số nguyên $x$ và $y$ thỏa mãn $-10^{18} \leq x, y \leq 10^{18}$ và $(x, y) \neq (0, 0)$. Dữ liệu đảm bảo bài toán luôn có đáp án. Nếu có nhiều đáp án thì in ra đáp án nào có $|u - \sqrt{x}|$ nhỏ nhất.

## Sample input 1

```
1
1
```

## Sample output 1

```
1
-1
```

## Explanation 1

$\frac{1}{1} + \frac{-1}{1} = 0 = \frac{1 + (-1)}{1 + 1}$ và $|1 - \sqrt{1}| = 0$ nhỏ nhất trong các đáp án cần tìm.

