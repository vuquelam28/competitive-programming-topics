# Tìm Xâu - Editorial

Từ xâu $x$ đã cho, ta tạo ra tất cả các hoán vị vòng quanh của nó (có thể nhân đôi xâu lên để làm cho đơn giản), rồi lưu vào một mảng và sắp xếp lại theo thứ tự từ điển, đồng thời lọc bỏ các xâu bị trùng.

Xâu $s$ ban đầu chính nằm ở vị trí thứ $k$ trong dãy xâu hoán vị tìm ra. Còn nếu $k$ lớn hơn số lượng xâu tạo ra thì kết quả là $-1$.