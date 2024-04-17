# Tìm Chữ Số Thứ N

Cho hai số tự nhiên $A$ và $N$. Viết liên tiếp các số tự nhiên từ số $A$ và cùng tính chẵn lẻ với $A$ trên một đường thẳng.

***Yêu cầu:*** Xác định chữ số thứ $N$ của dãy đã viết?

## Input

- Dòng thứ nhất chứa số tự nhiên $A$.
- Dòng thứ hai chứa số tự nhiên $N$. 

## Constraints

- $A, N \le 10^9$.

## Output

- Chữ số duy nhất là chữ số ở vị trí thứ $N$.

## Sample Input 1

```
12
3
```

## Sample Output 1

```
1
```

## Sample Input 2

```
7
8
```

## Sample Output 2

```
5
```

## Explanation

- Khi $A = 12, N = 3$ thì ta có dãy số: $12141618202224...$Chữ số thứ $3$ là $1$.
- Khi $A = 7, N = 8$ thì ta có dãy số: $7911131517...$Chữ số thứ $8$ là $5$.