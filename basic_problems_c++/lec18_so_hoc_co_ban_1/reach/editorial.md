# Reach - Editorial

Nhận xét: Các thao tác biến đổi đề bài cung cấp chính là các thao tác để tìm ước chung lớn nhất của hai số. Như vậy để cặp số $(a, b)$ biến đổi được thành cặp số $(x, y)$ thì chúng phải có $GCD$ bằng nhau. Vậy chỉ cần kiểm tra bằng hàm `__gcd()` của STL C++.

***Độ phức tạp:*** $O\big(\log \text{max}(a, b, x, y)\big)$.



