# Cặp Bạn Bè - Editorial

Sử dụng mô hình đệ quy, duyệt quay lui để sinh ra mọi hoán vị gồm $k$ chữ số của tập $n$ chữ số đã cho, mỗi hoán vị tương ứng với một số (lưu ý không tạo ra các số có chữ số đầu tiên là $0$). Giả sử số tạo thành là $x,$ ta xử lý như sau:

- Tìm số $x'$ là số đảo của $x$. 
- Nếu $x$ kết thúc là chữ số $0$ thì dẫn đến $x'$ sẽ có chữ số đầu tiên là $0,$ trường hợp này chắc chắn không phải cặp số bạn bè.
- Tính $\text{UCLN}(x, x'),$ nếu bằng $1$ thì tăng kết quả thêm $1,$ đồng thời đánh dấu lại hai số $x$ và $x'$ đã xuất hiện trong tập kết quả. Mục đích là để sau này khi quay lui tạo ra số $x'$ thì không xét lại cặp $(x', x)$ nữa. Việc đánh dấu có thể thực hiện bằng `map` trong C++ hoặc `dictionary` trong Python.

***Độ phức tạp:*** $O(n!)$.