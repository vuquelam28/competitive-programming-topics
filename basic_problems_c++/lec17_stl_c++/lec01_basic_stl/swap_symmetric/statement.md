# Hoán Đổi Phần Tử Đối Xứng

Cho trước ma trận hai chiều $A$ kích thước $n \times n$ chỉ gồm toàn các số nguyên. 

***Yêu cầu:*** Hãy hoán đổi giá trị của các cặp phần tử đối xứng nhau qua đường chéo chính trên ma trận?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - kích thước ma trận.
- $n$ dòng tiếp theo, mỗi dòng chứa $n$ số nguyên thể hiện một hàng của ma trận.
- Các số trên cùng một dòng phân tách nhau bởi một dấu cách.

## Constraints

- $1 \le n \le 1000$.
- $|a_{i, j}| \le 10^9; \forall i, j: 1 \le i \le n, 1 \le j \le n$.

## Output

- In ra ma trận sau khi đã hoán đổi vị trí các cặp phần tử đối xứng nhau qua đường chéo chính.

## Sample Input 1

```
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```

## Sample Output 1

```
1 5 9 13 
2 6 10 14 
3 7 11 15 
4 8 12 16
```

