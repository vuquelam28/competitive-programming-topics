# Hoán Vị Xâu 2 - Editorial

Hoán vị: Các cách sắp xếp khác nhau của một tập hợp.

Yêu cầu cần tìm ra các hoán vị ***khác nhau*** của xâu $S$. Tức là ví dụ $S =$ `AAB`, thì các hoán vị là: `AAB`, `ABA`, `AAB`, `BAA`, `BAA`, `ABA`.

Cách đơn giản nhất: Sử dụng quay lui và sinh ra tất cả các hoán vị của xâu $S$ rồi lưu vào một mảng, cuối cùng in ra các phần tử khác nhau trong mảng.

Cách cải tiến: Sử dụng nhánh và cận để giảm bớt các trường hợp phải xét.

- Trước hết, vì đề bài yêu cầu in ra các xâu hoán vị thu được theo chiều tăng dần của thứ tự từ điển, nên ta sẽ sắp xếp lại xâu $S$ theo thứ tự kí tự tăng dần rồi mới duyệt sinh hoán vị để đảm bảo các hoán vị tạo ra luôn luôn theo thứ tự từ điển.
- Gọi $\text{res}[]$ là mảng lưu các hoán vị khác nhau của $S$. Ở mỗi lần sinh kí tự thứ $i$ trong hoán vị, ta ghi nhận xâu đã tạo ra là $\text{cur\_string},$ đồng thời kiểm tra xem $\text{cur\_string}$ có lớn hơn xâu cuối cùng trong mảng $\text{res}$ hay không? Nếu không lớn hơn nghĩa là hoán vị này dù có sinh tiếp cũng sẽ thu được một hoán vị bị trùng, khi đó ta sẽ loại bỏ luôn nhánh đang sinh và chuyển qua kí tự khác cho kí tự thứ $i$.