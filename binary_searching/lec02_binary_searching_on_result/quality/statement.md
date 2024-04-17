# Đoạn Con Chất Lượng

Cho một dãy số nguyên $A$ gồm $N$ phần tử $a_1,a_2,…,a_N$. Một đoạn con của dãy là một cách chọn ra một hoặc một số phần tử liên tiếp trong dãy. Định nghĩa chất lượng của một đoạn con là trung bình cộng của đoạn con đó. Như vậy, ta dễ dàng nhận thấy đoạn con có chất lượng lớn nhất chính là phần tử lớn nhất của dãy. Bờm là một học sinh thông minh, cậu đã nhanh chóng nhận ra tính chất này. Nhưng Bờm không muốn dừng lại ở đó. Cậu quyết định tăng độ khó cho bài toán bằng cách chỉ xem xét những đoạn con có độ dài không nhỏ hơn $K$.

***Yêu cầu:*** Cho trước dãy $A$ và số nguyên dương $K$. Hãy xác định đoạn con có chất lượng lớn nhất mà độ dài không nhỏ hơn $K?$

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N$ và $K$.
- Dòng thứ hai chứa $N$ số nguyên $a_1,a_2,…,a_N$.

## Constraints

- $1≤N≤10^5$.
- $1≤K≤N$.
- $|a_i |≤10^5;1≤i≤N$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1≤N≤1000;1≤a_i≤1000$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là chất lượng của đoạn con có chất lượng lớn nhất mà độ dài không nhỏ hơn $K,$ kết quả làm tròn tới $4$ chữ số sau dấu phẩy.

## Sample Input

```
4 2
5 2 5 1
```

## Sample Output

```
4.0000
```