# Ô trên bảng

Cho một bảng có $H$ dòng và $W$ cột. Ô $(i,j)$ có $A_{i,j}$ cục đá. 

***Yêu cầu:*** Hãy tìm số lượng ít nhất cục đá phải bị loại bỏ để tất cả các ô trong bảng có cùng số lượng cục đá?

## Input

- Dòng đầu tiên chứa hai số $H$ và $W$.
- Trên $H$ dòng tiếp theo, dòng thứ $i$ có $W$ số $A_{i,1}, A_{i,2}, \dots, A_{i, W}$.

## Constraints

- $1 \le H, W \le 100$.
- $0 \le A_{i,j} \le 100$.

## Output

- In ra số cục đá ít nhất phải bị loại bỏ để tất cả các ô trong bảng có cùng số lượng cục đá.

## Sample input 1

```
2 3
2 2 3
3 2 2
```

## Sample output 1

```
2
```

## Explanation 1

Bỏ $1$ cục đá ở ô $(1,3)$ và $1$ cục đá ở ô $(2,1)$. Khi đó, tất cả các ô đều có đúng $2$ cục đá.

## Sample input 2

```
3 3
99 99 99
99 0 99
99 99 99
```

## Sample output 2

```
792
```

