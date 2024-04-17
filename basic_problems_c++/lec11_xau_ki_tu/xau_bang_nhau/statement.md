# Xâu Bằng Nhau

Bạn được cho hai xâu $s$ và $t$ chứa các kí tự latinh thường, vị trí các kí tự được đánh số từ $1$. Bạn có thể thực hiện vô số lần (hoặc không thực hiện) thao tác sau:

- Chọn bất kì hai kí tự đứng cạnh nhau và gán giá trị của kí tự thú nhất cho kí tự thứ hai hoặc ngược lại.

Ví dụ cho xâu $s$ $=$ `acbc` và bạn thực hiện một số thao tác để biến đổi xâu $s$:

- Gán $s_2 = s_1,$ lúc này $s$ $=$ `aabc`.
- Gán $s_3 = s_4,$ lúc này $s$ $=$ `aacc`.

***Yêu cầu:*** Bạn có thể thực hiện thao tác trên cho cả hai xâu $s$ và $t,$ hỏi có thể biến đổi sao cho $s = t$ không?

## Input

- Dữ liệu vào gồm nhiều test case, dòng đầu tiên chứa số $t$ là số lượng test case.
- Dòng thứ nhất của mỗi test case chứa xâu $s$ gồm những chữ cái latinh in thường.
- Dòng thứ hai của mỗi test case chứa xâu $t$ gồm những chữ cái latinh in thường.

## Constraints

- $1 \le t \le 100$.
- $1 \le |s|, |t| \le 100$.
- $|s| = |t|$.

## Output

- Với mỗi test case, in ra "`YES`" nếu như có thể biến đổi sao cho $s = t$, ngược lại in ra "`NO`"

## Sample Input 1

```
3
xabb
aabx
ucode
ucode
a
z
```

## Sample Output 1

```
YES
YES
NO
```