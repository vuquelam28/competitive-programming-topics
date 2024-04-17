# Đếm Số

Cho dãy số $A$ gồm $n$ số hạng nguyên dương và hai số $X, Y$ nguyên dương. Dãy số $U$ gồm $m$ số hạng được cho bởi công thức: 
$$\begin{cases} u_1=X. \\ u_i=u_{i-1}+Y; \forall i: 1<i\le m. \end{cases}$$ 

trong đó số $m$ được xác định để $u_m$ là số nhỏ nhất lớn hơn hoặc bằng giá trị lớn nhất của các số hạng trong dãy $A$.

***Yêu cầu:*** Hãy đếm xem trong dãy $A$ có bao nhiêu số hạng vừa là số nguyên tố, vừa là một số hạng nào đó thuộc dãy số $U?$

## Input

- Dòng đầu tiên chứa ba số nguyên dương $n, X, Y$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ của dãy $A$.

## Constraints

- $1\le n \le 10^5$.
- $1\le X,Y \le100$.
- $1\le a_i \le 10^6;\forall i:1\le i\le n$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Đưa ra số lượng số hạng của dãy $A$ thỏa mãn yêu cầu đề bài.

## Sample Input 1

```
5 1 1
3 5 8 4 11
```

## Sample Output 1

```
3
```

## Explanation 1

- Dãy $U$ gồm các số: $\{1,\ 2,\ 3,\ 4,\ 5,\ 6,\ 7,\ 8,\ 9,\ 10,\ 11\}$. Dãy $A$ có ba số $\{3,\ 5,\ 11\}$ là số nguyên tố và thuộc dãy $U$.

