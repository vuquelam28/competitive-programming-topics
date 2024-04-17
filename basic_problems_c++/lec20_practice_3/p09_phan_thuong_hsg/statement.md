# Phần Thưởng Học Sinh Giỏi

Trong kỳ thi học sinh giỏi Tin học 2018, Ban tổ chức quyết định thành lập một quỹ gồm $k$ món quà để tặng thưởng cho các em học sinh giỏi. Tuy nhiên, quy chế tặng thưởng có thay đổi: Không nhất thiết thí sinh nào điểm cao nhất mới được nhận quà, mà ban tổ chức sẽ tặng quà cho các thí sinh với điều kiện thí sinh với số điểm $a_i$ phải được nhận số quà bằng đúng điểm của mình.

***Yêu cầu:*** BTC có danh sách $n$ thí sinh với số điểm lần lượt $a_1, a_2, \dots, a_n$ và số món quà $k$. Hãy tính xem có tối đa bao nhiêu thí sinh có thể nhận quà từ BTC?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $k$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ mỗi số cách nhau một dấu cách.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le k \le 2 \times 10^9$.
- $1 \le a_i \le 2 \times 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số lượng thí sinh tối đa có thể nhận quà từ BTC.

## Sample Input 1

```
4 10
8 1 4 7
```

## Sample Output 1

```
2
```

