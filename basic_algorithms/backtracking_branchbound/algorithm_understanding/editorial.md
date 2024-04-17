# Thông Hiểu Thuật Toán - Editorial

Ta sẽ quay lui xét hết mọi trường hợp mua sách, với mỗi trường hợp, ta cập nhật lại độ thông hiểu với các sách đã mua đó. Kiểm tra nếu với $M$ thuật toán độ thông hiểu đều đã $\ge X$ hay chưa, nếu rồi lấy min số tiền dùng để mua tập sách đó.

Ta có số trường hợp mua sách là $2^N$. Mỗi trường hợp phải for qua $M$ thuật toán với mỗi quyển sách đã mua. 

***Độ phức tạp:*** $O(2^N\times N \times M)$.