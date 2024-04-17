# Min And Max

Cho một mảng gồm $n$ số nguyên dương $a_1, a_2, ..., a_n$. 

***Yêu cầu:*** Với mỗi vị trí $i \ (1 \le i \le n),$ hãy in ra $\text{min}(a_i,a_{i+1},...,a_n)$ và $\text{max}(a_i,a_{i+1},...,a_n)?$

## Input

- Dòng đầu tiên gồm số nguyên dương $n$.
- Dòng thứ hai gồm $n$ số nguyên dương $a_1, a_2, ..., a_n$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^5; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le n \le 10^3$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $n$ dòng, dòng thứ $i$ in ra hai số nguyên dương là $\text{min}(a_i,a_{i+1},...,a_n)$ và $\text{max}(a_i,a_{i+1},...,a_n)$.

## Sample Input 1

```
5
3 1 9 2 7
```

## Sample Output 1

```
1 9
1 9
2 9
2 7
7 7 
```