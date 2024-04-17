# Xâu Chấp Nhận Được

Cho hai xâu kí tự $S_1$ và $S_2$ chỉ gồm toàn các kí tự chữ cái latin in thường. Thực hiện xóa từ xâu $S_1$ một số kí tự và giữ nguyên vị trí tương đối của các kí tự còn lại, ta thu được xâu $S$. Nếu như xâu $S$ cũng có thể nhận được bằng cách xóa từ xâu $S_2$ một số kí tự và giữ nguyên vị trí tương đối của các kí tự còn lại, thì xâu $S$ gọi là xâu chấp nhận được.

***Yêu cầu:*** Tìm xâu $S$ chấp nhận được có thứ tự từ điển lớn nhất từ hai xâu $S_1$ và $S_2?$

## Input

- Dòng thứ nhất chứa xâu $S_1$ khác rỗng.
- Dòng thứ hai chứa xâu $S_2$ khác rỗng.

## Constraints

- $1 \le |S_1|, |S_2| \le 250;$ với $|S_1|, |S_2|$ lần lượt là độ dài hai xâu $S_1$ và $S_2$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le |S_1|, |S_2| \le 10$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra xâu $S$ tìm được. Nếu không tồn tại xâu $S$ thỏa mãn thì in ra $-1$.

## Sample Input 1

```
aecaeca
abcda
```

## Sample Output 1

```
ca
```

## Explanation 1

Các xâu chấp nhận được của hai xâu đã cho theo thứ tự từ điển là: `a`, `aa`, `ac`, `aca`, `c`, `ca`. Vậy xâu cần tìm là $S =$ `ca`.