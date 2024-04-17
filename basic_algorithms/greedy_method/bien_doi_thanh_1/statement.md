# Biến Đổi Thành 1

Cho bốn số nguyên $n, k, A, B$. Bạn sẽ biến đổi $n$ thành $1$ bằng một trong hai thao tác sau:

- Giảm $n$ xuống một đơn vị. Tốn $A$ đồng.
- Nếu $n$ chia hết cho $k$. Giảm $n$ đi $k$ lần ($n = \frac{n}{k}$). Tốn $B$ đồng.

***Yêu cầu:*** Hỏi chi phí tối thiểu để biến đổi $n$ về $1$ là bao nhiêu.

## Input

- Dòng duy nhất chứa bốn số nguyên $n, k, A, B$. Các số được ngăn cách bởi dấu cách.

## Constraints

- $1 \le n, k, A, B \le 10^9$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le n, k, A, B \le 10^6$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số nguyên duy nhất — chi phí tối thiểu để biến đổi $n$ thành $1$.

## Sample input 1

```
9
2
3
1
```

## Sample output 1

```
6
```

## Explanation 1

Cách biến đổi tối ưu như sau:

- Giảm $x$ một đơn vị ($9 \to 8$) mất $3$ đồng.
- Giảm $x$ $2$ lần ($8 \to 4$) mất $1$ đồng.
- Giảm $x$ $2$ lần ($4 \to 2$) mất $1$ đồng.
- Giảm $x$ $2$ lần ($2 \to 1$) mất $1$ đồng.

Tổng cộng trả $6$ đồng.

## Sample input 2

```
5
5
2
20
```

## Sample output 2

```
8
```

## Sample input 3

```
19
3
4
2
```

## Sample output 3

```
12
```