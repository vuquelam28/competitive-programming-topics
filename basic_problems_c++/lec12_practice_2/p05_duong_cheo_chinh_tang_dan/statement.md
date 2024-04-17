# Đường Chéo Chính Tăng Dần

Cho ma trận vuông $A$ gồm $n$ hàng và $n$ cột. Các hàng được đánh số từ $1$ tới $n$ từ trên xuống dưới, các cột được đánh số từ $1$ tới $n$ từ trái qua phải. Phần tử nằm trên giao của hàng $i,$ cột $j$ gọi là phần tử $(i, j)$ và có điền số nguyên $a_{i, j}$.

***Yêu cầu:*** Viết chương trình kiểm tra đường chéo chính trong ma trận $A$ có tăng dần từ trên xuống dưới hay không?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Trên $n$ dòng tiếp theo, mỗi dòng chứa $n$ phần tử thể hiện một hàng của ma trận, các phần tử cách nhau một khoảng trắng.

## Constraints

- $1 < n \leq 100$.
- $|a_{i, j}| \le 100; \forall i, j: 1 \le i \le n, 1 \le j \le n$.

## Output

- Dòng duy nhất in ra `YES` nếu đường chéo chính trong ma trận $A$ tăng dần từ trên xuống dưới hoặc `NO` nếu đường chéo chính trong ma trận $A$ không tăng dần từ trên xuống dưới.

# Sample input 1

```
3
4 5 8
1 6 3
8 3 9
```

## Sample output 1

```
YES
```

# Sample input 2

```
3
4 5 8
1 9 3
8 3 6
```

## Sample output 2

```
NO
```