# Biểu Thức Cộng Trừ 2 - Editorial

Nhận thấy, chuỗi kí tự có $n$ chữ số, thì sẽ có $n$ vị trí trống ở trước mỗi chữ số để điền dấu vào. Một vị trí có thể điền theo ba cách: Không điền dấu, điền dấu `+` hoặc điền dấu `-`. Bài toán lúc này có thể quy về việc đếm số vector $X = (x_1, x_2,\dots, x_n)$ thỏa mãn:

- $x_i = 0, 1, 2$ tương ứng với ba trường hợp: Không điền dấu, điền dấu `+` hoặc điền dấu `-` vào trước chữ số ở vị trí $i$.
- Dãy biểu thức tạo thành có tổng đúng bằng $m$.

Sử dụng phương pháp Quay lui để duyệt mọi trường hợp có thể tạo ra, ứng với mỗi trường hợp tính giá trị biểu thức tạo thành và kiểm tra xem nó có bằng $m$ không. Tuy nhiên cần lưu ý, $x_1$ chỉ lựa chọn hai giá trị $0$ hoặc $2,$ vì việc điền dấu `+` vào phía trước chữ số đầu tiên của biểu thức là vô nghĩa.

***Độ phức tạp:*** $O(3^n)$.