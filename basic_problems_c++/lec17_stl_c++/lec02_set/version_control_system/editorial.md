# Version Control System - Editorial

Ta nhận thấy rằng hai dãy $A, B$ là danh sách các số nguyên phân biệt, vì vậy ta xem như hai dãy này là hai `set`. Từ đó, ta thấy tệp nguồn vừa được theo dõi và bỏ qua là giao của hai tập hợp được đưa ra. Các tệp nguồn không được theo dõi và không được bỏ qua đều là các số trong khoảng $1...n$ không xuất hiện lần nào trong hai danh sách đã cho.

Để tìm giao giữa hai `set`, cách đơn giản nhất là tìm tất cả các số trong `set` đầu tiên xuất hiện trong `set` thứ hai.

Cuối cùng, để tìm các số trong khoảng $1...n$ không xuất hiện lần nào trong cả hai `set`, duyệt qua hai `set` và đánh dấu lại các số mà ta gặp được khi duyệt. Tiếp đó, duyệt từ $1$ đến $n$ để tìm các số chưa được đánh dấu.



