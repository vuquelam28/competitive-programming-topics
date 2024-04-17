# Xóa Dòng - Editorial

Sử dụng `unordered_set` để lưu trữ các xâu đặc trưng lần lượt từ hàng cuối cùng lên hàng $1$.

Ở bước thứ $i,$ ta tạo ra $N$ xâu đặc trưng gồm các phần tử từ hàng thứ $M$ tới hàng thứ $i$ của cột tương ứng và đưa hết vào set. Vì $set$ chỉ lưu trữ các phần tử khác nhau, nên nếu như xét tới hàng thứ $i$ mà kích thước của set đúng bằng $N$ thì có thể xóa được các hàng từ $1$ tới hàng thứ $i - 1$.