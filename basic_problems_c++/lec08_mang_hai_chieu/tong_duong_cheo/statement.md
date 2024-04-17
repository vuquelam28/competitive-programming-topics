# Tổng Đường Chéo

Nhập vào một ma trận vuông gồm $N$ hàng và $N$ cột, các hàng được đánh số từ $1$ tới $N,$ từ trên xuống dưới; các cột được đánh số từ $1$ tới $N,$ từ trái qua phải.

***Yêu cầu:*** Hãy tính tổng các phần tử trên đường chéo chính và đường chéo phụ của ma trận? Biết rằng đường chéo chính là đường chéo từ góc trái trên xuống góc phải dưới, còn đường chéo phụ là đường chéo từ góc phải trên tới góc trái dưới của ma trận.

## Input

- Dòng đầu tiên chứa số nguyên dương $N$ - kích thước ma trận.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa $N$ số nguyên là các số thuộc hàng $i$ của ma trận, phân tách nhau bởi dấu cách.

## Constraints

- $1 \le N \le 100$.
- $1 \le a_{i, j} \le 100; \forall i, j: 1 \le i \le N, 1 \le j \le N$.

## Output

- Hai số nguyên lần lượt là tổng đường chéo chính và đường chéo phụ của ma trận, mỗi số viết trên một dòng.


## Sample input 1

```
3
1 2 1
3 1 8
2 5 4

```

## Sample output 1

```
6
4
```

