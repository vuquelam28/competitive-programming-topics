# Trò Chơi Sudoku - Editorial

Do số lượng hàng và cột chỉ có $9 \times 9,$ và mỗi ô sẽ chỉ có thể lựa chọn một số giá trị nhất định, nên ta sẽ sử dụng quay lui kết hợp với đặt cận trong bài toán này để sinh thử các trường hợp bảng số, tới khi nào gặp một cách sinh đúng đắn thì in ra kết quả và dừng chương trình luôn.

Xét một ô hàng $x$ cột $y,$ ta sẽ thử chọn giá trị cho nó từ $0$ tới $9$. Khi thử chọn giá trị $v$ cho một ô $(x, y)$ thì có những điều dưới đây cần quan tâm:

- Giá trị $v$ đã xuất hiện trong hàng $x$ chưa?
- Giá trị $v$ đã xuất hiện trong cột $y$ chưa?
- Giá trị $v$ đã xuất hiện trong hình vuông $3 \times 3$ chứa ô $(x, y)$ chưa? 

Ta sẽ viết một hàm để kiểm tra ba điều trên. Như vậy, khi chọn một giá trị $v$ cho ô $(x, y),$ nếu một trong ba điều trên bị vi phạm thì ta sẽ bỏ qua giá trị đó không chọn cho ô $(x, y)$ nữa. Công việc còn lại rất đơn giản: Sinh lần lượt từng ô trong hàng, hết một hàng thì chuyển xuống hàng bên dưới, nếu đi được hết các hàng thì ta sẽ in ra kết quả.