# Khoảng Cách Xa Nhất

Cho $N$ điểm trong mặt phẳng $2$ chiều. Điểm thứ $i \ (1 \le i \le N)$ có tọa độ $(x_i,y_i)$.

Định nghĩa **khoảng cách** của $2$ điểm $i$ và $j$ là $\min\big(|x_i - x_j|, |y_i-y_j|\big)$.

***Yêu cầu:*** Hãy tìm **khoảng cách** lớn nhất có thể của $2$ điểm phân biệt bất kỳ?

## Input

- Dòng đầu tiên chứa số $N$.
- Trên $N$ dòng tiếp theo, dòng thứ $i$ chứa $2$ số $x_i$ và $y_i$.

## Constraints

- $2 \le N \le 2 \times 10^5$.
- $0 \le x_i,y_i \le 10^9; \forall i: 1 \le i \le N$.
- $(x_i, y_i) \neq (x_j, y_j)$ với $i \neq j$.

## Subtasks

- Subtask $1$ ($10\%$ số điểm): $1 \le N \le 10$.
- Subtask $2$ ($90\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số là **khoảng cách** lớn nhất có thể của $2$ điểm phân biệt bất kỳ.

## Sample Input 1

```
3
0 3
3 1
4 10
```

## Sample Output 1

```
4
```

## Sample Input 2

```
4
0 1
0 4
0 10
0 6
```

## Sample Output 2

```
0
```

