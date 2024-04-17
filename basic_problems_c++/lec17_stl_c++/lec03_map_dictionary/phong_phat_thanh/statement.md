# Phòng Phát Thanh

Nhóm người phá hoại cơ sở vật chất của phòng phát thanh, hiệu trưởng giao cho họ một nhiệm vụ xem như là mọt hình phạt. Nhiệm vụ của Dustin là thêm ghi chú vào cấu hình nginx của trang web trường. Trường có $n$ máy chủ, mỗi máy chủ có một cái tên và một địa chỉ ip (tên của máy chủ không nhất thiết phải khác nhau nhưng địa chỉ ip thì phải phân biệt). Dustin biết địa chỉ ip và tên của mỗi máy chủ. Để đơn giản ta sẽ quy định câu lệnh của nginx có dạng `command ip;` trong đó `command` là một chuỗi gồm các kí tự thường trong bảng chữ cái tiếng Anh và `ip` là địa chỉ ip của máy chủ ở trường.

Mỗi địa chỉ ip có dạng `a.b.c.d` trong đó $a,b,c$ và $d$ là những số nguyên dương bé hơn hoặc bằng $255$ và không bắt đầu bằng chữ số $0$. Dustin sẽ thêm ghi chú vào file cấu hình nginx có $m$ câu lệnh. Không ai nhớ những địa chỉ ip của các máy chủ, vậy để hiểu những cấu hình rõ hơn thì Dustin phải thêm ghi chú địa chỉ ip thuộc về máy chủ đó vào phía sau mỗi dòng lệnh. Một cách tường minh hơn, nếu câu lệnh có dạng `command ip;` Dustin sẽ phải thay câu lệnh đó bằng một câu lệnh có dạng `command ip; \#name` trong đó `name` là tên của máy chủ có cùng địa chỉ ip với `ip`.

Dustin không biết gì về nginx vì vậy cậu ấy đang hoảng sợ và những người bạn của cậu ấy nhờ bạn làm việc này thay cho cậu ấy.

***Yêu cầu:*** Đầu vào của bạn gồm $2$ phần, $n$ dòng đầu tiên mỗi dòng có dạng `server ip` tương ứng cho tên máy chủ và địa chỉ ip của máy chủ đó. Phần thứ $2$ gồm $m$ dòng tiếp theo, mỗi dòng là câu lệnh có dạng `command ip;` đã nêu. Hãy thêm ghi chú đằng sau $m$ câu lệnh này?

## Input

- Dòng đầu tiên gồm hai số nguyên dương $n$ và $m$.
- Trên $n$ dòng tiếp theo mỗi dòng gồm tên và địa chỉ ip của máy chủ được ngăn cách nhau bởi dấu cách. Đề bài đảm bảo rằng địa chỉ ip luôn khác nhau.
- Trên $m$ dòng tiếp theo mỗi dòng là một câu lệnh trong file cấu hình. Mỗi câu lệnh có dạng `command ip;`. Đảm bảo rằng `command` chỉ gồm những kí tự in thường trong bảng chữ cái tiếng Anh và mỗi địa chỉ ip đều riêng biệt.

## Constraints

- $1 \le n, m \le 1000$.
- Độ dài `command` không quá $10$ kí tự.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 10$ và $1 \le m \le 20$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $m$ dòng, mỗi dòng là một câu lệnh trong file cấu hình sau khi Dustin chỉnh sửa.

## Sample input 1

```
2 2
main 192.168.0.2
replica 192.168.0.1
block 192.168.0.1;
proxy 192.168.0.2;
```

## Sample output 1

```
block 192.168.0.1; #replica
proxy 192.168.0.2; #main
```

## Explaination 1

Máy chủ `main` có địa chỉ ip là $192.168.0.2$ và máy chủ `replica` có địa chỉ ip là $192.168.0.1$ nên $2$ câu lệnh được sửa lại thành `block 192.168.0.1; #replica` và `proxy 192.168.0.2; #main`.
