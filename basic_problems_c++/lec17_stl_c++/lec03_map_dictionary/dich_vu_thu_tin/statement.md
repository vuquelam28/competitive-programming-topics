# Dịch Vụ Thư Tín

Ucode đang lên kế hoạch mở một dịch vụ thư tín điện tử ở Việt Nam trong thời gian sắp đến. Ucode muốn dịch vụ được hoàn thành càng nhanh càng tốt, đây là lí do mà Ucode cần đến sự giúp sức của bạn. Bạn được giao nhiệm vụ thiết kế mô hình hệ thống đăng nhập theo nguyên lý sau.

Mỗi lần một người dùng mới muốn đăng kí, họ sẽ gửi đến hệ thống tên người dùng của họ. Nếu giá trị này chưa tồn tại ở trong cơ sở dữ liệu của hệ thống thì chương trình sẽ ghi nhận và tên người dùng này vào hệ thống và sau đó trả lời `OK`. Ngược lại, nếu tên người dùng đã tồn tại trong cơ sở dữ liệu bạn sẽ trả về một chuỗi gồm $2$ phần. Phần đầu tiên là tên người dùng vừa nhập. Phần thứ hai là số lần tên người dùng này đã được truy vấn trước đó. Sau khi trả về, hệ thống sẽ cập nhật số lần truy vấn giá trị tên người dùng này lên.

Ví dụ: nếu trước đó đã có truy vấn nhập giá trị tên người dùng là `ucode`. Như vạy trong cơ sở dữ liệu của bạn đã ghi nhận tên người dùng này đã truy vấn $1$ lần. Sau đó bạn truy vấn tên người dùng này thêm 1 lần nữa thì giá trị trả về của hệ thống là `ucode1` và số lần truy vấn tên người dùng này tăng lên $2$.

Bạn sẽ giải quyết bài toán với nhiều truy vấn khác nhau.

## Input

- Dòng đầu tiên là số nguyên dương $n$ là số truy vấn bạn cần giải quyết.
- $n$ dòng tiếp theo, mỗi dòng là một chuỗi các kí tự là tên người dùng bạn nhập vào theo thứ tự gồm các kí tự từ `a` đến `z`.

## Constraints

- $1 \le n \le 10^5$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 20$ và độ dài chuỗi không quá $10$ kí tự.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $n$ dòng, mỗi dòng tương ứng với giá trị trả về mà hệ thống của bạn đã thiết kế.

## Sample input 1

```
4
abacaba
acaba
abacaba
acab
```

## Sample output 1

```
OK
OK
abacaba1
OK
```

## Explaination 1

Ở truy vấn đầu tiên, tên người dùng này chưa tồn tại trong cơ sở dữ liệu của hệ thống nên hệ thống sẽ ghi nhận và trả về $\text{OK}$.
Ở truy vấn thứ hai, cũng tương tự như truy vấn đầu tiên nên hệ thống sẽ ghi nhận tên người dùng vừa nhập vào và trả về $\text{OK}$.
Ở truy vấn thứ ba, tên người dùng được nhập vào giống với truy vấn đầu tiên nên hệ thống sẽ trả về chuỗi $\text{abacaba1}$.
Ở truy vấn cuối cùng, tên người dùng này chưa tồn tại trong cơ sở dữ liệu của hệ thống nên hệ thống sẽ ghi nhận và trả về $\text{OK}$.

## Sample input 2

```
6
first
first
second
second
third
third
```

## Sample output 2

```
OK
first1
OK
second1
OK
third1
```

## Explaination 2

Ở truy vấn đầu tiên, lúc này cơ sở dữ liệu chưa tồn tại tên người dùng này nên giá trị trả về sẽ là $\text{OK}$ và tên người dùng này sẽ được lưu tại.
Ở truy vấn thứ hai, giá trị đầu vào là tên người dùng ở truy vấn trước nên giá trị trả về là $\text{first1}$ và cơ sở dữ liệu sẽ tiếp tục cập nhật số lần truy vấn tên người dùng này lên 1.
Các cặp truy vấn $3, 4$ và $5, 6$ cũng tương tự như truy vấn $1$ và $2$.