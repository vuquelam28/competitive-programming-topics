# Dãy Số Đẹp

Bạn được cho một dãy số nguyên gồm $n$ số. Mục tiêu của bạn là loại bỏ một số các phần tử trong dãy để tạo thành một "dãy số đẹp".

"Dãy số đẹp" là dãy số thỏa mãn phần tử $a_i$ xuất hiện đúng $a_i$ lần trong dãy số. Ví dụ về một số dãy số đẹp: $(3, 3, 3), \; (4, 2, 4, 1, 4, 2, 4), \; ()$ dãy rỗng cũng là một dãy đẹp.

***Yêu cầu:*** Hãy tìm số phần tử ít nhất cần bỏ đi để biến dãy ban đầu thành dãy số đẹp.

## Input

- Dòng đầu tiên là số nguyên dương $n$.
- Dòng tiếp theo gồm $n$ số nguyên dương $a_i$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 55$ và $1 \le a_i \le 10; \forall i: 1 \le i \le n$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là số lượng phần tử ít nhất cần loại bỏ.

## Sample input 1

```
4
3 3 3 3
```

## Sample output 1

```
1
```

## Explaination 1

Ta thấy trong dãy số $3$ xuất hiện $4$ lần, cần phải bỏ đi $1$ phần tử $3$ để có được $1$ dãy số đẹp.

## Sample input 2

```
5
2 4 1 4 2
```

## Sample output 2

```
2
```

## Explaination 2

Trong dãy có các phần tử $1$ xuất hiện $1$ lần, $2$ xuất hiện $2$ lần và $4$ xuất hiện $2$ lần. Vậy để tạo được dãy số đẹp thì ta sẽ bỏ đi $2$ phần tử $4$ trong dãy.