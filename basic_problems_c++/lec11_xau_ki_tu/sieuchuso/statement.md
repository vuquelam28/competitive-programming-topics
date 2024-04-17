# Siêu Chữ Số

Siêu chữ số của một số nguyên $x$ được định nghĩa như sau:
- Nếu $x$ chỉ có một chữ số thì siêu chữ số của $x$ là chính nó.
- Ngược lại thì siêu chữ số của $x$ là siêu chữ số của tổng các chữ số của $x$.

Ví dụ: Siêu chữ số của $9875$ được tính như sau:

```
1. Siêu_chữ_số(9875) = 9 + 8 + 7 + 5 = 29.
2. Siêu_chữ_số(29)   = 2 + 9 = 11
3. Siêu_chữ_số(11)   = 1 + 1 = 2
4. Siêu_chữ_số(2)	  = 2  
```

***Yêu cầu:*** Cho hai số nguyên $n, k$. Số nguyên $p$ được tạo thành bằng cách ghép $k$ số nguyên $n$ với nhau. Hãy cho biết siêu chữ số của $p?$

Ví dụ: $n = 9875, k = 4$ thì $p = 9875987598759875$.

```
1. Siêu_chữ_số(p) = Siêu_chữ_số(9875987598759875) = 116
2. Siêu_chữ_số(p) = Siêu_chữ_số(116) = 8
3. Siêu_chữ_số(p) = Siêu_chữ_số(8) = 8
```

## Input

- Dòng đầu tiên chứa số nguyên $n$.
- Dòng thứ hai chứa số nguyên $k$.

## Constraints

- $1 \leq n \lt 10^{100000}$.
- $1 \leq k \leq 10^5$.

## Output

- Một số nguyên duy nhất.

## Sample Input 1

```
123
3
```

## Sample Output 1

```
9
```