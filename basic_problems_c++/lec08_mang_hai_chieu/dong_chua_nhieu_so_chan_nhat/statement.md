# Dòng Chứa Nhiều Số Chẵn Nhất

Nhập vào một bảng số nguyên gồm $M$ hàng và $N$ cột, các hàng được đánh số từ $1$ tới $M,$ từ trên xuống dưới; các cột được đánh số từ $1$ tới $N,$ từ trái qua phải.

***Yêu cầu:*** Hãy xác định dòng nào có nhiều số chẵn nhất và đếm xem có bao nhiêu dòng như vậy?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $M, N$ - kích thước bảng số.
- $M$ dòng tiếp theo, dòng thứ $i$ chứa $N$ số nguyên là các số thuộc hàng $i$ của bảng số, phân tách nhau bởi dấu cách.

## Constraints

- $1 \le M, N \le 100$.
- $1 \le a_{i, j} \le 100; \forall i, j: 1 \le i \le M, 1 \le j \le N$.

## Output

- Dòng đầu tiên chứa một số nguyên là chỉ số của dòng có nhiều số chẵn nhất. Nếu có nhiều dòng như vậy, đưa ra chỉ số lớn nhất.
- Dòng thứ hai chứa một số nguyên là số lượng dòng có cùng số lượng số chẵn nhiều nhất.


## Sample input 1

```
3 4
1 2 3 4
5 6 7 8
9 10 11 12
```

## Sample output 1

```
3
3
```

