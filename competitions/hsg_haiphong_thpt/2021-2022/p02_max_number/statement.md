# Số Lớn Nhất

Bé Bo được bố mua cho $n$ tấm bìa đánh số từ $1$ đến $n,$ trên tấm bìa $i \ (1 \le i \le n)$ có ghi một số nguyên dương $a_i \ (1 \le a_i \le 99)$. Bo đặt ngẫu nhiên $n$ tấm bìa thành một hàng ngang trên bàn và ghi lại các số trên các tấm bìa theo thứ tự từ trái qua phải.

Ví dụ: Bé Bo có $3$ tấm bìa ghi các số $3, 7, 5$. Khi xếp ngẫu nhiên thành một hàng ngang và ghi các số theo thứ tự thì có thể thu được $6$ số nguyên dương là $357, 375, 537, 573, 735, 753$. Số lớn nhất có thể tạo thành là $753$.

***Yêu cầu:*** Tìm ra số lớn nhất mà bé Bo có thể xếp được từ các tấm bìa?

## Input

- Dòng thứ nhất chứa một số nguyên dương $n$.
- Dòng tiếp theo chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$.

## Constraints

- $1 \le n \le 10000$.

## Subtasks

- Subtask $1$ ($15\%$ số điểm): $n=2$ và $a_i$ có số lượng chữ số bằng nhau.
- Subtask $2$ ($45\%$ số điểm): $n \le 1000$ và $a_i$ có số lượng chữ số bằng nhau.
- Subtask $3$ ($25\%$ số điểm): $n \le 1000$.
- Subtask $4$ ($15\%$ số điểm): $n \le 10000$.

## Output

- Một số nguyên duy nhất là số lớn nhất tìm được.

## Sample Input 1

```
3
20 21 22
```

## Sample Output 1

```
222120
```

## Sample Input 2

```
3
2 21 22
```
## Sample Output 2

```
22221
```