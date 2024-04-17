# Xoay Ma Trận 2

Cho ma trận vuông $A$ kích thước $n \times n$. Ta lấy phần tử ở chính giữa ma trận làm tâm, rồi tạo một hệ trục tọa độ lấy tâm làm phần tử này. Kế đến, ta sẽ xoay toàn bộ ma trận một góc $180 \degree \text{C}$ (các góc của ma trận sẽ xoay sang phải $180 \degree \text{C}$). 

<center>

![](https://hackmd.io/_uploads/Bk5m3kSq2.png)
</center>

***Yêu cầu:*** Hãy xoay ma trận theo cách trên và in ra ma trận mới?

## Input

- Dòng đầu tiên chứa số nguyên dương $t$ - số lượng test cases.
- Trên $t$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một test case theo cấu trúc:
    - Dòng đầu tiên chứa số nguyên dương $n$ - kích thước ma trận $A$.
    - Trên $n$ dòng tiếp theo, mỗi dòng chứa $n$ số nguyên $a_{i, j}$ thể hiện một hàng của ma trận.

## Constraints

- $1 \le n \le 100$.
- $|a_{i, j}| \le 100; \forall i, j: 1 \le i, j \le n$.

## Output

- In ra ma trận $A$ sau khi xoay. Mỗi test case đưa ra kết quả trên một nhóm $m$ dòng liên tiếp.

## Sample Input 1

```
1
3
1 2 3
4 5 6
7 8 9
```

## Sample Output 1

```
9 8 7
6 5 4
3 2 1
```

