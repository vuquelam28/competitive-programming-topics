# Tìm Số (Vòng Lặp While)

Cho trước số nguyên dương $N$. Định nghĩa hàm $F(k)$ như sau:

$$F(k) = -1 + 2 - 3 + 4 - 5 + 6 - \cdots + k.(-1)^k$$

***Yêu cầu:*** Hãy xác định giá trị $k$ nhỏ nhất sao cho $F(k) > N?$

## Input

- Chứa duy nhất số nguyên dương $N$.

## Constraints

- $1 \le N \le 1000$.

## Output

- Số nguyên duy nhất là số $k$ nhỏ nhất tìm được.

## Sample Input 1

```
3
```

## Sample Output 1

```
8
```

## Explanation 1

$F(8) = -1 + 2 - 3 + 4 - 5 + 6 - 7 + 8  = 4 > 3$.
