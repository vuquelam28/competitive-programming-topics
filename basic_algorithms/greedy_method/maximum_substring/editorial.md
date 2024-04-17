# Xâu Con Lớn Nhất - Editorial

### Subtask 1

Sử dụng quay lui duyệt sinh mọi xâu con từ xâu ban đầu, sau đó kiểm tra xâu sinh ra có thỏa mãn mỗi kí tự đều xuất hiện ít nhất $k$ lần hay không, nếu có thì lấy kết quả có thứ tự từ điển lớn nhất.

### Subtask 2

Nhận thấy, các kí tự trong xâu chỉ có thể thuộc $26$ kí tự trong tập `[a...z]`. Trước hết, ta sử dụng mảng $cnt[x]$ để đếm phân phối mọi kí tự $x$ trong xâu (sử dụng $x$ là số hiệu ASCII của các kí tự để kiểm soát trong mảng).

Vì xâu cần tìm là xâu có thứ tự từ điển lớn nhất, nên ta sẽ ưu tiên chọn các kí tự càng lớn càng tốt đứng ở phía bên trái kết quả. Vậy giải thuật tham lam như sau: 

- Duyệt chọn các kí tự từ `z` về `a`. 
- Với mỗi kí tự, kiểm tra xem nó có xuất hiện $k$ lần trong xâu đã cho hay không, nếu có thì lần lượt chọn các kí tự đó từ trái qua phải của xâu $S$.
- Lưu ý, kí tự tiếp theo được chọn phải bắt đầu từ vị trí được chọn cuối cùng của kí tự được chọn ở lượt trước đó, để đảm bảo xâu tìm được phải là xâu con của xâu $S$.
- Cuối cùng, đừng nối trực tiếp các kí tự được chọn vào một xâu, vì phép nối xâu sẽ làm tăng độ phức tạp thuật toán. Hãy sử dụng `vector` kiểu `char` để lưu các kí tự. 