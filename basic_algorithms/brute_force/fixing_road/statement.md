# Sửa Đường

Một khu đô thị đang xây dựng tuyến đường gồm $n$ đoạn đường, đoạn đường thứ $i$ hiện tại được phủ loại nhựa đường có số hiệu $t_i$.

Định nghĩa ***một phần đường*** là một dãy liên tục các đoạn đường được phủ chung một loại nhựa, còn phần đường bên trái và bên phải của nó (nếu tồn tại) được phủ loại nhựa khác. Độ gập ghềnh của cả tuyến đường là tổng số phần đường trên tuyến.

Trong quá trình xây dựng, nhà thầu đưa ra $q$ thông báo sửa đường, mỗi thông báo bao gồm hai số nguyên $u, v$ thể hiện cho việc thay đổi loại nhựa phủ trên đoạn đường thứ $u$ thành loại $v$.

***Yêu cầu:*** Sau mỗi thông báo sửa đường, hãy tính độ gập ghềnh của cả tuyến đường hiện tại? Lưu ý, tác động của các lần sửa đường trước sẽ được giữ nguyên tới lần sửa đường sau. 

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số đoạn đường của cả tuyến.
- Dòng thứ hai chứa $n$ số nguyên dương $t_1, t_2, \dots, t_n$ phân tách nhau bởi dấu cách - loại nhựa phủ trên các đoạn đường ban đầu.
- Dòng thứ ba chứa số nguyên dương $q$ - số thông báo sửa đường.
- $q$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên dương $u_i, v_i$ - thể hiện lần sửa đường thứ $i$ sẽ sửa đoạn đường thứ $u_i$ thành loại nhựa $v_i$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le q \le 10^3$.
- $1 \le t_i, u_i, v_i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 10^3; 1 \le q \le 50$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Trên $q$ dòng, dòng thứ $i$ ghi một số nguyên là độ gập ghềnh của tuyến đường sau lần cập nhật thứ $i$.

## Sample Input 1

```
13
1 1 1 1 2 2 2 2 2 3 3 4 4
2
7 4
11 1
```

## Sample Output 1

```
6
7
```

## Explanation 1

Ban đầu có $n=13$ đoạn đường với loại nhựa đường lần lượt là: $[1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 4, 4]$. Đầu tiên đoạn đường có độ gập ghềnh là $4$.

Có $2$ thông báo sửa đường:

- Lần sửa đầu tiên có thông báo $(7, 4),$  tức là ở đoạn đường thứ $7$ đổi thành loại nhựa $4$. Vậy các đoạn đường sau khi cập nhật sẽ là: $[1, 1, 1, 1, 2, 2, 4, ,2, 2, 3, 3, 4, 4]$. Sau lần cập nhật đầu tiên, đoạn đường có độ gập ghềnh là $6$.
- Lần sửa đường thứ hai có thông báo $(11, 1),$  tức là ở đoạn đường thứ $11$ đổi thành loại nhựa $1$. Vậy các đoạn đường sau khi cập nhật sẽ là: $[1, 1, 1, 1, 2, 2, 4, ,2, 2, 3, 1, 4, 4]$. Sau lần cập nhật đoạn đường có độ gập ghềnh là $7$.
