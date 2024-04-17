# Tribonacci 

Do đã quá quen với dãy ***fibonacci,*** hôm nay, chúng ta hãy cùng tìm hiểu về dãy ***tribonacci.***

Số ***tribonacci*** thứ $i$ sẽ có công thức truy hồi như sau: 

$$\begin{cases}f_i = i; & \text{nếu } i \le 3 \\ f_i = f_{i - 1} + f_{i - 2} + f_{i - 3}; & \text{nếu } i > 3 \end{cases}$$

***Yêu cầu:*** Cho số nguyên dương $n$, hãy in ra số ***tribonacci*** thứ $n$?

## Input

- Gồm một dòng chứa số nguyên dương $n$ .

## Constraints

- $1 \le n \le 1000$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 30$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra kết quả của bài toán.

## Sample Input 1

```
4
```

## Sample Output 1

```
6
```

## Sample Input 2

```
7
```

## Sample Output 2

```
37
```

