# Tổ Hợp

Một tổ hợp chập $K$ của tập hợp gồm $N$ phần tử là một cách chọn ra $K$ phần tử bất kỳ của tập hợp đó mà không xét tới tính thứ tự. Theo công thức toán tổ hợp, số lượng tổ hợp chập $K$ của $N$ phần tử sẽ là: $C(K,N) =  \frac{N!}{K!(N-K)!}$

***Yêu cầu:*** Nhập vào từ bàn phím hai số nguyên dương $N$ và $K \ (K \le N \le 20)$. Hãy tìm và in ra tất cả các tổ hợp chập $K$ của tập hợp $\{1, 2, …, N\}$ theo ***thứ tự từ điển tăng dần***.

## Input

- Một dòng duy nhất chứa hai số nguyên dương $N$ và $K$.

## Constraints

- $1 \le K \le N \le 20$.
- Thời gian thực thi: $1s$.
- Giới hạn bộ nhớ: $256MB$.

## Output

- Đưa ra tất cả các tổ hợp chập $K$ của $N$ theo chiều tăng dần về thứ tự từ điển, mỗi tổ hợp đưa ra trên một dòng theo mẫu ở ví dụ.

## Sample Input

```
5 3
```

## Sample Output

```
1. 1 2 3 
2. 1 2 4 
3. 1 2 5 
4. 1 3 4 
5. 1 3 5 
6. 1 4 5 
7. 2 3 4 
8. 2 3 5 
9. 2 4 5 
10. 3 4 5
```
