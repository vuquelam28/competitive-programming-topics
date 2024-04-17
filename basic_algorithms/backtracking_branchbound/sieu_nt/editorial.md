# Số Siêu Nguyên Tố - Editorial

Nhận thấy, nghiệm của bài toán là một tập $X = {x_1, x_2,\dots, x_n},$ với $x_i \in [1, 9]$. Cách dễ nhất ta có thể thử backtrack như sau: Giả sử đã sinh được $i$ chữ số, khi chuẩn bị sinh $x_{i + 1},$ thì cần kiểm tra số mới khi thêm $x_{i + 1}$ vào cuối có phải là số nguyên tố không, nếu không thì chọn giá trị khác cho $x_{i + 1}$ luôn.

Ngoài ra, có thể cải tiến giải thuật nhanh hơn nữa bằng cách nhận xét: Các số nguyên tố chỉ có thể có tận cùng là $\{1, 2, 3, 5, 7, 9\},$ nên mỗi $x_i$ chỉ cần xét các chữ số này thôi.