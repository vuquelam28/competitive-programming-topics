# Địa Chỉ IPV4 - Editorial

Duyệt qua từng kí tự trong chuỗi, nếu kí tự đó là chữ số thì ghép nó vào thành số, còn nếu kí tự đó là dấu `.` thì kiểm tra hai việc:
- Số vừa ghép được có thuộc đoạn $[0, 255]$ hay không? Nếu không thì xâu này không phải IPV4 hợp lệ.
- Gặp một dấu `.` thì nghĩa là số lượng octet (một số nguyên trong địa chỉ IPV4 gọi là một octet) tăng thêm $1$. Nếu số octet lớn hơn $4$ thì xâu này cũng không phải IPV4 hợp lệ.

Duyệt xong cả xâu, nếu không có vị trí nào bị vi phạm một trong hai điều kiện trên, đồng thời tổng số octet đúng bằng $4$ thì xâu đó là một IPV4 hợp lệ. 