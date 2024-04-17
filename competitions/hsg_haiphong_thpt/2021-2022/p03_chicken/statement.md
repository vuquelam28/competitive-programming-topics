# Gà Đẻ Trứng

Trang trại gà của nhà Bé Bo có $n$ con gà siêu trứng đánh số từ $1$ đến $n$. Con gà $i \ (1 \le i \le n)$ đẻ quả trứng đầu tiên ở giây $p_i,$ sau đó cứ $t_i$ giây tiếp theo sẽ đẻ thêm một quả trứng.

***Yêu cầu:*** Bạn hãy viết chương trình tính thời gian nhỏ nhất (tính bằng giây) để Bé Bo thu được ít nhất $x$ quả trứng?

## Input

- Dòng thứ nhất chứa hai số nguyên dương $n, x$.
- Trên $n$ dòng tiếp theo, dòng thứ $i \ (1 \le i \le n)$ chứa hai số nguyên dương $p_i, t_i$.

## Constraints

- $1 \le n \le 20$.
- $1 \le x \le 10^{15}$.
- $1 \le p_i,t_i \le 500; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $n=1, x \le 10^{15}$.
- Subtask $2$ ($45\%$ số điểm): $n \le 20, x \le 1000$.
- Subtask $3$ ($35\%$ số điểm): $n \le 20,x \le 10^{15}$.

## Output

- Một số nguyên duy nhất là thời gian nhỏ nhất để Bé Bo thu được ít nhất $x$ quả trứng.

## Sample Input 1

```
2 3
10 30
5 25
```
## Sample Output 1

```
30
```

## Sample Input 2

```
2 3
10 5
5 10
```
## Sample Output 2

```
15
```