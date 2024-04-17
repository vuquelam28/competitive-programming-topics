# Độ Hoàn Hảo Của Dãy Con

Cho dãy số A gồm $n$ phần tử nguyên dương $a_1, a_2, \dots, a_n$. Một dãy con liên tục của dãy $A$ là một hoặc nhiều phần tử liên tục lấy từ dãy $A$. Độ hoàn hảo của dãy con đó được tính bằng trung bình cộng của dãy. Rõ ràng ta thấy rằng, dãy có độ hoàn hảo lớn nhất chính bằng số lớn nhất trong dãy, như vậy thì bài toán trở thành quá đơn giản. Vì vậy ở đây ta chỉ xét các dãy con có tổng các phần tử không nhỏ hơn $k$.

***Yêu cầu:*** Cho trước $n,k$ và dãy $A$. Hãy xác định dãy con có độ hoàn hảo lớn nhất mà tổng các phần tử không nhỏ hơn $k?$

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $k$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1≤n≤10^5$.
- $1≤k≤10^9$.
- $1≤a_i≤10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $n≤100$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Chứa số nguyên duy nhất là độ hoàn hảo của dãy con có độ hoàn hảo lớn nhất.

## Sample Input 1

```
3 2
1 2 3
```

## Sample Output 1

```
3
```

## Sample Input 2

```
10 1
1 7 1 1 5 1 11 9 17 4
```

## Sample Output 2

```
17
```
