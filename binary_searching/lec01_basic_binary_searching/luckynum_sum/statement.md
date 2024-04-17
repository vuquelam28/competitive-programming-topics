# Tổng May Mắn

Bạn Mai có sở thích tìm hiểu các bài toán về số học. Đặc biệt, Mai rất yêu thích các ***số may mắn***. Theo định nghĩa của Mai, số may mắn là số chỉ gồm các chữ số $4$ và 7. Ví dụ: $4, 44, 477,\dots$ là các số may mắn.

Tuy nhiên, hôm nay Mai phát triển được một bài toán khác khó hơn rất nhiều. Cụ thể, cô định nghĩa hàm $\text{next}(x)$ là hàm trả về số may mắn nhỏ nhất lớn hơn hoặc bằng x. Sau đó, Mai định nghĩa tổng may mắn $\text{LKSUM}$ của hai số $l,r \ (l≤r)$ như sau:
$\text{LKSUM}(l,r) = \text{next}(l) + \text{next}(l+1)+ \cdots + \text{next}(r)$.

***Yêu cầu:*** Cho trước hai số nguyên dương $l,r$. Hãy tìm tổng may mắn $\text{LKSUM}$ của hai số $l$ và $r?$

## Input

- Chứa hai số nguyên dương $l$ và $r$.

## Constraints

- $0 \le l \le r \le 10^9$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $0 \le l \le r \le 1000$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra tổng may mắn của $l$ và $r$.

## Sample Input 1

```
2 7
```

## Sample Output 1

```
33
```

## Sample Input 2

```
7 7
```

## Sample Output 2

```
7
```

