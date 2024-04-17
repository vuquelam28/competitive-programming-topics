# Số Nguyên Tố

Cho $N$ số nguyên tố $p_1,p_2,…,p_N \ (1<p_1<p_2<⋯<p_N)$. 

***Yêu cầu:*** Hãy liệt kê tất cả các số nguyên nằm trong đoạn $[L,R]$ mà không chia hết cho bất kỳ số nguyên tố nào ngoài $N$ số nguyên tố đã cho ở trên?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai chứa $N$ số nguyên $p_1,p_2,…,p_N$.
- Dòng thứ ba ghi chứa hai số nguyên dương $L$ và $R$.

## Constraints

- $1≤N≤10$.
- $2≤p_i≤2^{31};1≤i≤N$.
- $1≤L≤R≤2^{31}$.

## Output

- Nếu không tìm thấy số nào, đưa ra thông báo `none`.
- Trong trường hợp tìm được, liệt kê các số tìm thấy theo thứ tự tăng dần, hai số liên tiếp ghi cách nhau đúng một dấu `,`.

## Sample Input

```
3
2 3 5
20 30
```

## Sample Output

```
20,24,25,27,30
```
