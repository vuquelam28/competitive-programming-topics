# Chia Nhóm

Cho dãy số nguyên dương $A$ gồm $n$ phần tử $a_1,a_2,…,a_n$. 

***Yêu cầu:*** Hãy đưa ra một cách chia dãy số đã cho thành $k$ nhóm thỏa mãn mỗi nhóm có tổng bằng nhau?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $k$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1,a_2,…,a_n$.

## Constraints

- $1≤n≤10$.
- $1 \le k \le \text{min}(5, n)$.
- $1≤a_i≤100;\forall i: 1≤i≤n$.

## Output

- In ra giá trị duy nhất là tổng của mỗi nhóm nếu như tồn tại cách chia thỏa mãn. Nếu không thể tìm ra cách chia thỏa mãn, đưa ra số $-1$.

## Sample Input 1

```
6 3
1 9 2 10 5 3
```

## Sample Output 1

```
10
```

## Sample Input 2

```
6 4
2 2 2 2 2 2
```

## Sample Output 2

```
-1
```