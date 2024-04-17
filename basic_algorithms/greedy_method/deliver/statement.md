# Đưa Đón Nhân Viên

Công ty DKEDTECH có duy nhất một chiếc xe để đưa đón nhân viên đi làm. Trụ sở công ty nằm ở đầu đường quốc lộ và dọc theo quốc lộ đó có $n$ điểm tập trung nhân viên đánh số từ $1$ tới $n,$ điểm thứ $i$ nằm cách công ty $x_i$ km $(x_1 < x_2 < \cdots < x_n)$ và có $a_i$ người đứng đợi tại đó. Xe của công ty không thể chở quá $m$ người, vì vậy để đón hết các nhân viên, có thể xe sẽ phải đi nhiều lượt, mỗi lượt xuất phát từ trụ sở công ty, đi đón nhân viên và lại quay về trụ sở công ty. 

***Yêu cầu:*** Hãy lập hành trình cho xe đi đón tất cả các nhân viên sao cho tổng quãng đường xe cần di chuyển là nhỏ nhất?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $m$.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên $x_i$ và $a_i$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le m \le 10^9$.
- $1 \le x_i, a_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $1 \le n \le 50$.
- Subtask $2$ ($40\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là tổng độ dài quãng đường ngắn nhất mà xe phải di chuyển để đón hết các nhân viên.

## Sample Input 1

```
2 4
1 2
5 6
```

## Sample Output 1

```
20
```



