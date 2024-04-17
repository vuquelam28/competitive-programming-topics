# Fraction

Cho một dãy gồm $n$ phân số, mỗi phân số được biểu diễn dưới dạng $\frac{a_i}{b_i},$ ở đây $a_i,b_i$ đều là các số nguyên dương. 

***Yêu cầu:*** Hãy in ra dãy phân số $\frac{a_i}{b_i}$ tăng dần, nếu có hai phân số $\frac{a_i}{b_i} = \frac{a_j}{b_j}$ thì ta coi phân số có tử số bé hơn sẽ bé hơn. 

## Input

- Dòng đầu tiên chứa một số nguyên dương $n$.
- Trên $n$ dòng tiếp theo, mỗi dòng gồm hai số nguyên dương $a_i, b_i$ miêu tả phân số thứ $i$.

## Constraint

- $1 \le n \le 10^3$.
- $1 \le a_i, b_i \le 10^{50}; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1\le a_i, b_i \le 10^9$.
- Subtask $2$ ($70\%$ số điểm): $1\le a_i, b_i \le 10^{50}$.

## Output

- In ra $n$ dòng, mỗi dòng gồm hai số nguyên dương $a_i, b_i$ theo thứ tự tăng dần của phân số.

## Sample Input 1

```
3
2 4
1 2
3 5
```

## Sample Output 1

```
1 2
2 4
3 5
```

## Sample Input 2

```
6
3 7
4 5
4 8
1 2
3 8
1 9
```

## Sample Output 2

```
1 9
3 8
3 7
1 2
4 8
4 5
```