# Trung Bình Cộng

Cho dãy $a$ gồm $n$ số nguyên $a_1,a_2,...a_n$ và một số nguyên $k$.

***Yêu cầu:*** Hãy tìm hai chỉ số $p,q \ (1 \le p,q \le n, p \neq q)$ sao cho $\dfrac{a_p+a_q}{2} = k?$

## Input

- Dòng $1$: Chứa hai số nguyên $n$ và $k$.
- Dòng $2$: Chứa $n$ số nguyên $a_1,a_2,...a_n$.

## Constraints

- $1 \le n \le 10^5$.
- $|a_i| \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks 

- Subtask $1$ ($60\%$ số điểm): $n \le 5000, |k| \le 10^9, |a_i| \le 10^9$.
- Subtask $2$ ($20\%$ số điểm): $n \le 10^5, |k| \le 10^5, |a_i| \le 10^5$.
- Subtask $3$ ($20\%$ số điểm): $n \le 10^5, |k| \le 10^9, |a_i| \le 10^9$.

## Output

- In ra hai chỉ số $p,q$ tìm được. Nếu có nhiều cặp $(p,q)$ thỏa mãn, in ra một cặp bất kỳ. Nếu không tồn tại một cặp $(p,q)$ thỏa mãn nào, hay in ra hai số $0$.

## Sample Input 1

```
6 4
1 3 2 5 8 6
```

## Sample Output 1

```
2 4
```

## Explanation 1

Có nhiều bộ số $(p,q)$ thỏa mãn điều kiện đề bài như $(2,4),(4,2),(3,6),(6,3)$.

## Sample Input 2

```
3 5
1 3 2
```

## Sample Output 2

```
0 0 
```

## Explanation 2

Không có bộ số nào thỏa mãn.