# Tìm Bội

Cho $A, B, C$. 

***Yêu cầu:*** Hãy tìm số $x$ **nhỏ nhất** sao cho $A \le x \le B$ và $x$ là bội của $C?$

## Input

- Ba dòng chứa $3$ số nguyên $A,B,C$ theo thứ tự.

## Constraints

- $1 \le A \le B \le 10^5$.
- $1 \le C \le 10^5$.

## Output

- Số nguyên duy nhất là số $x$ **nhỏ nhất** thỏa mãn $A \le x \le B$ và $x$ là bội của $C$, hoặc $-1$ nếu không tồn tại $x$.

## Sample input 1                  

```
123
456
100
```

## Sample output 1

```
200
```

## Explanation 1

Vì $123 \le 200 \le 456$ và $200$ là bội nhỏ nhất của $100$ nằm trong khoảng cho trước. 

## Sample input 2

```
630
940
314
```

## Sample output 2

```
-1
```

## Explanation 2

Không có bội nào thỏa mãn.
