# Xâu Con Chung Lớn Nhất

Cho hai xâu $X$ và $Y$ có độ dài không vượt quá 500, mỗi xâu bao gồm các chữ cái và chữ số. Một xâu con chung của hai xâu là một xâu mà có thể thu được bằng cách xóa đi một số kí tự từ $X$ và giữ nguyên thứ tự các kí tự còn lại, và cũng có thể thu được từ $Y$ bằng cách tương tự.

***Yêu cầu:*** Hãy tìm xâu Z là xâu con chung liên tiếp của hai xâu $X$ và $Y$ sao cho $Z$ gồm toàn chữ số, và tạo thành số có giá trị lớn nhất?

## Input

- Dòng đầu tiên chứa xâu $X$.
- Dòng thứ hai chứa xâu $Y$.

## Constraints

- $|X|, |Y| \le 500;$ với $|X|, |Y|$ lần lượt là độ dài của hai xâu $X$ và $Y$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le |X|, |Y| \le 10$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra xâu $Z$ tìm được. Nếu không tồn tại xâu như vậy thì in ra $-1$.

## Sample Input 1

```
abc123gh57
23abd5acn12
```

## Sample Output 1

```
23
```

## Explanation 1

Các xâu con gồm toàn chữ số của xâu $X$: `1`, `2`, `3`, `12`, `23`, `123`, `5`, `7`, `57`.
Các xâu con gồm toàn chữ số của xâu $Y$: `2`, `3`, `23`, `5`, `1`, `2`, `12`.
$\Rightarrow$ Xâu kết quả là $Z =$ `23`.


