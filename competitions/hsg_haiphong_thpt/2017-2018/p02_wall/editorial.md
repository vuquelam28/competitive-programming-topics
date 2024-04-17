# Dán Tường - Editorial

Với mỗi hình chữ nhật $a \times b,$ ta cần tìm giá trị $d$ lớn nhất sao cho có thể dùng một số hình vuông $d \times d$ để phủ kín hình chữ nhật và không được phủ đè.

Dễ thấy, $d$ cần thỏa mãn: $d$ là ước của $a$ và $b$ và $d$ lớn nhất. Nói cách khác, $d$ chính là ***ước chung lớn nhất*** hay ***GCD*** của $a$ và $b$.

Tới đây, ta có thể dùng hàm `__gcd(a,b)` trong thư viện `algorithm` của C++ để tìm nhanh ước chung lớn nhất của $(a,b)$ do hàm này sử dụng thuật toán ***Euclid***.

Như vậy, với mỗi $a,b$ nhập vào, ta tính $d$ và cập nhật với kết quả. Số tờ giấy $d \times d$ cần dùng để phủ kín hình chữ nhật $a \times b$ chính bằng $\frac{a}{d} \times \frac{b}{d}$.

Lưu ý, cần dùng dữ liệu `long long` để tránh tràn số, nếu các bạn code C++.

Độ phức tạp: $O\big(\log \text{max}(a, b)\big)$.