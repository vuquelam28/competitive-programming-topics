# Tam Giác Trên

Cho ma trận vuông $A$ gồm $n$ hàng và $n$ cột. Các hàng được đánh số từ $1$ tới $n$ từ trên xuống dưới, các cột được đánh số từ $1$ tới $n$ từ trái qua phải. Phần tử nằm trên giao của hàng $i,$ cột $j$ gọi là phần tử $(i, j)$ và có điền số nguyên $a_{i, j}$. 

***Yêu cầu:*** Viết chương trình tìm giá trị lớn nhất trong tam giác trên được tạo bởi đường chéo chính trong ma trận $A?$

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Trên $n$ dòng tiếp theo, mỗi dòng chứa $n$ phần tử thể hiện một hàng của ma trận, các phần tử cách nhau một khoảng trắng.

## Constraints

- $1 < n \leq 100$.
- $|a_{i, j}| \le 100; \forall i, j: 1 \le i \le n, 1 \le j \le n$.

## Output

- Dòng duy nhất in ra số nguyên $K$ là giá trị lớn nhất trong tam giác trên được tạo bởi đường chéo chính trong mảng $A$.

# Sample input 1

```
3
4 5 8
1 6 2
7 3 9
```

## Sample output 1

```
8
```