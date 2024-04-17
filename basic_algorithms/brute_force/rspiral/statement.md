# Ma Trận Xoắn Ốc

Bài toán “Ma trận xoắn ốc” là một bài toán kinh điển mà bất cứ lập trình viên nào khi học về vòng lặp cũng cần làm qua. Cụ thể, bài toán như sau: Cho một ma trận $2$ chiều kích thước $M \times N$ ($M$ hàng, $N$ cột), và yêu cầu bạn in ra tất cả các phần tử của ma trận đó theo đúng chiều xoắn ốc. Vòng xoắn ốc bắt đầu đi từ góc trên cùng bên trái của ma trận và đi về phía trung tâm của ma trận này theo chiều kim đồng hồ.

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/DusLHyoi.png">
</center>

Ví dụ, với ma trận $4\times 4$ trên, các số của ma trận đi theo chiều xoắn ốc là: $1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16$.

***Yêu cầu:*** Cho trước ma trận xoắn ốc kích thước $M×N,$ hãy đưa ra các phần tử của ma trận theo đúng chiều xoắn ốc?

## Input

- Dòng đầu chứa hai số nguyên dương $M, N$ lần lượt là số hàng và số cột của ma trận.
- $M$ dòng tiếp theo, mỗi dòng chứa $N$ số nguyên dương $a_{i, j}$ mô tả một hàng của ma trận xoắn ốc.

## Constraints

- $1 \le M, N \le 1000$.
- $1 \le a_{i, j} \le 10^9$.

## Subtasks

- Subtask $1$ ($10\%$ số điểm): $M = N; M, N \le 5$.
- Subtask $2$ ($40\%$ số điểm): $M = N; 5 < M, N \le 1000$.
- Subtask $3$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một dãy số nguyên gồm $M \times N$ số phân tách nhau bởi dấu cách - thể hiện đường đi trên ma trận xoắn ốc theo đúng vòng xoắn ốc.

## Sample Input

```
4 4
1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7
```

## Sample Output

```
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
```
