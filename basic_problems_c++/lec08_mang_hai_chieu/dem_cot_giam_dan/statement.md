# Đếm Cột Giảm Dần

Cho một ma trận $A$ kích thước $m$ hàng, $n$ cột. Các hàng được đánh số từ $1$ tới $m$ (từ trên xuống dưới), các cột được đánh số từ $1$ tới $n$ (từ trái qua phải). 

Một cột $y$ của ma trận được gọi là ***giảm dần*** nếu như các giá trị trong cột đó thỏa mãn: 

$$a[i][y] \le a[i - 1][y]; \forall i: 2 \le i \le m$$

***Yêu cầu:*** Hãy đếm số lượng cột giảm dần trong ma trận?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m$ và $n$ - kích thước ma trận.
- Trên $m$ dòng tiếp theo, dòng thứ $i$ chứa $n$ số nguyên $a_{i, j} \ (1 \le j \le n)$ - thể hiện hàng thứ $i$ của ma trận.

## Constraints

- $1 \le m, n \le 100$.
- $1 \le a_{i, j} \le 100; \forall i, j: 1 \le i \le m, 1 \le j \le n$.

## Output

- In ra số lượng cột giảm dần của ma trận.

## Sample Input 1

```
3 3
1 2 3
1 1 2
2 3 1
```

## Sample Output 1

```
1
```

## Explanation 1

Cột thứ $3$ chính là cột giảm dần duy nhất trong ma trận.

