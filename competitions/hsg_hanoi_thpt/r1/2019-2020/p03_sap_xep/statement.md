# Sắp Xếp

Cho một dãy $A$ gồm $n$ phần tử phân biệt $a_1, a_2, \dots, a_n$. Chúng ta được thực hiện thao tác sau vô số lần: Di chuyển một phần tử ra khỏi dãy, sau đó chèn nó vào một vị trí bất kì trong dãy.

***Yêu cầu:*** Hãy tìm số lần thực hiện thao tác ít nhất để đưa dãy về dãy tăng dần?

## Input

- Dòng đầu tiên gồm số nguyên $n$ miêu tả số lượng phần tử.
- Dòng thứ hai gồm $n$ số nguyên dương $a_1, a_2, \dots, a_n$ miêu tả dãy $A$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 10$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất là kết quả bài toán.

## Sample Input 1

```
5
1 5 4 2 3 
```

## Sample Output 1

```
2
```

## Explanation 1

Chèn số $4$ vào sau số $3$ thu được dãy: $1 \5 \2 \3 \4$.
Chèn số $5$ vào sau số $4$ thu được dãy: $1 \2 \3 \4 \5$.
Tổng cộng hết hai thao tác.
