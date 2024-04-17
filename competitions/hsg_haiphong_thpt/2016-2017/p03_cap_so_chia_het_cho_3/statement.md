# Cặp Số Chia Hết Cho 3

Với hai số nguyên dương $u,v$, khi viết số $v$ sau số $u$ ta được một số mới. Ví dụ: $u = 99, v = 123$ thì khi viết số $v$ sau $u$ ta thu được số mới là số $99123$.

Cho trước $n$ số nguyên dương $a_1, a_2, a_3, ... a_n$ và $m$ số nguyên dương $b_1, b_2, b_3, ..., b_m$. 

***Yêu cầu***: Với mỗi giá trị $b_i \ (1 \le i \le m)$, bạn hãy cho biết có bao nhiêu số $a_j \ (1 \le j \le n)$ sao cho sau khi viết $a_j$ sau $b_i$ ta được một số mới chia hết cho $3?$

## Input

- Dòng đầu tiên gồm hai số nguyên dương $n,m$.
- Dòng tiếp theo chứa $n$ số nguyên dương miêu tả dãy $a$. 
- Dòng tiếp theo chứa $m$ số nguyên dương miêu tả dãy $b$. 

## Constraints

- $1 \le n,m \le 10^5$.
- $a_i \le 10^8; \forall i: 1 \le i \le n$.
- $b_i \le 10^8; \forall i: 1 \le i \le m$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $n,m \le 1000$.
- Subtask $2$ ($40\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $m$ dòng, dòng thứ $i$ ghi số lượng số $a_j \ (1 \le j \le n)$ sao cho sau khi viết $a_j$ sau $b_i$ ta được một số mới chia hết cho $3$.

## Sample Input 1

```
5 2
123 4 5 7 10
3 2
```

## Sample Output 1

```
1
3
```

## Explanation 1

Với $b_1 = 3,$ chỉ có duy nhất một số $a_1$ thỏa mãn.
Với $b_2 = 2,$ có ba số $a_2,a_4,a_5$ thỏa mãn.