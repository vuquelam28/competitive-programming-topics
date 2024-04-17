# Thuê Xe Đạp

Đội ngũ content của **DKEDTECH** gồm có $n$ lập trình viên, tất cả đều rất hòa thuận, thân thiết với nhau như anh em một nhà. Idol Hải Lệ - quản lý của team là một người rất năng nổ, thường xuyên tổ chức những buổi đi picnic cho mọi người để gắn kết tình cảm. Lần picnic này, chị Lệ quyết định đổi mới hình thức bằng cách thuê xe đạp cho cả team đi với nhau. Cửa hàng xe đạp gồm có $m$ chiếc xe, chiếc thứ $i$ có giá thuê là $b_i \ (1 \le i \le m)$. Chị Lệ đã xin được công ty một khoản tiền chung là $C,$ tuy nhiên để tránh sơ suất, mỗi thành viên trong team đều tự mang theo một số tiền là $a_i \ (1 \le i \le n)$. Khoản tiền chung có thể được chia ra sử dụng tùy ý cho mỗi thành viên, nhưng khoản tiền riêng của mỗi người thì chỉ có người đó mới được sử dụng.

Chị Lệ sẽ thuê cho mỗi thành viên đúng một chiếc xe đạp để đi chơi. Vốn là người thương yêu đồng nghiệp, chị Lệ muốn mỗi mọi người được đi chơi mà phải bỏ ra ít tiền nhất có thể. Nếu như có ai đó không thể thuê được xe đạp thì chị sẽ phải tính toán phương án khác (chị không nói rõ đó là phương án gì).

***Yêu cầu:*** Hãy tính xem có tối đa bao nhiêu thành viên trong team có thể thuê được xe đạp, và tổng số tiền tối thiểu mà họ phải tự bỏ ra thêm là bao nhiêu? 

## Input

- Dòng đầu tiên chứa ba số nguyên dương $n, m, C$ - số thành viên trong team content, số xe đạp của cửa hàng và số tiền chị Lệ đã xin được trước.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2,..., a_n$ - số tiền mà mỗi thành viên tự mang theo.
- Dòng thứ ba chứa $m$ số nguyên dương $b_1, b_2,..., b_m$ - giá thuê của $m$ chiếc xe đạp.
- Các số trên cùng một dòng phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n, m \le 10^5$.
- $0 \le C \le 10^9$.
- $1 \le a_i \le 10^4; \forall i: 1 \le i \le n$.
- $1 \le b_i \le 10^9; \forall i: 1 \le i \le m$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n, m \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Hai số nguyên $x$ và $y$ lần lượt là số lượng thành viên tối đa có thể thuê được xe, và tổng số tiền nhỏ nhất mà họ phải tự bỏ ra; phân tách nhau bởi một dấu cách. Trong trường hợp không có lập trình viên nào thuê được xe, thì $x = y = 0$.

## Sample Input 1

```
2 2 10
5 5
7 6
```

## Sample Output 1

```
2 3
```

## Explanation 1

Hai lập trình viên chỉ cần bỏ ra tổng số tiền $3,$ cộng với số tiền chung $10$ là có thể thuê được cả hai chiếc xe.

## Sample Input 2

```
1 1 2
1
2
```

## Sample Output 2

```
1 0
```

## Explanation 2

Quỹ chung đã đủ để thuê xe, nên không ai phải bỏ thêm tiền riêng cả.