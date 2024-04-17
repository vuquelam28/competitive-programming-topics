# Lớp Học

Một lớp học có $n$ học sinh, thầy giáo cần lưu thông tin của cả $n$ học sinh này. Thông tin này gồm tên, ngày tháng năm sinh và điểm trung bình của học sinh đó.

Hãy tạo ra một ```struct``` để khai báo kiểu dữ liệu lưu trữ những thông tin trên cho từng học sinh.

***Yêu cầu:*** Trong ```struct``` này, hãy tạo ra:
- Hàm khởi tạo có tham số cho kiểu dữ liệu  này.
- Hàm nhận một số thực và chỉnh sửa điểm phẩy của học sinh bằng số đó.
- Hàm in ra ngày tháng năm sinh của học sinh đó, theo format giống bài DATE.
- Hàm in ra tên của học sinh đó và điểm trung bình của học sinh đó.

## Input

- Dòng đầu ghi số nguyên dương $n$ là số học sinh.
- Trên $n$ dòng sau, mỗi dòng có dạng: `s a b c p`, cụ thể:
    - $s$ là tên (lưu ý chỉ là tên chứ không có họ) của học sinh này.ư
    - $a,b,c$ lần lượt là ngày tháng năm sinh của học sinh này.
    - $p$ là điểm trung bình hiện tại của học sinh này.
- Dòng tiếp theo gồm số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, đầu tiện nhận được $2$ số nguyên dương $t$ và $id$:
    - Nếu $t=1,$ bạn nhận được thêm  số thực $p,$ hãy gán điểm phẩy của học sinh thứ $id$ thành $p$.
    - Nếu $t=2,$ bạn hãy in ra ngày tháng năm sinh của học sinh thứ $id,$ theo format trong bài "DATE".
    - Nếu $t=3,$ bạn hãy in ra tên và điểm phẩy hiện tại của học sinh thứ $id,$ chỉ in ra $1$ số sau dấu phẩy.


## Constraints

- $1 \le n \le 10^3$.
- $1 \le |s| \le 10$.
- $1 \le a \le 28, 1 \le b \le 12, 1 \le c \le 2010$.
- $0 \le p \le 10$

## Output

- Với mỗi truy vấn, in ra kết quả tương ứng.

## Sample Input 1

```
3
An 24 1 2008 9.5
Binh 21 6 2008 7.8
Phuc 3 10 2007 8.6
5
2 1
3 2
1 1 9.7
3 1
2 2
```

## Sample Output 1

```
24/01/2008
Binh 7.8
An 9.7
21/06/2008
```
