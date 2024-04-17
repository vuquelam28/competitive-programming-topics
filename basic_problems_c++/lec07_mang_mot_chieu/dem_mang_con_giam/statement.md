# Đếm Mảng Con Giảm

Cho mảng $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Một ***mảng con*** của mảng $A$ là dãy các phần tử liên tiếp $a_{l...r}$ thỏa mãn $1 \le l \le r \le n$.

Một mảng con $a_{l...r}$ gọi là ***mảng con giảm giảm*** nếu nó thỏa mãn tính chất sau:

$$a_i < a_{i - 1}; \forall i: l < i \le r$$

***Yêu cầu:*** Hãy đếm số lượng ***mảng con giảm*** trong mảng $A?$ Coi rằng các mảng con có kích thước bằng $1$ cũng là mảng con giảm.

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - kích thước dãy số.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 100$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- In ra số lượng mảng con giảm tìm được.

## Sample Input 1

```
3
1 -7 -8
```

## Sample Output 1

```
6
```

