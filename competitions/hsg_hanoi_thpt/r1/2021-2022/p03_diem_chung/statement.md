# Điểm Chung

Trên trục số $Ox,$ cho $n$ đoạn thẳng, mỗi đoạn thẳng được xác định bởi hai điểm đầu và cuối là hai số nguyên. Một điểm $M$ được gọi là điểm nằm trong đoạn thẳng $AB$ nếu $A \le M \le B$ (tức là tọa độ của $M$ nằm giữa tọa độ của $A$ và $B$).

***Yêu cầu:*** Đếm xem có bao nhiêu điểm có tọa độ nguyên nằm trong đúng $k$ đoạn thẳng khác nhau trong số $n$ đoạn thẳng đã cho?

## Input

- Dòng đầu tiên chứa hai số nguyên $n$ và $k$.
- Trên $n$ dòng tiếp theo, dòng thứ $i \ (1 \le i \le n)$ gồm hai số nguyên $a_i, b_i$ mô tả hai điểm đầu và cuối của đoạn thẳng thứ $i$.

## Constraint

- $1 \le k \le n \le 10^5$.
- $1 \le a \le b \le 10^{18}; \forall i: 1 \le i \le n$.

## Output

- Một số nguyên duy nhất là số điểm nằm trong đúng $k$ đoạn thẳng.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le a_i, b_i \le 10^3; \forall i: 1 \le i \le n$.
- Subtask $2$ ($30\%$ số điểm): $k = n$.
- Subtask $3$ ($20\%$ số điểm): Không có ràng buộc gì thêm.

## Sample Input 1

```
3 2
1 5
2 8
3 7
```

## Sample Output 1

```
3
```
## Explanation 1

Tọa độ của $3$ điểm nằm trong đúng hai đoạn thẳng là $2,6,7$.
Điểm $2$ nằm trong hai đường thẳng thứ nhất và thứ hai.
Điểm $6,7$ nằm trong $2$ đoạn thẳng thứ hai và thứ ba.

## Sample Input 2

```
3 1
1 5
2 8
3 7
```

## Sample Output 2

```
2
```
## Explanation 2

Tọa độ của $2$ điểm nằm trong đúng hai đoạn thẳng là $1,8$.
Điểm $1$ nằm trong đường thẳng đầu tiên.
Điểm $8$ nằm trong đoạn thẳng thứ ba.

## Sample Input 3

```
3 3
1 5
2 8
3 7
```

## Sample Output 3

```
3
```
## Explanation 3

Tọa độ của $3$ điểm nằm trong cả $3$ đường thẳng là $3,4,5$.

