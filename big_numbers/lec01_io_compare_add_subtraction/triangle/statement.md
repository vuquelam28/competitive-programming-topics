# Triangle

Cho ba số nguyên dương $a,b,c$.

***Yêu cầu:*** Hãy kiểm tra xem ba số trên có tạo ra được một bộ ba cạnh của một tam giác hay không?

## Input

- Dòng đầu tiên chứa một số nguyên dương $t$ miêu tả số lượng test cases.
- Trên $t$ dòng tiếp theo, mỗi dòng gồm một $3$ số nguyên dương $a_i,b_i,c_i$ miêu tả $3$ cạnh của tam giác.

## Constraints

- $1 \le t \le 20$.
- $1 \le a_i, b_i, c_i \le 10^{1000}; \forall i: 1 \le i \le t$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le a_i, b_i, c_i \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $t$ dòng, dòng thứ $i$ là kết quả của test case thứ $i,$ nếu $3$ số $a_i,b_i,c_i$ tạo ra một tam giác thì in ra $1,$ ngược lại in ra $0$.

## Sample Input 1

```
5
1 4 3
2 2 2
3 6 7
4 5 9
2 5 4
```

## Sample Output 1

```
0
1
1
0
1
``` 
