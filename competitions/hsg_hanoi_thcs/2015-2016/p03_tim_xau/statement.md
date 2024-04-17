# Tìm Xâu

Cho trước xâu kí tự $s$ độ dài $n$ chỉ chứa các chữ cái tiếng Anh. Bắt đầu từ xâu $s,$ thực hiện phép hoán vị vòng quanh các kí tự sẽ nhận được một dãy gồm $m$ xâu khác nhau $(m≤n)$. Sau khi sắp xếp $m$ xâu trong dãy nhận được theo thứ tự từ điển, xâu kí tự $s$ ban đầu có vị trí thứ $k$.

Ví dụ: Với $s=$ `BCA`, sau khi hoán vị vòng quanh các kí tự, nhận được ba xâu khác nhau là: `BCA`, `CAB`, `ABC`. Sắp xếp theo thứ tự từ điển ta có dãy các xâu lần lượt là: `ABC`, `BCA`, `CAB`; xâu $s$ ban đầu đứng ở vị trí thứ hai.

***Yêu cầu:*** Cho biết xâu $x$ là một trong $m$ xâu nhận được từ $s$ bằng cách hoán vị vòng quanh các kí tự và vị trí $k$ của xâu $s$ sau khi sắp xếp dãy $m$ xâu thu được theo thứ tự từ điển. Xác định xâu $s$ ban đầu?

## Input

- Dòng đầu chứa số nguyên dương $k$.
- Dòng thứ hai chứa xâu $s$ có độ dài $n$.

## Constraints

- $1 \le k \le n \le 1000$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $n≤100$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Đưa ra xâu $s$ tìm được. Nếu không xác định được xâu $s$ thì đưa ra $-1$.

## Sample Input 1

```
2
ABC
```

## Sample Output 1

```
BCA
```

## Explanation 1

Từ xâu `BCA`, hoán vị vòng quanh và sắp xếp lại dãy xâu thu được, ta sẽ thấy xuất hiện xâu `ABC`, và xâu $s$ ban đầu nằm ở vị trí thứ hai. 