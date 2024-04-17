# Tổng Lân Cận

Cho dãy số $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Với mỗi phần tử $a_i,$ gọi $a_{i - 1}$ và $a_{i + 1}$ là các phần tử ***lân cận*** với nó. Riêng với $a_1$ thì chỉ có $a_2$ là phần tử lân cận với nó, và với $a_n$ thì chỉ có $a_{n - 1}$ là phần tử lân cận với nó.

***Yêu cầu:*** Hãy tạo ra mảng $B$ thỏa mãn: $b_i$ bằng tổng các phần tử lân cận của $a_i?$

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - kích thước dãy số.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 100$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- In ra các phần tử của mảng $b,$ mỗi phần tử trên một dòng.

## Sample Input 1

```
5
1 4 2 -5 3
```

## Sample Output 1

```
4
3 
-1 
5 
-5
```

