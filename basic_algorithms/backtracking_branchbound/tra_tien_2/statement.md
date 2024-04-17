# Trả Tiền 2

Một khách hàng muốn rút số tiền $T$ từ một cây ATM bên đường. Bên trong cây ATM hiện đang có $N$ tờ tiền có mệnh giá $a_1, a_2,…, a_n$. 

***Yêu cầu:*** Hãy tìm một cách trả tiền của máy ATM cho khách hàng, sao cho số tờ tiền cần dùng là ***ít nhất***?.

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N$ và $T$.
- Dòng thứ hai chứa $N$ số nguyên dương $a_1, a_2,..., a_N$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le N \le 20$.
- $1 \le T \le 1000$.
- Thời gian thực thi: $1s$.
- Ràng buộc bộ nhớ: $256MB$.

## Output

- Dòng đầu tiên in ra số tờ tiền nhỏ nhất phải trả, nếu không có cách trả tiền thì ghi $-1$.
- Nếu tồn tại cách trả tiền, dòng thứ hai ghi ra các mệnh giá tiền sẽ trả, phân tách nhau bởi dấu cách.

## Sample Input

```
10 390
200 10 20 20 50 50 50 50 100 100
```

## Sample Output

```
5
200 20 20 50 100
```

