# Robot Đánh Chữ

An đang sử dụng chiếc điện thoại Nokia 1280 huyền thoại của anh ấy để nhắn tin cho bạn bè, bàn phím của nó nhìn giống như hình bên dưới:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/bSxGXuMH.png)
</center>

Cách đánh chữ bằng bàn phím này như sau: để gõ `u`, bạn cần phải bấm phím $8$ hai lần; để gõ `.` bạn cần bấm phím $1$ một lần; để gõ `5`, bạn cần bấm phím $5$ bốn lần...

An nhắn tin rất nhiều và nhắn liên tục (chắc là nhắn tin cho người yêu mới nhắn nhiều như thế) nên anh ta chế tạo ra một cánh tay robot để thực hiện công việc nhắn tin cho cậu ta. Robot này hoạt động khá chậm, nó phải mất $1s$ để bấm $1$ phím bất kì và mất $1s$ để di chuyển từ phím này đến phím khác. Ban đầu cánh tay robot luôn nằm ở vị trí phím `1`.

*Ví dụ:* Để gõ từ `hack`, nó sẽ mất $1s$ để duy chuyển từ phím $1$ đến phím $4, 2s$ để đánh chữ `h`, $1s$ để di chuyển từ phím $4$ sang phím $2, 1s$ để đánh chữ `a`, $3s$ để đánh chữ `c`, $1s$ để duy chuyển từ phím $2$ đến phím $5, 2s$ để đánh chữ `k`. Như vậy tổng thời gian để đánh từ `hack` của robot này là $1 + 2 + 1 + 1 + 3 + 1 + 2 = 11$ giây.

***Yêu cầu:*** Hãy giúp An tính thời gian đánh chữ của robot này đối với từng tin nhắn?

## Input

- Dòng đầu tiên chứa một số nguyên dương $T$ - số lượng tin nhắn An cần robot gõ.
- $T$ dòng tiếp theo, mỗi dòng chứa một chuỗi $S$ là tin nhắn cần được đánh máy. Thông điệp luôn đảm bảo chỉ có các kí tự xuất hiện trên bàn phím và không có kí tự đặc biệt nào khác. Lưu ý rằng trong tin nhắn được biểu diễn thì dấu `_` sẽ được dùng để thay thế cho khoảng trắng để tránh nhầm lẫn.

## Constraints

- $1 \le T \le 50$.
- $1 \le |S| \le 1000;$ với $|S|$ là độ dài xâu $S$.

## Output

- Với mỗi tin nhắn, in ra thời gian để robot cần để gõ xong tin nhắn trên một dòng.

## Sample Input 1

```
3
Hack
5!
i_?_u
```

## Sample Output 1

```
11
10
15
```

