# Tìm Số

Cho số nguyên dương $x$, khi đảo ngược trật tự các số của $x$ ta thu được một số nguyên dương $y$. Khi đó $y$ được gọi là số đảo ngược của $x$.

Lấy ví dụ:
- Với $x = 123$ thì $y = 321$.
- Với $x = 30$ thì $y = 3$.

***Yêu cầu:*** Cho hai số nguyên dương $p, q \ (p \le q)$. Bạn hãy đếm số lượng số nguyên dương $x \ (p \le x \le q)$ sao cho đảo ngược của $x$ là số nguyên tố?

## Input

- Gồm một dòng duy nhất chứa hai số nguyên dương $p,q$.

## Constraints

- $1 \le p \le q \le 10^7$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $q-p \le 1000$.
- Subtask $2$ ($40\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một số duy nhất là số lượng số nguyên dương $x \ (p \le x \le q)$ sao cho đảo ngược của số $x$ là số nguyên tố.

## Sample Input 1

```
10 13
```

## Sample Output 1

```
2
```

## Explanation 1

Với $x = 10 \rightarrow y = 1, y$ không phải là số nguyên tố.
Với $x = 11 \rightarrow y = 11, y$ là số nguyên tố.
Với $x = 12 \rightarrow y = 21, y$ không phải là số nguyên tố.
Với $x = 13 \rightarrow y = 31, y$ là số nguyên tố.