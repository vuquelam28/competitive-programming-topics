# Tìm Căn Bậc Hai - Editorial

Do $n$ lớn nên ta không thể sử dụng trực tiếp hàm `sqrt()` để tìm căn bậc hai của $n$. Thay vào đó, ta sử dụng ý tưởng tìm kiếm nhị phân kết quả, tìm ra số $d$ lớn nhất thỏa mãn $d \times d \le n$. 

Cách làm trên sẽ yêu cầu phải có xử lý số nguyên lớn, cụ thể là các phép toán nhân hai số lớn, nạp chồng các toán tử so sánh số lớn và cả các phép toán cộng hai số lớn, chia số lớn cho số nhỏ, trừ hai số lớn (ở bước tìm kiếm nhị phân). Nói chung đây là một bài toán dễ về ý tưởng nhưng cài đặt rất dài nếu các bạn sử dụng C++, hãy xem thêm ở cài đặt.

***Độ phức tạp:*** $O(\log n \times \alpha)$ với $\alpha$ là tổng độ phức tạp các thao tác xử lý số lớn. 