# Sắp Xếp Theo Tổng Chữ Số

Cho trước dãy số $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. 

***Yêu cầu:*** Hãy sắp xếp lại dãy số theo thứ tự tổng các chữ số tăng dần. Còn nếu hai số có tổng các chữ số bằng nhau thì số nào lớn hơn sẽ đứng trước.

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số lượng phần tử trong dãy số.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 1000$.
- $1 \le a_i \le 10^{18}; \forall i: 1 \le i \le n$.

## Output

- In ra dãy số sau khi sắp xếp theo yêu cầu đề bài trên một dòng, các số phân tách nhau bởi dấu cách.

## Sample Input 1

```
5
12 1000 200 30 2
```

## Sample Output 1

```
1000 200 2 30 12
```

