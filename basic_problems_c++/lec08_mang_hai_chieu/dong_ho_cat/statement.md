# Đồng Hồ Cát

Cho trước một ma trận vuông $A$ kích thước $N \times N$. Các hàng được đánh số từ $1$ tới $n$ từ trên xuống dưới, các cột được đánh số từ $1$ tới $n$ từ trái qua phải. Ô nằm trên giao của hàng $i,$ cột $j$ được gọi là ô $a_{i, j},$ trên đó có ghi một số nguyên. Một chiếc "đồng hồ cát" của ma trận là một cụm phần tử có dạng như sau:

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/tAHGnWeL.png">
</center>

Chẳng hạn, với một ma trận $4 \times 4$ như hình dưới đây:

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/cTIanlbt.png">
</center>

Thì các "đồng hồ cát" của nó là:

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/AEYuVYVn.png">
</center>

***Yêu cầu:*** Tìm "đồng hồ cát" có tổng các phần tử lớn nhất trong ma trận $A$ kích thước $N?$

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - kích thước ma trận.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa $n$ số nguyên $a_{i, j}$ là các phần tử nằm trên hàng $i$ của ma trận, phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 1000$.
- $-100 \le a_{i, j} \le 100; \forall i, j: 1 \le i \le n, 1 \le j \le n$.

## Output

- Số nguyên duy nhất là tổng của "đồng hồ cát" có tổng lớn nhất trong ma trận.


## Sample input 1

```
4
1 -9 3 4
5 6 -7 8
9 10 -15 -2
13 0 15 16
```

## Sample output 1

```
42
```

