# Xâu Con Lớn Nhất

Cho trước xâu kí tự $S$. Một xâu con của $S$ là một cách chọn ra một hoặc nhiều kí tự (có thể không liên tiếp) trong xâu $S$ và giữ nguyên thứ tự của chúng. Lấy ví dụ, nếu $S =$ `abc` thì các xâu con của $S$ là: `a`, `b`, `c`, `ab`, `ac`, `bc`, `abc`.

***Yêu cầu:*** Với một số nguyên dương $k$ cho trước, hãy tìm ra một xâu con $T$ của $S$ sao cho mỗi kí tự trong $T$ đều xuất hiện ít nhất $k$ lần, và xâu $T$ có thứ tự từ điển lớn nhất có thể?

## Input

- Dòng đầu tiên chứa xâu kí tự $S$ chỉ bao gồm các chữ cái latin in thường.
- Dòng thứ hai chứa số nguyên dương $k$.

## Constraints

- $1 \le k \le |S| \le 10^5$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $|S| \le 20$.
- Subtask $2$ ($80\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra xâu $T$ tìm được. Nếu không tìm được thì in ra $-1$.

## Sample Input 1

```
banana
2
```

## Sample Output 1

```
nn
```

