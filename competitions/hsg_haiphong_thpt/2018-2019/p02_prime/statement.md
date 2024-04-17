# Dãy Số Nguyên Tố

Cho dãy gồm $n$ số nguyên dương $a_1,a_2,…,a_n$ và $m$ câu hỏi có dạng $(u, v)$. Với mỗi câu hỏi phải đưa ra câu trả lời: từ vị trí $u$ đến vị trí $v$ của dãy $a_1,a_2,…,a_n$ có bao nhiêu số nguyên tố.

***Yêu cầu:*** Em hãy lập trình trả lời các câu hỏi trên?

## Input

- Dòng thứ nhất chứa hai số nguyên dương $n$ và $m$.
- Dòng thứ hai là $n$ số nguyên $a_1,a_2,…,a_n$ phân tách nhau bởi dấu cách.
- Trên $m$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên dương $u_i,v_i$.

## Constraints

- $1 \le n, m \le 10^5$.
- $1 \le a_i \le 10^6; \forall i: 1 \le i \le n$.
- $1 \le u_i, v_i \le n; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($35\%$ số điểm): $n \le 10^3, m \le 10^2$.
- Subtask $2$ ($35\%$ số điểm): $n \le 10^5, m \le 10^3$.
- Subtask $3$ ($30\%$ số điểm): $n \le 10^5, m \le 10^5$.

## Output

- In ra $m$ dòng, dòng thứ $i$ chứa một số nguyên là câu trả lời tương ứng cho câu hỏi thứ $i$.

## Sample Input 1

```
10 4
8 7 5 11 15 19 23 31 2 8
2 4
1 7
4 8
6 9
```

## Sample Output 1

```
3
5
4
4
```