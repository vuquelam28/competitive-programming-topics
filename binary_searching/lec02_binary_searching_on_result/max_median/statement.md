# Trung Vị Lớn Nhất

Với một dãy số $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n;$ ta định nghĩa ***phần tử trung vị*** của dãy số là phần tử ở vị trí $\left\lfloor{\frac{n + 1}{2}}\right\rfloor$ sau khi sắp xếp dãy số lại theo thứ tự ***không giảm.***

Bạn được cho trước một dãy số $B$ gồm $n$ phần tử $b_1, b_2, \dots, b_n$ và một số nguyên dương $k$. 

***Yêu cầu:*** Hãy xác định dãy con liên tiếp trong $B$ có độ dài tối thiểu bằng $k$ và có phần tử trung vị là lớn nhất?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $k$.
- Dòng thứ hai chứa $n$ số nguyên $b_1, b_2, \dots, b_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le k \le n \le 2 \times 10^5$.
- $1 \le b_i \le n; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra phần tử trung vị lớn nhất trong dãy con tìm được.

## Sample Input 1

```
5 3
1 2 3 2 1
```

## Sample Output 1

```
2
```

## Explanation 1

Trong ví dụ này, tất cả các dãy con có độ dài lớn hơn hoặc bằng $3$ đều có trung vị bằng $2,$ vì vậy kết quả là $2$.

## Sample Input 2

```
4 2
1 2 3 4
```

## Sample Output 2

```
3
```

## Explanation 2

Trong ví dụ này, dãy con tìm được là $[3, 4]$ với trung vị bằng $3$.

