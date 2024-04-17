# Xâu Con

Với một xâu kí tự $S,$ ta định nghĩa $|S|$ là độ dài của xâu đó. Các kí tự trong xâu $S$ được đánh số thứ tự từ $1$ theo chiều từ trái qua phải. Xâu tiền tố độ dài $k$ của $S,$ viết tắt là $C(S, k)$ được định nghĩa như sau:
$$C(S, k) = \begin{cases}S_1S_2...S_k; \text{với } k \le |S|.\\ S; \text{với } k > |S|. \end{cases}$$

Cho trước $n$ xâu kí tự $S_1, S_2,..., S_n$ có tổng độ dài không vượt quá $10^6$. Với một giá trị $k$ bất kỳ, ta xây dựng tập các xâu $T_1, T_2,..., T_n;$ với $T_i = C(S_i, k) \ (1 \le i \le n)$.

***Yêu cầu:*** Tìm giá trị $k$ nhỏ nhất để tập các phần tử $T_1, T_2,..., T_n$ là đôi một phân biệt?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa một xâu kí tự $S_i$ chỉ gồm toàn các chữ cái latin in thường.

## Constraints

- $1 \le n \le 10^5$.
- Tổng độ dài các xâu không vượt quá $10^6$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 50; |S_i| \le 100$.
- Subtask $2$ ($30\%$ số điểm): $50 < n \le 1000; |S_i| \le 1000$.
- Subtask $3$ ($40\%$ số điểm): $1000 < n \le 10^5$.

## Output

- Số nguyên $k$ nhỏ nhất cần tìm.

## Sample Input 1

```
4
toidihoc
taodihoc
toikhongbiet
taodichoi
```

## Sample Output 1

```
6
```

## Explanation 1

Với $k = 6,$ các xâu $T$ lần lượt là: `toidih`, `taodih`, `toikho`, `taodic`. Các xâu này đôi một khác nhau.
