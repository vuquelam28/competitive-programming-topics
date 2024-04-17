# Minions Bầu Cử

Có $n$ minions đang tranh đấu trong cuộc bầu cử Tổng thống của ACM (Association of Cute Minions). Bọn chúng đứng thành một hàng, mỗi minion có mức độ ảnh hưởng là $s_i \ (1≤i≤n)$.

Mỗi minions sẽ bỏ phiếu cho các minions khác, và tất nhiên, chúng không được phép tự bỏ phiếu cho mình. Minion thứ $j$ sẽ bầu cho minion thứ $i \ (i≠j)$ nếu mức độ ảnh hưởng của minion thứ $j$ lớn hơn hoặc bằng tổng độ ảnh hưởng của tất cả các minions giữa chúng (không tính hai minions $i$ và $j$).

***Yêu cầu:*** Với mỗi minion, hãy xác định số phiếu bầu chúng nhận được?

## Input

- Dòng đầu tiên chứa số nguyên dương $T$ – số lượng test cases.
- $T$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một test case cấu trúc như sau:
	- Dòng đầu tiên chứa số nguyên dương $N$ – số lượng minions.
	- Dòng thứ hai chứa $N$ số nguyên dương $s_1,s_2,…,s_N$ phân tách nhau bởi dấu cách – mức độ ảnh hưởng của các minions.

## Constraints

- $1≤T≤10^5$.
- $1≤N≤10^5$.
- $1≤s_i≤10^9;\forall i: 1≤i≤N$.
- Tổng các giá trị $N$ trong mọi test cases cộng lại không vượt quá $10^6$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le N \le 500;$ tổng các giá trị $N$ ở mọi test cases không vượt quá $10^4$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Ứng với mỗi testcase, đưa ra $N$ số nguyên trên một dòng, số thứ $i$ là tổng số phiếu mà minion thứ $i$ nhận được $(1≤i≤N)$.

## Sample Input 1

```
2 
4
4 3 2 1
5
1 2 2 3 1
```

## Sample Output 1

```
1 2 3 2
2 3 2 3 1
```

## Explanation 1

Minion đầu tiên chỉ nhận được phiếu bầu của minion thứ hai.

Minion thứ hai nhận được phiếu bầu của minion thứ nhất và thứ ba.

Minion thứ ba nhận được phiếu bầu của minion thứ nhất, thứ hai và thứ tư.

Minion thứ tư nhận được phiếu bầu của minion thứ hai và thứ ba.
