# Xoay Ma Trận

Cho ma trận vuông $A$ kích thước $n \times n$. Ta lấy phần tử ở chính giữa ma trận làm tâm, rồi tạo một hệ trục tọa độ lấy tâm làm phần tử này. Kế đến, ta sẽ xoay toàn bộ ma trận một góc $90 \degree \text{C}$ (các góc của ma trận sẽ xoay sang phải $90 \degree \text{C}$). 

<center>

![](https://hackmd.io/_uploads/HJ_mELzq3.png)
</center>

***Yêu cầu:*** Hãy xoay ma trận theo cách trên và in ra ma trận mới?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - kích thước ma trận $A$.
- Trên $n$ dòng tiếp theo, mỗi dòng chứa $n$ số nguyên $a_{i, j}$ thể hiện một hàng của ma trận.

## Constraints

- $1 \le n \le 100$.
- $|a_{i, j}| \le 100; \forall i, j: 1 \le i, j \le n$.

## Output

- In ra ma trận $A$ sau khi xoay.

## Sample Input 1

```
3
1 2 3
4 5 6
7 8 9
```

## Sample Output 1

```
7 4 1
8 5 2
9 6 3
```

