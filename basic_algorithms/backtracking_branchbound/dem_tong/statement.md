# Đếm Tổng

Cho dãy số nguyên đương gồm $n$ phần tử $a_1, a_2, \dots, a_n$.

***Yêu cầu:*** Bạn có thể chọn một tập con không rỗng các phần tử bất kì trong dãy $a$ và tính tổng của chúng. Hãy cho biết có bao nhiêu giá trị tổng khác nhau?

## Input

- Dòng đầu tiên chứa số nguyên $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 20$.
- $1 \le a_i \le 10000$.

## Output

- Dòng đầu tiên chứa số $k$ — số lượng giá trị tổng khác nhau.
- Dòng thứ hai chứa $k$ giá trị khác nhau của tổng theo thứ tự từ bé đến lớn.

## Sample Input 1

```
3
1 3 5
```

## Sample Output 1

```
7
1 3 4 5 6 8 9
```

## Explanation 1

Các giá trị tổng khác nhau:

$1 = 1; 3 = 3; 5 = 5; 1 + 3 = 4; 1 + 5 = 6; 3 + 5 = 8; 1 + 3 + 5 = 9$.