# Best Divisor - Editorial

Viết trước một hàm `sum_of_digits(n)` để tính tổng các chữ số của một số nguyên dương $n$. Sau đó, duyệt qua mọi giá trị $i$ là ước của $n,$ sử dụng hàm `sum_of_digits()` để tính tổng các chữ số của ước đó, đồng thời lấy ra số nào có tổng các chữ số lớn nhất và có giá trị nhỏ nhất, đó là kết quả bài toán.

Để giải quyết được bài toán với $n \le 10^9,$ hãy áp dụng giải thuật tìm các ước của $n$ trong $O(\sqrt{n})$.