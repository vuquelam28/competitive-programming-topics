# Tập Thể Lực

Chị Hải Lệ là một người rất chăm tập luyện thể thao. Ngoài giờ làm việc trên công ty, chị còn tập Gym ở một phòng tập gần nhà, vì thế nên chị luôn luôn có sức khỏe rất tốt. Chương trình tập luyện của chị mỗi ngày sẽ được chia làm $n$ bài tập, bài tập thứ $i$ có độ khó $h_i \ (1 \le i \le n)$ đảm bảo độ khó của bài tập sau luôn luôn lớn hơn độ khó của bài tập trước. Độ khó của cả chương trình tập sẽ được tính bằng chênh lệch độ khó lớn nhất giữa hai bài tập liên tiếp.

Hôm nay, như thường lệ, chị Hải Lệ xách đồ lên phòng tập. Nhưng khi nhìn vào chương trình tập đã lên sẵn, chị cảm thấy nó quá nặng. Chính vì vậy, chị quyết định sẽ thêm vào chương trình ***không quá*** $k$ bài tập sao cho chương trình tập mới vẫn đảm bảo độ khó của các bài tập là một dãy tăng ngặt, đồng thời độ khó của cả chương trình sẽ trở nên càng nhỏ càng tốt.

***Yêu cầu:*** Giúp chị Lệ tìm ra độ khó nhỏ nhất của chương trình mới sau khi thêm vào không quá $k$ bài tập?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $k$ - số bài tập ban đầu và số bài tập tối đa chị Lệ có thể thêm vào chương trình.
- Dòng thứ hai chứa $n$ số nguyên dương $h_1, h_2, \dots, h_n$ phân tách nhau bởi dấu cách - độ khó của các bài tập trong chương trình ban đầu.

## Constraints

- $2 \le n \le 10^5$.
- $1 \le k \le 10^5$.
- $1 \le h_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $1 \le n \le 300; k = 1$.
- Subtask $2$ ($80\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là độ khó nhỏ nhất của chương trình mới mà chị Hải Lệ tạo ra được.

## Sample Input 1

```
3 1
100 200 230
```

## Sample Output 1

```
50
```

## Explanation 1

Chị Hải Lệ chỉ có thể thêm vào một bài tập, chị sẽ thêm như sau: $100 \ \bold{150} \ 200 \ 230$. Độ khó bây giờ là $50$.

## Sample Input 2

```
5 6
9 10 20 26 30
```

## Sample Output 2

```
3
```

## Explanation 2

Chị Hải Lệ thêm bài tập vào như sau: $9 \ 10 \ \bold{12} \ \bold{14} \ \bold{16} \ \bold{18} \ 20 \ \bold{23} \ 26 \ \bold{29} \ 30$. Độ khó bây giờ là $3$.


