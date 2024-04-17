# Điều Chỉnh Đồng Hồ - Editorial

***Nhận xét:*** 
- Mỗi thao tác chỉ có thể sử dụng không quá $3$ lần liên tiếp, vì nếu sử dụng chúng quá $3$ lần liên tiếp thì toàn bộ các đồng hồ thuộc phạm vi tác động của thao tác đó sẽ lại quay trở về trạng thái như ban đầu.
- Khi một chiếc đồng hồ đang mang trạng thái $x$ bị tác động bằng thao tác nào đó $y$ lần liên tiếp, thì trạng thái của nó sẽ trở thành $(x + y) \ \% \ 4$.

Dựa vào hai nhận xét trên, ta có thể thiết kế một giải thuật trâu bò như sau: Xét mỗi thao tác với số lần sử dụng từ $0$ tới $3,$ duyệt tất cả các trường hợp sử dụng của $9$ thao tác, như vậy có tổng cộng $4^9$ cách sử dụng. Với mỗi trường hợp sử dụng $9$ thao tác, ta tính trạng thái của $9$ chiếc đồng hồ bằng công thức bên trên, rồi kiểm tra xem các trạng thái đều đã về $0$ hết chưa. Nếu đã thỏa mãn cả $9$ đồng hồ cùng đạt trạng thái $0$ thì in ra tổng số thao tác cần sử dụng và dừng luôn chương trình. Cách làm này sẽ đảm bảo số thao tác cần dùng là nhỏ nhất. 

