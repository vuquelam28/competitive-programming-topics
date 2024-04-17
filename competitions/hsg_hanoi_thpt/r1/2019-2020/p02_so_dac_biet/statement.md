# Số Đặc Biệt

Số đặc biệt là số nguyên dương $N$ sao cho khi thêm chữ số $a$ vào đầu và chữ số $b$ vào cuối số $N$ sẽ được số mới có giá trị gấp $k$ lần số $N$ ban đầu, tức là $\overline{aNb} = k \times N$.

***Yêu cầu:*** Cho trước ba số $a,b,k$. Tìm số đặc biệt $N?$

## Input

- Gồm một dòng duy nhất chứa ba số nguyên dương $a,b,k$ phân tách nhau bởi dấu cách.

## Constraints

- $0 \le a,b \le 10$
- $10 \le k \le 200$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $N \le 10^9$.
- Subtask $2$ ($50\%$ số điểm): $N \le 10^{18}$.

## Output

- Gồm một dòng duy nhất là kết quả bài toán. Nếu có nhiều số $N$ thỏa mãn, hay in ra số nhỏ nhất. Ngược lại nếu không có đáp án thỏa mãn $N \le 10^{18}$ in ra $-1$.

## Sample Input 1

```
4 5 91
```

## Sample Output 1

```
5
```

## Explanation 1

Ta có $455 = 91 \times 5$, số cần tìm là $N = 5$.