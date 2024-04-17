# Biến Đổi Dãy

Cho một dãy số $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Dãy số được gọi là ***dãy bậc k*** nếu như ước chung lớn nhất của cả dãy số là bội số của một số $k$ cho trước.

Bạn được cung cấp hai thao tác biến đổi: Một là chọn một phần tử bất kỳ và tăng nó lên một đơn vị, hai là chọn một phần tử bất kỳ và giảm nó đi một đơn vị (không được giảm về $0$).

***Yêu cầu:*** Hãy đếm số thao tác biến đổi ít nhất cần sử dụng để biến dãy đã cho thành ***dãy bậc k***?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $k$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le k \le 10^9$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Output

- In ra số nguyên duy nhất là kết quả bài toán.

## Sample Input 1

```
3 5
4 5 6
```

## Sample Output 1

```
2
```

## Explanation 1

Tăng $4$ thành $5,$ và giảm $6$ thành $5$.

