# Trò Chơi Với Tấm Bìa

Tùng có $m \times n$ tấm bìa hình vuông được xếp thành một hình chữ nhật có $m$ dòng và $n$ cột, các hàng được đánh số từ $1$ tới $m$ từ trên xuống dưới, các cột được đánh số từ $1$ tới $n$ từ trái qua phải. Tấm bìa ở dòng thứ $i,$ cột thứ $j$ có ghi một số nguyên dương $a_{i,j}$. Tùng đố một trò chơi như sau: An được phép lật úp tối đa $k$ tấm bìa, và khi An lật úp một tấm bìa có ghi số nguyên dương $a_{i,j}$ thì tất cả các tấm bìa khác có ghi cùng số nguyên đó cũng được lật úp theo.

Ví dụ: 

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/RoIDPDUs.png)
</center>

Với hình chữ nhật như trên: $m=3, n=2$ và $k=2$ thì An có thể lật úp các tấm bìa như sau:
- Lật úp tấm bìa có ghi số $1$ và số $3$ thì sẽ có tổng cộng $12$ tấm bìa được lật úp.
- Lật úp tấm bìa có ghi số $1$ và số $4$ thì sẽ có tổng cộng $13$ tấm bìa được lật úp.

***Yêu cầu:*** Hãy giúp An tìm cách lật úp không quá $k$ tấm bìa sao cho tổng số tấm bìa được lật úp là nhiều nhất?

## Input

- Dòng đầu chứa $3$ số nguyên dương $m, n, k$.
- $m$ dòng tiếp theo mỗi dòng ghi $n$ số nguyên dương $a_{i,j}$ biểu diễn bảng số.

## Constraints

- $1≤m,n≤300$.
- $1≤k≤m×n$.
- $a_{i,j}≤10^5; \forall i, j: 1 \le i \le m, 1 \le j \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le m, n \le 20$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là tổng số tấm bìa tối đa được lật úp.

## Sample Input 1

```
3 6 2
1 2 1 3 1 1
6 1 4 1 4 3
1 2 1 4 1 1
```

## Sample Output 1

```
13
```

