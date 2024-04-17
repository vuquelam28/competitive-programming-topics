# Dãy Phân Biệt

Bạn được cho một dãy $A$ gồm $N$ phần tử. Dãy phân biệt là dãy có các phần tử đôi một khác nhau. 

***Yêu cầu:*** Nhiệm vụ của bạn là kiểm tra xem dãy $A$ có phải là dãy phân biệt hay không?

## Input

- Dòng đầu tiên là số nguyên dương $N$.
- Dòng tiếp theo gồm dãy số $A_1, A_2, A_3, \dots, A_N$ là các phần tử trong dãy số $A$.

## Constraints

- $1 \le N \le 2 \cdot 10^5$.
- $1 \le A_i \le 10^9; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $1 \le N \le 10$ và $1 \le A_i \le 20$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một dòng duy nhất là `YES` nếu dãy là một dãy phân biệt và `NO` trong trường hợp ngược lại.

## Sample Input 1

```
3
1 2 3
```

## Sample Output 1

```
YES
```

## Sample Input 2

```
5
2 4 2 1 5
```

## Sample Output 2

```
NO
```

## Explaination 1

Trong dãy không có bất cứ phần tử nào lặp lại quá $1$ lần nên dãy là một dãy phân biệt.

## Explaination 2

Trong dãy có phần tử có giá trị $2$ xuất hiện $2$ lần nên dãy không phải là dãy phân biệt.
