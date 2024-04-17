# Phần Thưởng Học Sinh Giỏi - Editorial

Để có nhiều thí sinh được nhận quà nhất, ta cần ưu tiên tặng quà cho các bạn từ điểm thấp tới điểm cao. Việc này sẽ cần tới thao tác sắp xếp lại mảng $a$ tăng dần. 

Các bạn sử dụng hàm `sort()` để thực hiện việc này. Sau đó, ta duyệt lần lượt qua từng bạn, tặng quà cho bạn đó nếu như số quà còn lại vẫn đủ, cho tới khi hết quà hoặc không thể tặng quà tiếp.

***Độ phức tạp:*** $O(n \times \log n)$.