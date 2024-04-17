# Trò Chơi Thả Thính

Có một trò chơi điện tử khá phổ biến ngày nay được gọi là "trò chơi thả thính".

Trò chơi có $n$ biểu tượng cảm xúc và bạn sẽ thả $m$ biểu tượng cho đối phương, nếu bạn thả biểu tượng cảm xúc $i$ cho đối phương thì độ hạnh phúc của họ sẽ tăng lên $a_i$. Nhưng có một quy luật sau: bạn không được sử dụng một loại biểu tượng cảm xúc quá $k$ lần liên tiếp nhau (đối phương sẽ nghi ngờ bạn đang chơi đùa với tình cảm của họ). 

*Lưu ý:* Nếu $i \ne j$ và $a_i = a_j$ thì hai biểu tượng cảm xúc sẽ được xem là khác nhau.

***Yêu cầu:*** Cho $n$ biểu tượng cảm xúc, hãy thả chúng $m$ lần sao cho độ hãy phúc của đối phương là lớn nhất?
 
## Input

- Dòng thứ nhất chứa ba số nguyên $n, m$ và $k$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ — với $a_i$ là độ hạnh phúc của biểu tượng cảm xúc thứ $i$.

## Constraints

- $2 \le n \le 2 \times 10^5$.
- $1 \le k \le m \le 2 \times 10^9$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $n, m, k \le 100$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất — độ hạnh phúc tối đa của đối phương nếu như bạn thả biểu tượng cảm xúc thỏa mãn điều kiện cho trường.

## Sample Input 1

```
6 9 2
1 3 3 7 4 2
```

## Sample Output 1

```
54
```

## Explanation 1

Bạn sẽ thả cảm xúc theo thứ tự: $4, 4, 5, 4, 4, 5, 4, 4, 5$.


## Sample Input 2

```
3 1000000000 1
1000000000 987654321 1000000000
```

## Sample Output 2

```
1000000000000000000
```

