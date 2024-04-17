# Tổng Tam Giác Trên

Cho một ma trận vuông $A$ kích thước $n \times n$. Các phần tử nằm bên dưới đường chéo chính của ma trận gộp lại sẽ tạo thành một tam giác, gọi là ***tam giác dưới*** của ma trận (màu xanh lục). Tương tự, các phần tử nằm bên trên đường chéo chính của ma trận gộp lại sẽ tạo thành ***tam giác trên*** của ma trận (màu xanh dương).

<center>

![](https://hackmd.io/_uploads/By-E1Uzq3.png)
</center>

***Yêu cầu:*** Cho trước ma trận $A,$ hãy tính tổng các phần tử trong tam giác trên của ma trận?

## Input

- Dòng đầu tiên chứa số nguyên dương $t$ - số lượng test cases.
- Trên $t$ nhóm dòng tiếp theo, mỗi nhóm dòng mô tả một test case:
    - Dòng đầu tiên chứa số nguyên dương $n$ - kích thước ma trận $A$.
    - Trên $n$ dòng tiếp theo, mỗi dòng chứa $n$ số nguyên $a_{i, j}$ thể hiện một hàng của ma trận.

## Constraints

- $1 \le t \le 50$.
- $1 \le n \le 100$.
- $|a_{i, j}| \le 100; \forall i, j: 1 \le i, j \le n$.

## Output

- In ra tổng các phần tử thuộc tam giác dưới của ma trận, mỗi test case in ra kết quả trên một dòng.

## Sample Input 1

```
1
5
1 5 6 7 10
2 4 2 4	5
3 4 3 2	1
5 6 7 2	4
1 3 3 9	6
```

## Sample Output 1

```
46
```

