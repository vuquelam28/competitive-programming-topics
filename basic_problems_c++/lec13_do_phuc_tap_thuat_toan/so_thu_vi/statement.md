# Số Thú Vị

Định nghĩa $S(x)$ là tổng các chữ số của $x$ được viết theo hệ cơ số 10. Ví dụ: $S(5) = 5$, $S(10) = 1$, $S(322) = 7$.

Số $x$ được gọi là **thú vị** nếu $S(x + 1) < S(x)$. 

***Yêu cầu:*** Cho trước số tự nhiên $n$. Nhiệm vụ của bạn là tính xem có bao nhiêu số $x$ thỏa mãn $1 \le x \le n$ và $x$ là số **thú vị?**

## Input

- Dòng duy nhất chứa số $n$.

## Constraints

- $1 \le n \le 10^9$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1\le n \le 10^3$.
- Subtask $2$ ($50\%$ số điểm): $1 \le n \le 10^9$.

## Output

- Dòng duy nhát chứa đáp án.

## Sample input 1

```
9
```

## Sample output 1

```
1
```

## Explanation 1

Số **thú vị** đầu tiên là số $9$.

## Sample input 2

```
34
```

## Sample output 2

```
3
```

## Explanation 2

Ba số **thú vị** nhỏ hơn $34$ lần lượt là $9, 19, 29$.
