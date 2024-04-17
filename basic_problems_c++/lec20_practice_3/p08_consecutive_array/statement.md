# Consecutive Array

Cho một mảng gồm $n$ số tự nhiên đôi một phân biệt và đã sắp xếp tăng dần. Một mảng con của mảng đã cho là một hoặc một số phần tử liên tiếp trong mảng, tuy nhiên ở đây ta chỉ xét các mảng con có độ dài lớn hơn hoặc bằng $2$.

***Yêu cầu:*** Xác định mảng con có độ dài lớn hơn hoặc bằng $2$ mà có tổng lớn nhất và gồm toàn các số tự nhiên liên tiếp nhau tính từ đầu mảng con đó?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - kích thước mảng.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^5; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra tổng của mảng con có tổng lớn nhất và thỏa mãn điều kiện đề bài. Nếu không tồn tại mảng con nào như vậy thì in ra $0$.

## Sample Input 1

```
11
1 2 3 5 6 7 9 10 90 91 100
```

## Sample Output 1

```
181
```

## Explanation 1

Mảng con tìm được là $[90, 91]$.

