# So Sánh Số Ước

Cho số nguyên dương $N$. Gọi $\text{Odd}$ là số lượng ước lẻ của $N, \text{Even}$ là số lượng ước chẵn của $N$. Hỏi $\text{Odd}$ và $\text{Even}$ số nào lớn hơn.

***Yêu cầu:*** Cho $T$ test, mỗi test là một số nguyên dương $N$. In ra `Odd` nếu $\text{Odd} > \text{Even},$ `Even` nếu $\text{Even} > \text{Odd},$ nếu $\text{Odd} = \text{Even}$ in ra `Same`.

## Input

- Dòng đầu tiên chứa số nguyên dương $T$ là số bộ dữ liệu.
- Dòng thứ $i$ trong $T$ dòng tiếp theo, mỗi dòng chứa duy nhất một số nguyên dương $N$.

## Constraints

- $1\le T \le 2\times 10^5$.
- $1\le N \le 10^{18}$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $N \times T \le 10^8$.
- Subtask $2$ ($20\%$ số điểm): $T\le 100,N\le 10^{12}$.
- Subtask $3$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $T$ dòng, mỗi dòng là 1 trong 3 từ $Odd, Even, Same$

## Sample input 1

```
3
2
998244353
1000000000000000000
```

## Sample output 1

```
Same
Odd
Even
```