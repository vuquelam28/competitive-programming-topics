# Function

Ta định nghĩa một hàm $f(n)$ như sau:
$$
\begin{cases}
    f(0) = 1 \\
    f(2n) = f(n) + f(n-1), & \forall n \in N^* \\
    f(2n+1) = f(n), & \forall n \in N
\end{cases}
$$

***Yêu cầu:*** Cho hai số nguyên dương $p,q \le 10^4$. Hãy tìm số nguyên $n$ thỏa mãn:
$$\frac{f(n)}{f(n+1)} =\frac{p}{q}$$ 

## Input

- Gồm một dòng chứa hai số nguyên dương $p$ và $q$.

## Constraint

- $1 \le p,q \le 10^4$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $p, q \le 500$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra kết quả của bài toán. Nếu không tồn tại số $n$ như vậy, in ra $-1$. Nếu có nhiều giá trị $n$ thỏa mãn, in ra $n$ có giá trị nhỏ nhất.


## Sample Input 1

```
2 3
```

## Sample Output 1

```
5
```

## Sample Input 2

```
5 5
```

## Sample Output 2

```
0
```