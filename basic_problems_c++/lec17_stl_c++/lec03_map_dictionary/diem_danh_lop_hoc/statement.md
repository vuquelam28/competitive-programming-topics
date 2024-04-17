# Điểm danh lớp học

Nhật đang dạy một khóa nấu ăn. Có $N$ học sinh trong khóa này được đánh số từ $1$ đến $N$.

Trước mỗi buổi học cô sẽ điểm danh, tức là đọc to tên của học sinh từng người một và đánh dấu những học sinh có mặt. Mỗi học sinh gồm tên và họ. Để tiết kiệm thời gian cô chỉ gọi tên của những học sinh. Tuy nhiên khi có nhiều học sinh cùng tên thì Nhật sẽ gọi cả họ và tên của tất cả những học sinh đó. Với những học sinh không cùng tên Nhật có thể chỉ gọi tên của người đó.

Hãy giúp Nhật quyết định ở mỗi người Nhật sẽ cần gọi tên hay cả họ và tên!

## Input

- Dòng đầu tiên là số nguyên dương $T$ là số test case, mỗi test case có cấu trúc như sau:
    - Dòng đầu tiên là số nguyên dương $N$. 
    - $N$ dòng tiếp theo, mỗi dòng gồm họ và tên của học viên thứ $i$. Tên và họ của mỗi học viên là các chữ cái tiếng anh in thường không dài quá $10$.

## Constraints

- $1 \le T \le 100$.
- $1 \le N \le 100$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): $1 \le N \le 10$ và $1 \le T \le 10$.
- Subtask $2$ ($75\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Với mỗi test case in ra $N$ dòng, với dòng thứ $i$ thể hiện cách gọi tên của học viên thứ $i$. Họ và tên được ngăn cách nhau bởi dấu cách.

## Sample Input 1

```
1
1
nhat ha
```

## Sample Output 1

```
nhat
```

## Explaination 1

Có $1$ test case và duy nhất $1$ học viên. Nên Nhật chỉ cần đọc tên của học viên này.

## Sample Input 2

```
1
4
hasan jaddouh
farhod khakimiyon
kerim kochekov
hasan khateeb
```

## Sample Output 2

```
hasan jaddouh
farhod
kerim
hasan khateeb
```

## Explaination 2

Có $1$ test case và có $4$ học viên. có $2$ học viên có tên giống nhau là học viên thứ $1$ và thứ $4$. Nên Nhật sẽ gọi cả họ và tên của $2$ học viên này. $2$ học viên còn lại sẽ chỉ cần gọi tên.
