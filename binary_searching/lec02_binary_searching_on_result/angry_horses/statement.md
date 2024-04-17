# Những Con Ngựa Giận Dữ

Anh nông dân Minh Tuấn vừa xây dựng một khu chuồng ngựa rất dài gồm $n$ chuồng đặt trên một đường thẳng tắp. Các chuồng ngựa lần lượt có tọa độ đôi một phân biệt là $x_1, x_2, \dots, x_n$.

Tuấn quyết định lùa $m$ con ngựa của mình vào chuồng, tuy nhiên anh gặp chút rắc rối khi những con ngựa này trở nên khó bảo, nguyên do là chúng không muốn ở gần những con ngựa chuồng khác. Để ngăn chặn chúng đánh nhau, anh Tuấn không còn cách nào khác phải nhốt ngựa vào các chuồng cách xa nhau một chút.

***Yêu cầu:*** Giúp anh Tuấn nhốt $m$ con ngựa vào các chuồng sao cho khoảng cách nhỏ nhất giữa hai chuồng có ngựa liên tiếp là lớn nhất có thể?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $m$.
- Dòng thứ hai chứa $n$ số nguyên không âm $x_1, x_2, \dots, x_n$ phân tách nhau bởi dấu cách.

## Constraints

- $2 \le n \le 10^5$.
- $2 \le m \le n$.
- $0 \le x_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $1 \le n, m \le 10$.
- Subtask $2$ ($25\%$ số điểm): $1 \le n, m \le 100$.
- Subtask $3$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra khoảng cách nhỏ nhất giữa hai chuồng liên tiếp trong phương án tối ưu tìm được.

## Sample Input 1

```
5 3
1 2 8 4 9
```

## Sample Output 1

```
3
```

## Explanation 1

Anh Tuấn có thể nhốt $3$ con bò vào các chuồng ở tọa độ $1, 4$ và $8$. 



