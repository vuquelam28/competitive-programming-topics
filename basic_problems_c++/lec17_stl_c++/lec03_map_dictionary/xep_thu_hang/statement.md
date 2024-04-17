# Xếp thứ hạng

Vy vừa tổ chức một cuộc thi lập trình. Sau khi chấm bài Vy cần dựa trên điểm số của từng bài làm và đưa ra thứ hạng để trao giải. Vy có một dãy gồm $N$ phần tử là điểm của $N$ bài lam. Vì quá nhiều việc nên Vy nhờ bạn đưa ra thứ hạng cho thí sinh có kết quả bài làm thứ $i$.

## Input

- Dòng đầu tiên là số nguyên dương $N$ là số lượng bài thi.
- Dòng tiếp theo gồm $N$ số nguyên dương $A_i$ là điểm của thí sinh thứ $i$. 

## Constraints

- $1 \le N \le 10^3$.
- $1 \le A_i \le 1000$.

## Subtasks

- Subtask 1 ($25\%$) số điểm có $1 \le N \le 20$ và $1 \le A_i \le 50$.
- Subtask 2: không có ràng buộc gì thêm.

## Output

- Một dòng duy nhất gồm $N$ số là thứ hạng dựa trên điểm bài thi của thí sinh thứ $i$.

## Sample Input 1

```
6
30 50 10 10 55 0
```

## Sample Output 1

```
3 2 4 4 1 5
```

## Sample Input 2

```
3
50 50 50
```

## Sample Output 2

```
1 1 1
```

## Explaination 1

Sau khi sắp xếp giảm dần theo số điểm ta được: $55, 50, 10, 10, 10, 0$. Vì có $2$ thí sinh có cùng số điểm nên thứ hạng thấp nhất sẽ là $5$. Vậy thứ hạng của từng thí sinh sẽ là: $3, 2, 4, 4, 1, 5$.

## Explaination 2

Có $3$ thí sinh và đều đồng hạng nhất.