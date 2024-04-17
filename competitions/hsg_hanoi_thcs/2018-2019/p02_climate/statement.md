# Biến Đổi Khí Hậu

Để nghiên cứu về tác động của biến đổi khí hậu, bạn An tiến hành một thí nghiệm như sau: An chọn một số điểm trên bản đồ, mỗi điểm có vị trí là $p_i,$ các điểm được đánh số từ $1$ tới hết. Ban đầu tất cả các điểm đều có độ cao là $0$ so với mực nước biển. Sau đó, An thực hiện $n$ tác động được đánh số từ $1$ tới $n,$ mỗi tác động sẽ làm thay đổi độ cao của các vị trí từ $l_i$ tới $r_i$ theo quy tắc: vị trí $l_i$ sẽ tăng thêm độ cao $x_i,$ vị trí $l_i + 1$ sẽ giảm đi độ cao $x_i,$ vị trí $l_i + 2$ sẽ tăng thêm độ cao $x_i,\dots$ tiếp tục như vậy cho tới vị trí $r_i$.

***Yêu cầu:*** Hãy giúp An xác định độ cao của các vị trí $p_1, p_2,\dots, p_m$ sau khi thực hiện xong $n$ tác động?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m$ và $n$ – số lượng điểm được chọn và số thao tác.
- Trên $m$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $p_i$ – vị trí của điểm được chọn thứ $i$.
- Trên $n$ dòng tiếp theo, mỗi dòng chứa ba số nguyên dương $l_i, r_i, x_i$ – thể hiện thao tác biến đổi thứ $i$.

## Constraints

- $1 \le m, n \le 10^3$.
- $1 \le p_i \le 10^9; \forall i: 1 \le i \le m$.
- $1 \le l_i ≤ r_i ≤ 10^9, 1 \le x_i ≤ 10^3; \forall i: 1 ≤ i ≤ n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le m, n \le 100; 1 \le l_i, r_i, p_i \le 1000$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra độ cao của $m$ vị trí sau $n$ thao tác biến đổi, mỗi độ cao nằm trên một dòng.

## Sample Input 1

```
5 2
1
3
6
7
8
1 6 7
3 7 2
```

## Sample Output 1

```
7
9
-9
2
0
```

## Explanation 1

Sau tác động thứ nhất lên các điểm có vị trí từ $1$ tới $6$: Vị trí $1$ và $3$ có độ cao là $7,$ vị trí $6$ có độ cao là $-7,$ các vị trí $7$ và $8$ giữ nguyên độ cao $0$.

Sau tác động thứ hai lên các điểm có vị trí từ $3$ tới $7$: Vị trí $1$ giữ nguyên độ cao $7,$ vị trí $3$ có độ cao $9,$ vị trí $6$ độ cao $-9,$ vị trí $7$ độ cao là $2,$ vị trí $8$ giữ nguyên độ cao $0$.


