# Hệ Thống Tưới Nước Tự Động - Editorial

Có thể nhận thấy rằng số nước chảy ra khỏi lỗ thứ nhất tỉ lệ nghịch với tổng kích thước các lỗ nước không bị bịt, suy ra con số này càng nhỏ thì số nước chảy ra càng lớn. Vậy ta ưu tiên bịt các lỗ có kích thước lớn nhất. Vậy ta chỉ cần sắp xếp lại $s$ sau đó duyệt và dừng lại cho đến khi số nước chảy ra đủ lớn thỏa điều kiện lớn hơn hoặc bằng $B$.

***Độ phức tạp:*** $O(n)$ sử dụng sắp xếp đếm phân phối. Hoặc các bạn có thể sử dụng hàng đợi ưu tiên để liên tục tìm ra lỗ có kích thước lớn nhất.
