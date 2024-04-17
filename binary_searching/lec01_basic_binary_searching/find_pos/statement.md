# Tìm Vị Trí

Cho dãy số nguyên dương $A$ gồm $N$ phần tử $a_1, a_2,..., a_N,$ các phần tử được sắp xếp theo thứ tự tăng dần. Bạn được cho $Q$ truy vấn khác nhau, mỗi truy vấn yêu cầu nhập từ bàn phím một số nguyên dương $K$ bất kỳ, và bạn cần in ra chính xác vị trí của số nguyên dương đó trong dãy.

***Yêu cầu:*** Hãy trả lời cả $Q$ truy vấn?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N$ và $Q$.
- Dòng thứ hai chứa $N$ số nguyên dương $a_1, a_2,..., a_N$ được sắp xếp theo thứ tự tăng dần và đôi một khác nhau.
- $Q$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $K$.

## Constraints

- $1 \le N, Q \le 10^5$.
- $1 \le a_i \le 10^{18}; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le N, Q \le 1000$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Trên $Q$ dòng, mỗi dòng ghi một số nguyên dương là vị trí trong dãy của số $K$ thuộc truy vấn tương ứng. Nếu không tồn tại số $K$ trong dãy thì đưa ra $-1$.

## Sample Input

```
5 3
1 2 3 4 5
3
4 
6
```

## Sample Output

```
3
4
-1
```


