# Sân Điền Kinh

Trong một sân điền kinh, người ta kẻ các vạch sơn để thi đấu ở các cự li khác nhau. Có tất cả $N$ vạch sơn, vạch sơn thứ $i$ cách đầu sân khoảng cách $a_i \ (a_1<a_2<⋯<a_N)$. Với một cự li thi đấu là $M$ mét, Ban tổ chức giải điền kinh cần tìm ra hai vạch sơn để thi đấu cự li này, nói cách khác là tìm ra vạch sơn xuất phát $a_i$ và vạch sơn đích $a_j$ sao cho $a_j-a_i=M (i<j)$. 

***Yêu cầu:*** Hãy giúp Ban tổ chức xác định xem có bao nhiêu cách chọn ra hai vạch sơn thỏa mãn để tổ chức thi đấu với cự li $M$ mét?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N$ và $M$.
- Dòng thứ hai chứa $N$ số nguyên $a_1,a_2,…,a_N$.
- Các số trên cùng một dòng được ghi cách nhau một dấu cách.

## Constraints

- $1≤N≤10^5$.
- $1≤M≤10^9$.
- $0≤a_i≤10^9;1≤i≤N$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $1 \le N \le 100$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là kết quả bài toán. Nếu không tồn tại cách chọn nào thỏa mãn, đưa ra $-1$.

## Sample Input 1

```
4 2
2 4 6 8
```

## Sample Output 1

```
3
```

## Sample Input 2

```
4 2
1 5 9 18
```

## Sample Output 2

```
-1
```
