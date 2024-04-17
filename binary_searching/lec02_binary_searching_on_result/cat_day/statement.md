# Cắt Dây

Cho $N$ đoạn dây điện, đoạn thứ $i$ có độ dài $l_i \ (1≤i≤N)$. Cần phải cắt $N$ đoạn dây này thành các đoạn sao cho có được $K$ đoạn bằng nhau với độ dài là một số nguyên. Có thể không cắt hết các đoạn đã cho, hoặc mỗi đoạn dây có thể có phần thừa ra sau khi bị cắt.

***Yêu cầu:*** Xác định độ dài lớn nhất của $K$ đoạn dây bằng nhau sau khi cắt?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N$ và $K$.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa số nguyên dương $l_i$.
- Các số trên cùng một dòng phân tách nhau bởi dấu cách.

## Constraints

- $1≤N,K≤30000$.
- $1≤l_i≤10^6;1≤i≤N$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le N, K \le 1000$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là độ dài lớn nhất có thể của $K$ đoạn dây thu được. Nếu không có cách cắt nào, đưa ra số $0$.

## Sample Input

```
4 11
802
743
547
539 
```

## Sample Output

```
200
```