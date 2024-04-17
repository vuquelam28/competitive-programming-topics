# Đường Đi Có Tích Lớn Nhất

Cho ma trận $A$ gồm $m$ dòng, $n$ cột, các dòng được đánh số từ $1$ tới $m,$ các cột được đánh số từ $1$ tới $n$. Tại mỗi ô của bảng chứa một số nguyên dương trong hệ đếm nhị phân. Từ một ô $(i, j)$ bất kỳ thuộc dòng thứ $i,$ cột thứ $j$ có thể đi tới một trong ba ô $(i+1, j-1), (i+1, j)$ hoặc $(i+1, j+1)$ nếu các ô này nằm trong phạm vi của ma trận.

***Yêu cầu:*** Hãy tìm đường đi từ một ô bất kỳ thuộc dòng đầu tiên của ma trận, đến một ô bất kỳ thuộc dòng cuối cùng của ma trận, sao cho tích các số trên $m$ ô của đường đi này là lớn nhất?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m, n$ – kích thước của bảng.
- Trên $m$ dòng tiếp theo, mỗi dòng chứa $n$ số nhị phân của ma trận $A,$ mỗi số có độ dài không quá $10$ chữ số.

## Constraints

- $1 < m, n \le 200$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le m, n \le 12; a_{i, j}$ có độ dài không quá $2$ chữ số.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nhị phân duy nhất là tích lớn nhất của $m$ ô trên đường đi tìm được.

## Sample Input 1

```
3 3
11 10 1
10 11 1
1 10 11
```

## Sample Output 1

```
11011
```

## Explanation 1

Đường đi qua các ô $(1,1), (2,2)$ và $(3,3)$ có tích $11 \times 11 \times 11 = 11011$ là số lớn nhất.
