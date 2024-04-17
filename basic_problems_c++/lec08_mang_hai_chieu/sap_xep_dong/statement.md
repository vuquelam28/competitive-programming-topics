# Sắp Xếp Dòng

Cho mảng hai chiều các số nguyên $A$ gồm $M$ dòng và $N$ cột. Các hàng được đánh số từ $1$ tới $M,$ các cột được đánh số từ $1$ tới $N$.

***Yêu cầu:*** Viết chương trình hoán vị các dòng trong mảng $A$ theo tiêu chuẩn sau: Dòng có tổng dòng nhỏ hơn nằm ở trên và dòng có tổng dòng lớn hơn nằm ở dưới.

## Input

- Dòng đầu tiên chứa $2$ số nguyên dương $M$ và $N$.
- $M$ dòng tiếp theo, mỗi dòng chứa $N$ phần tử, các phần tử cách nhau một khoảng trắng.

## Constraints

- $0 < M, N \leq 100$.

## Output

- Mảng $A$ sau khi đã sắp xếp.

# Sample Input 1

```
3 4
4 7 9 3
1 6 2 8
5 3 9 8
```

## Sample Output 1

```
1 6 2 8
4 7 9 3
5 3 9 8
```