# Trò Chơi Với Các Con Số

Bee và Tép trong lúc rảnh rỗi không có gì chơi đã nghỉ ra một trò chơi với các con số khá thú vị. 

Mỗi người sẽ chọn một dãy số gồm $n$ số nguyên. Giả sử dãy số Bee chọn là $\{a_1, a_2, \dots, a_n\},$ còn dãy số mà Tép chọn là $\{b_1, b_2, \dots, b_n\}$.

Mỗi lượt chơi, mỗi người sẽ chọn ra một số hạng trong dãy của mình. Giả sử Bee chọn số $a_i,$ Tép chọn số $b_j$ thì điểm số của lượt chơi đó sẽ là $|a_i + b_j|$.

***Yêu cầu:*** Hãy giúp Bee và Tép tìm ra điểm số nhỏ nhất của một lượt chơi trong số các lượt chơi có thể?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ là chiều dài dãy số.
- Dòng thứ hai gồm $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.
- Dòng thứ ba gồm $n$ số nguyên $b_1, b_2, \dots, b_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^5$.
- $-10^5 \le a_i, b_i \le 10^5; \forall i: 1 \le i \le n$.
 
## Subtasks

- Subtask $1$ ($50\%$ số điểm): $0 < n \le 1000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất chứa giá trị nhỏ nhất tìm được.

## Sample Input 1

```
2
-3 -6
5 5
```

## Sample Output 1

```
1
```



