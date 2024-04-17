# Lại Một Bài Sắp Xếp

Cô giáo cho Nam một danh sách gồm $n$ số, số thứ $i$ có giá trị $a_i$ và bảo Nam sắp xếp lại danh sách theo thứ tự không giảm. Cụ thể với mỗi $i > 1$ thì $a_{i - 1} \le a_i$. Cô giáo yêu cầu Nam sắp xếp lại danh sách bằng cách thực hiện nhiều lần thao tác hoán đổi vị trí hai phần tử kề nhau.

Nhưng Nam đã làm quá nhiều bài toán sắp xếp nên cảm thấy việc giải bài toán này rất chán. Nếu Nam phải thực hiện nhiều hơn $\frac{n \cdot (n - 1)}{2} - 1$ lần hoán đổi, Nam sẽ không làm bài tập này mà dành thời gian cho những việc quan trọng hơn. 

***Yêu cầu:*** Bạn hãy giúp Nam tính xem liệu danh sách có được sắp xếp với không quá $\frac{n \cdot (n - 1)}{2} - 1$ lần hoán đổi vị trí của hai phần tử kề nhau?

## Input

- Dòng đầu tiên chứa số nguyên $n$ - số lượng phần tử của danh sách.
- Trong $n$ dòng tiếp theo, dòng thứ $i$ chứa số nguyên $a_i \ (1 \le i \le n)$.

## Constraints

- $2 \le n \le 5 \times 10^4$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $2 \le n \le 1000$.
- Subtask $2$ ($50\%$ số điểm): $1000 < n \le 5 \cdot 10^4$.

## Output

- In ra `YES` nếu Nam có thể sắp xếp danh sách với ít hơn $\frac{n \cdot (n - 1)}{2} - 1$ thao tác, ngược lại in ra `NO`.

## Sample input 1

```
5
5 
3 
2 
1 
4
```

## Sample output 1

```
YES
```

