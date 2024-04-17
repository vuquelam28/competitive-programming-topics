# Vá sàn nhà - Editorial

Ở mỗi cột hoặc hàng, bạn đọc có hai trạng thái là vá tất cả hoặc không vá.

Vậy bạn đọc duyệt toàn bộ tất cả cách vá, với mỗi cách vá có thể vá hết tất cả các ô thủng thì bạn so sánh và cập nhật vào kết quả.

Có $2^{2n}$ trạng thái khác nhau và ở mỗi trạng thái cần thời gian $O(n^2)$ để duyệt đếm các ô được vá nên ta có độ phức tạp $O(2^{2n} \times n^2)$.