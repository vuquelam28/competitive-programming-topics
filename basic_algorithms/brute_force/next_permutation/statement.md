# Hoán Vị Kế Tiếp

Cho một hoán vị $H$ có độ dài $n$ của các số nguyên từ $1$ tới $n$. Hoán vị $P$ được gọi là hoán vị kế tiếp của $H$ nếu như $P$ là hoán vị có thứ tự từ điển nhỏ nhất nhưng lớn hơn $H$. Chẳng hạn, với $H = \{3, 6, 1, 5, 2, 8, 4, 10, 7, 9\}$ thì $P = \{3, 6, 1, 5, 2, 8, 4, 10, 9, 7\}$.

***Yêu cầu:*** Hãy tìm hoán vị $P$ là hoán vị kế tiếp của $H?$

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - chiều dài hoán vị.
- Dòng thứ hai chứa một hoán vị của các số từ $1$ tới $n$.

## Constraints

- $1 \le n \le 10^4$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 200$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra dãy hoán vị kế tiếp tìm được trên một dòng, các số phân tách nhau bởi dấu cách. Nếu không tồn tại hoán vị kế tiếp thì in ra $-1$.

## Sample Input 1

```
10
3 6 1 5 2 8 4 10 7 9
```

## Sample Output 1

```
3 6 1 5 2 8 4 10 9 7
```

