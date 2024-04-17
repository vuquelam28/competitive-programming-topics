# Dãy Âm Dương

Ta biết rằng dãy $b$ là một dãy con của dãy $a$ nếu $b$ có thể được suy ra từ $a$ bằng cách loại bỏ $0$ hoặc nhiều phần tử mà không làm thay đổi thứ tự của các phần tử còn lại của $a$. Ví dụ, nếu $a=[1, 2, 1, 3, 1, 2, 1],$ thì một số dãy con $b$ có thể là: $[1, 1, 1, 1]; [3]$ và $[1, 2, 1, 3, 1, 2, 1];$ nhưng $[3, 2, 3]$ và $[1, 1, 1, 1, 2]$ thì không.

Bạn được cho một dãy $a$ gồm $n$ phần tử nguyên âm và nguyên dương (không có số $0$ nào trong dãy).

***Yêu cầu:*** Bạn hãy tìm ra dãy con gồm các phần tử âm và dương xen kẽ nhau có độ dài lớn nhất (nghĩa là dấu của phần tử tiếp theo ngược lại với dấu của phần tử hiện tại, như dương-âm-dương, v.v. hoặc âm-dương-âm, v.v.)? Nếu có nhiều các dãy con có cùng độ dài lớn nhất, bạn phải chọn một dãy có tổng các phần tử là lớn nhất.

## Input

- Dòng đầu tiên chứa số nguyên $t$ chỉ số lượng truy vấn.
- Các truy vấn có dạng như sau:
    - Dòng đầu tiên là số nguyên $n$ chỉ số lượng phần tử của $a$.
    - Dòng thứ hai gồm $n$ số nguyên $a_1, a_2, ..., a_n$.
- Dữ liệu luôn đảm bảo rằng tổng của tất cả các giá trị $n$ không vượt quá $2 \times 10^5$.

## Constraints

- $1 \le t \le 10^4$.
- $1 \le n \le 2 \times 10^5$.
- $-10^9 \le a_i \le 10^9, a_i \ne 0; \forall i: 1 \le i \le n$.

## Output

- Với mỗi truy vấn in ra trên một dòng tổng lớn nhất của dãy con có độ dài lớn nhất thoã mãn yêu cầu bài toán.

## Sample Input 1

```
4
5
1 2 3 -1 -2
4
-1 -2 -1 -3
10
-2 8 3 8 -4 -15 5 -2 -3 1
6
1 -1000000000 1 -1000000000 1 -1000000000
```

## Sample Output 1

```
2
-1
6
-2999999997
```

## Explanation 1

Trong truy vấn đầu tiên, ta có thể chọn dãy con như sau: $[1, 2, \underline{3}, \underline{-1}, -2]$.

Trong truy vấn thứ hai, ta có thể chọn dãy con như sau: $[-1, 
-2, \underline{-1}, -3]$.

Trong truy vấn thứ ba, ta có thể chọn dãy con như sau: $[\underline{-2}, 8, 3, \underline{8}, \underline{-4}, -15, \underline{5}, \underline{-2}, -3, \underline{-1}]$.

