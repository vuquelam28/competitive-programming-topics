# Bộ Ba Số Đặc Biệt

Cho dãy $A$ gồm $m$ số nguyên dương $a_1,a_2, ldots, a_m$ và dãy $B$ gồm $n$ số nguyên dương $b_1,b_2, \dots, b_n$. Từ dãy $A$ lấy ra hai số $a_k,a_j (k \neq j; 1 \le k,j \le m);$ từ dãy $B$ lấy ra một số $b_i$ để tạo thành bộ ba số thỏa mãn $a_k<b_i<a_j$ hoặc $a_j<b_i<a_k$. Bộ ba số như vậy gọi là bộ ba số đặc biệt. Đối với các số còn lại của hai dãy $A$ và $B,$ tiếp tục thực hiện quá trình trên để chọn ra các bộ ba số đặc biệt khác.

***Yêu cầu:*** Xác định số lượng các bộ ba số đặc biệt nhiều nhất có thể chọn được từ hai dãy $A$ và $B?$

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m$ và $n$.
- Dòng thứ hai chứa $m$ số nguyên dương $a_1, a_2, \dots, a_m$ phân tách nhau bởi dấu cách.
- Dòng thứ ba chứa $n$ số nguyên dương $b_1, b_2, \dots, b_n$ phân tách nhau bởi dấu cách.

## Constraints

- $2 \le m, n \le 10^5$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le m$.
- $1 \le b_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($70\%$ số điểm): $2 \le m, n \le 2000$.
- Subtask $2$ ($30\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Chứa một số nguyên duy nhất là số lượng nhiều nhất các bộ ba số đặc biệt có thể chọn được từ hai dãy $A$ và $B$.

## Sample Input 1

```
5 3
5 3 1 2 2
2 4 3
```

## Sample Output 1

```
2
```

## Explanation 1

Chọn được nhiều nhất hai bộ ba số đặc biệt:
- Bộ ba thứ nhất: $a_1=5,a_4=2,b_2=4$.
- Bộ ba thứ hai: $a_2=1,a_3=3,b_1=2$.

