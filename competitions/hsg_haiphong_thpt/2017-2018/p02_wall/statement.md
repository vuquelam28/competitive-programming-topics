# Dán Tường

Họa sĩ Hải Dương có vô số bức tranh hình vuông kích thước $d×d,$ với $d$ là số nguyên dương tùy ý. Họa sĩ Hải Dương nhận được yêu cầu của khách hàng là dán kín tranh lên $n$ bức tường phẳng (đánh số từ $1$ đến $n$). Bức tường $i$ là hình chữ nhật kích thước $a_i×b_i \text{ cm}^2 \ (\forall i: 1 \le i \le n)$ chỉ được dán lên bằng các bức tranh hình vuông có cùng kích thước.

***Ví dụ:*** Bức tường cỡ $4×12$, có thể dán kín bằng một trong các cách sau:
- $48$ bức tranh hình vuông kích thước $1×1$.
- $12$ bức tranh hình vuông kích thước $2×2$.
- $3$ bức tranh hình vuông kích thước $4×4$.

***Yêu cầu***: Họa sĩ muốn dán kín $n$ bức tường theo yêu cầu bằng ít bức tranh nhất. Trong số những bức tranh đó, họa sĩ sẽ sử dụng bao nhiêu bức tranh hình vuông có cạnh $d$ lớn nhất?

## Input

- Dòng thứ nhất chứa một số nguyên dương $n$.
- Trên $n$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên dương $a_i,b_i$ là kích thước của bức tường $i$.

## Constraints

- $1 \le n \le 10^6$.
- $1 \le a_i, b_i \le 10^6; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $n = 1$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra một số nguyên duy nhất là số lượng bức tranh hình vuông có cạnh $d$ lớn nhất đã dán lên $n$ bức tường.

## Sample Input 1

```
3
6 9
2 4
12 15
```

## Sample Output 1

```
26
```

## Explanation 1

Họa sĩ sẽ sử dụng tranh như sau:
- Bức tường $1$: Sử dụng $6$ bức tranh kích thước $3×3$.
- Bức tường $2$: Sử dụng $2$ bức tranh kích thước $2×2$.
- Bức tường $3$: Sử dụng $20$ bức tranh kích thước $3×3$.

Vậy số lượng bức tranh hình vuông có cạnh $d=3$ lớn nhất sử dụng là $6+20=26$