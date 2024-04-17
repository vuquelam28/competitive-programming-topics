# Vắt Sữa

Nông dân Trí có $N$ con bò cần được vắt sữa. Mỗi con chỉ được $1$ đơn vị thời gian để vắt sữa.

Vốn dĩ là những động vật lười nên những con bò sẽ từ chối việc vắt sữa nếu như chúng đợi quá lâu. Cụ thể, con bò $i$ có thể cho lượng sữa là $g_i$ gallon nhưng chỉ khi nó được vắt sữa trước thời điểm $d_i$. 

Thời điểm bắt đầu vắt sữa là $t=0$ nên chỉ có tối đa $x$ con bò được vắt sữa nếu chốt thời điểm kết thúc là $t = x$.

***Yêu cầu:*** Hãy giúp TP tính lượng sữa tối đa mà anh ta có thể đạt được nếu như lên được lịch vắt sữa một cách hợp lý?

## Input

- Dòng đầu ghi số nguyên dương $N$.
- Trên $N$ dòng tiếp theo, dòng thứ $i$ ghi hai số nguyên $g_i$ và $d_i$.

## Constraints

- $1≤g_i≤1000$.
- $1≤d_i ≤10^4$.

## Subtasks

- Subtask $1$ ($35\%$ số điểm): $1≤N≤300$.
- Subtask $2$ ($65\%$ số điểm): $1≤N≤10^4$.

## Output

- Một số nguyên duy nhất là số lượng sữa tối đa mà TP có thể thu được.

## Sample input 1

```
4
10 3
7 5
8 1
2 1
```

## Sample output 1

```
25  
```


