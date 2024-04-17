# Tấn Công Dữ Liệu

Gaby rất thích làm việc với những cơ sở dữ liệu quan trong ở trong trường đại học của cô ấy. Đến kì đăng kí môn học, mỗi sinh viên có thể đăng kí bao nhiêu môn học tùy thích nhưng dĩ nhiên mỗi môn học chỉ được đăng kí $1$ lần. Song có một nhóm hacker đã tấn công vào cơ sở dữ liệu của trường và làm nhiễu kết quả đăng kí môn học của các học sinh. Là một nhân viên xuất sắc, Gaby có thể xem nhưng tập tin sao lưu lưu lại những môn học đã đăng kí của mỗi học sinh. Trong những tập tin này sẽ có những tập tin bị tấn công và thay đổi. Dấu hiệu để nhận biết là một học sinh có thể đăng kí cùng một môn học nhiều lần. Vì số lượng tập tin quá lớn, Gaby muốn nhờ bạn giúp cô ấy một tay.

***Yêu cầu:*** bạn được cho $T$ tập tin. Nhiệm vụ của bạn là đưa ra tập tin nào có thể đã bị tấn công và thay đổi hoặc không?

## Input

- Dòng đầu tiên là số nguyên dương $T$ cho biết số lượng tập tin bạn cần xử lí.
- Mỗi tập tin bắt đầu với $2$ số nguyên dương $n$ và $m$ tương ứng là số học sinh và số lần đang kí môn học của các $n$ học sinh.
- Trên $m$ dòng tiếp theo, mỗi dòng gồm $2$ số nguyên dương $I$ và $C$ tương ứng là mã thứ của học sinh và mã môn học. Dĩ nhiên mỗi môn học và mỗi học sinh chỉ có duy nhất $1$ mã.

## Constraints

- $1 \le n \le 10000$.
- $1 \le m \le 100000$.
- $1 \le I \le n$.
- $1000 \le C \le 9999$.

## Subtasks

- Subtask 1 ($50\%$ số điểm): $1 \le T \le 10, \ 1 \le n \le 10$ và $1 \le m \le 20$.
- Subtask 2 ($50\%$ số điểm): Không có điều kiện gì thêm.

## Output

- Gồm $T$ dòng, mỗi dòng cho biết nếu tập tin đó có thể bị tấn công hay không. Nếu có thì tập tin đó sẽ không được lưu vào cơ sở dữ liệu mới và in `impossible` còn ngược lại tập tin sẽ được lưu vào cơ sở dữ liệu và in `possible`.

## Sample input 1

```
1
2 4
1 6102
1 6103
2 6102
2 6103
```

## Sample output 1

```
possible
```

## Explanation 1

Bạn cần xử lí $1$ tập tin và trong tập tin này có $2$ học sinh, mỗi học sinh đăng kí mỗi môn học $1$ lần nên tập tin này không thể bị thay đổi nên được lưu vào cơ sở dữ liệu và in `possible`.

## Sample input 2

```
1
2 4
1 6102
1 6103
2 6102
2 6103
2 4
1 6102
1 6102
2 6102
2 6103
```

## Sample output 2

```
possible
impossible
```

## Explanation 2

Bạn cần xử lí $2$ tập tin. Tập tin đầu tiên giống như ví dụ $1$. Đến tập tin thứ $2$ thì ghi nhận những học sinh đăng kí $1$ môn học nhiều lần. Điều này cho thấy tập tin đã có thể bị tấn công và không được lưu vào cơ sở dữ liệu. Kết quả in ra `impossible`.