# Bộ Pitago

An là một học sinh Trung học, bạn ấy rất thích học Toán. Hôm qua, An vừa đọc được các kiến thức về tam giác vuông với ba cạnh $a, b, c$. An rất hào hứng với đẳng thức $a^2 + b^2 = c^2$. Với ba số nguyên dương cho trước nếu $a^2 + b^2 = c^2$ thì ta gọi bộ này là bộ Pitago.

Cho trước dãy số nguyên dương gồm $n$ phần tử $a_1, a_2, \dots, a_n;$ các số đôi một khác nhau.

***Yêu cầu:*** Đếm số bộ Pitago $(a_i, a_j, a_k)$ thỏa mãn $a_i^2 = a_j^2 + a_k^2$ (với $i, j, k$ đôi một khác nhau)?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10000$.
- $0 \le a_i \le 10000; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($30\%$ số điểm): $100 < n \le 1000$.
- Subtask $3$ ($40\%$ số điểm): $1000 < n \le 10000$.

## Output

- In ra số lượng bộ số Pitago, nếu không có bộ nào thì in ra $0$.

## Sample Input 1

```
5
5 7 4 3 8
```

## Sample Output 1

```
1
```

