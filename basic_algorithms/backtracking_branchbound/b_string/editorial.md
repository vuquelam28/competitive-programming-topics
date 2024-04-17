# Xâu Đẹp - Editorial

Nghiệm của bài toán có thể biểu diễn dưới dạng một vector $X = (x_1, x_2,\dots, x_n)$ thỏa mãn:

- $x_i = 0$ hoặc $x_i = 1$ tương ứng với kí tự `A` hoặc `B`.
- $x_i$ và $x_{i - 1}$ không được phép cùng bằng $1$ với mọi $i \in [2, n]$.

Sử dụng mô hình đệ quy để duyệt quay lui mọi dãy nhị phân độ dài $n,$ đặt thêm một cận để kiểm tra nếu như nghiệm hiện tại mà có $x_i = x_{i - 1} = 1$ thì dừng luôn không đi vào nhánh đó nữa. Khi sinh đủ một nghiệm độ dài $n$ thì đưa nó vào kết quả, rồi sắp xếp tập kết quả tăng dần.

***Độ phức tạp:*** $O(2^n)$.