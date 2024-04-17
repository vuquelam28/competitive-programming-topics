# Siêu Chữ Số  - Editorial

Số $p$ sẽ có siêu chữ số bằng siêu chữ số của $n$ nhân thêm với $k$. Ta sẽ tính giá trị này ra trước (coi như là lượt biến đổi đầu tiên), rồi tiếp tục biến đổi theo công thức tới khi $p$ chỉ còn $1$ chữ số.

Vận dụng hàm `to_string()` là hàm chuyển đổi từ kiểu số sang kiểu `string` trong C++.