# Trò Chơi Trên Dãy Số

Hai bạn $A$ và $B$ chơi trò chơi trên dãy số như sau: Đầu tiên $A$ sẽ tạo ra hai dãy số nguyên $x_1,x_2,…,x_M$ và $y_1,y_2,…y_N$. Sau đó, $B$ sẽ chọn $1$ số nguyên $S$ rồi yêu cầu $A$ tìm một số thuộc dãy thứ nhất và một số thuộc dãy thứ hai sao cho tổng hai số được chọn chênh lệch với $S$ là nhỏ nhất.

***Yêu cầu:*** Cho $s_1,s_2,…,s_K$ là $K$ câu hỏi của $B$. Với mỗi câu hỏi $s_i (i=1,2,…,K)$, hãy đưa ra giá trị chênh lệch nhỏ nhất của $s_i$ với tổng hai số được chọn.

## Input

- Dòng đầu tiên chứa ba số nguyên dương $M,N,K$.
- Dòng thứ hai chứa $M$ số nguyên $x_1,x_2,…,x_M$.
- Dòng thứ ba chứa $N$ số nguyên $y_1,y_2,…y_N$.
- Dòng thứ tư chứa $K$ số nguyên $s_1,s_2,…,s_K$.

## Constraints

- $1≤M,N≤10^5$.
- $1≤K≤500$.
- $|x_i,y_i,s_i |≤10^9$.

## Output

- Đưa ra trên $K$ dòng, dòng thứ $i$ là độ chênh lệch nhỏ nhất của $s_i$ với tổng của hai số được chọn.

## Sample Input

```
2
3
5
```

## Sample Output

```
44
74
```
