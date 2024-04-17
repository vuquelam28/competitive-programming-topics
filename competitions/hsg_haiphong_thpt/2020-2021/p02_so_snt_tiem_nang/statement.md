# Số Siêu Nguyên Tố Tiềm Năng

Số $x$ là số siêu nguyên tố tiềm năng khi thỏa mãn đồng thời 3 điều kiện sau:
- Là số nguyên tố;
- Thêm vào bên phải số $x$ một chữ số $\in [0,9],$ số thu được là số nguyên tố;
- Khi lần lượt xóa đi từng chữ số bên phải của $x,$ số thu được vẫn là số nguyên tố.

*Ví dụ:* Số $x = 313$ là số siêu nguyên tố tiềm năng vì:
- $313$ là số nguyên tố;
- Khi thêm vào bên phải số $x$ chữ số $7,$ ta thu được số $3137$ cũng là số nguyên tố;
- Khi lần lượt xóa đi các chữ số bên phải của $x$, ta thu được $31, 3$ là các số nguyên tố. 

***Yêu cầu:** Cho dãy gồm $n$ số nguyên dương $a_1,a_2,...,a_n$ và $T$ bộ $(u,v) \ (1 \le u \le v \le n)$. Hãy đếm số lượng số siêu nguyên tố tiềm năng trong đoạn $a_u,a_{u+1},...,a_v?$

## Input

- Dòng $1$: Chứa số nguyên dương $n$.
- Dòng $2$: Chứa $n$ số nguyên dương $a_1,a_2,...,a_n$.  
- Dòng $3$: Chứa số nguyên dương $T$ là số lượng câu hỏi.
- $T$ dòng tiếp theo, dòng thứ $i$ chứa $2$ số nguyên dương $u, v \ (1 \le u \le v \le n)$ ứng với câu hỏi $i$ là trong đoạn $a_u,a_{u+1},...,a_v$  có bao nhiêu số siêu nguyên tố tiềm năng.

## Constraints

- $1 \le T \le 10^5$.
- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^8; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $T = 1, n \le 100, a_i \le 10^3$.
- Subtask $2$ ($35\%$ số điểm): $T \le 10, 100 < n \le 10^3, a_i \le 10^8$.
- Subtask $3$ ($40\%$ số điểm): $T \le 10^5, 10^3 < n \le 10^5, a_i \le 10^6$.

## Output

- In ra $T$ dòng, dòng thứ $i$ là đáp án câu hỏi thứ $i$.

## Sample Input 1

```
6
59 12 57 53 23 313
3
1 3
2 5
3 6
```

## Sample Output 1

```
1
1
2
```

## Explanation 1

Các số siêu nguyên tố tiềm năng trong dãy ban đầu là: $59,23,313$.
Với câu hỏi $1,$ đoạn $[1,3]$ có $1$ số siêu nguyên tố tiềm năng là $a_1 = 59$.