# Thao Tác Vòng Lặp 2

Nhập vào một dãy các số thực $p$ là điểm tổng kết của một lớp học (không biết trước số học sinh). Quá trình nhập sẽ dừng lại khi số nhập vào nhận giá trị $-1$. 

***Yêu cầu:*** Hãy thực hiện các công việc sau:
- Đếm số học sinh trong lớp?
- Tính điểm tổng kết trung bình của tất cả học sinh trong lớp? Đưa ra kết quả làm tròn tới $2$ chữ số sau dấu chấm thập phân. 
- Tìm số thứ tự của học sinh có điểm tổng kết cao nhất lớp?

***Gợi ý:*** 
- Ý đầu tiên: Hãy nhập dữ liệu bằng vòng lặp vô hạn.
- Ý thứ hai: Cú pháp viết ra một số thực $x$ làm tròn tới $n$ chữ số sau dấu chấm thập phân là: 
<br>
	```
	cout << fixed << setprecision(n) << x;
	// Lưu ý trước tiên khai báo thư viện: #include <iomanip>
	```
- Ý thứ ba: Sử dụng kết hợp câu lệnh rẽ nhánh.

## Input

- Gồm nhiều dòng, mỗi dòng chứa một số thực $p$ là điểm tổng kết của một học sinh trong lớp.

## Constraints

- $0 \le p \le 10$.

## Output

- Dòng đầu tiên chứa một số nguyên dương là số lượng học sinh trong lớp.
- Dòng thứ hai chứa một số thực $P$ là điểm tổng kết trung bình của cả lớp, làm tròn tới hai chữ số sau dấu chấm thập phân.
- Dòng cuối cùng chứa một số nguyên là số thứ tự của học sinh có điểm tổng kết cao nhất. Nếu có nhiều học sinh có cùng điểm tổng kết cao nhất thì chọn học sinh đầu tiên.

## Sample Input 1

```
10.0
5.75
7.5
8.25
-1
```

## Sample Output 1

```
4
7.88
1
```

## Explanation 1

Lớp có tổng cộng $4$ học sinh.

Điểm tổng kết trung bình của cả lớp là: $(10.0 + 5.75 + 7.5 + 8.25) \div 4 = 7.88$.

Học sinh đầu tiên là học sinh có điểm tổng kết cao nhất.

