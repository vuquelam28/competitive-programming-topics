# Nhật Ký Của Tom Riddle

Harry Potter đang thực hiện một nhiệm vụ tiêu diệt các Trường sinh linh giá của kẻ "Ai cũng biết là ai". Trường sinh linh giá đầu tiên mà cậu ấy phải dối mặt là nhật ký của Tom Riddle tại căn phòng bí mật. Quyển nhật kí từng thuộc về Ginny và nó đã ép cô bé phải mở căn phòng bí mật ra. Harry muốn biết những người đã từng sở hữu cuốn nhật kí để cậu chắc rằng họ không chịu sự kiểm soát của cuốn nhật kí.

Harry có một danh sách gồm $n$ cái tên đã từng tiếp xúc với cuốn nhật kí theo thứ tự. Bạn cần xác định với mỗi cái tên trong danh sách, người đó đã từng tiếp xúc với cuốn nhật ký trước đây hay không?

***Yêu cầu:*** Với mỗi cái tên $s_i$ ở dòng thứ $i$ trong danh sách. Bạn sẽ kiểm tra có tồn tại một vị trí $j$ nào đó sao cho $s_j = s_i$ và $j < i$ hay không?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ là số lượng cái tên trong danh sách.
- Trên $n$ dòng tiếp theo, mỗi dòng gồm một tên gồm các chữ cái in thường trong bảng chữ cái tiếng Anh.

## Constraints

- $1 \le n \le 100$.
- Mỗi tên dài không quá $100$ kí tự.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 10$ và các tên trong danh sách không dài quá $10$ kí tự.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $n$ dòng, mỗi dòng gồm một trong hai câu trả lời `YES` hoặc `NO`.

## Sample input 1

```
6
tom
lucius
ginny
harry
ginny
harry
```

## Sample output 1

```
NO
NO
NO
NO
YES
YES
```

## Explaination 1

Trong danh sách, $4$ cái tên đầu tiên đều lần đầu xuất hiện nên kết quả trả ra là `NO`. Cái tên thứ $5$ và $6$ đã xuất hiện trước đó nên in `YES`.

## Sample input 2

```
3
sam
sam
sam
```

## Sample output 2

```
NO
YES
YES
```
## Explaination 2

Cái tên thứ $2$ và $3$ trong danh sách đã xuất hiện trước đó nên kết quả trả `YES`.