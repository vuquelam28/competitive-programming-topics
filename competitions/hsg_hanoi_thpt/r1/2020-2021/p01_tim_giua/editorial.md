# Tìm Giữa - Editorial

### Subtask 1

Thử duyệt chọn các giá trị $M$ từ $L$ tới $R$ và tìm ra kết quả tối ưu.

***Độ phức tạp:*** $O(R - L + 1)$.

### Subtask 2

Đầu tiên, ta biết công thức tính tổng một đoạn $[a, b]$ là: 
$$\frac{b.(b + 1) - a.(a - 1)}{2}$$

Cần tìm giá trị $M$ sao cho $\Big|(\sum_{i = L}^M i - \sum_{i = M + 1}^L  i)\Big|$ đạt giá trị nhỏ nhất. Nghĩa là ta cần xác định giá trị $M$ sao cho tổng từ $L$ tới $M$ gần với giá trị tổng từ $L$ tới $R$ chia cho $2$ nhất có thể. Giả sử trường hợp tốt nhất xảy ra là chia được đoạn $[L, R]$ ra làm hai đoạn có tổng bằng nhau. Thiết lập phương trình:
$$\big[M.(M + 1) - L.(L - 1)\big] = \frac{R.(R + 1) - L.(L - 1)}{2}$$

$$\Leftrightarrow 2M^2 + 2M - (L^2 - L + R^2 + R) = 0$$

Ta nhận thấy phương trình trên là phương trình bậc hai ẩn $M$ với delta chắc chắn dương và hai hệ số $a, c$ trái dấu. Do đó phương trình có hai nghiệm phân biệt trái dấu nhau. Tất nhiên ta chỉ ghi nhận nghiệm dương, vì $M$ không thể là số âm:

$$M = \frac{-b^2 + \sqrt{\Delta}}{2a}$$

Tới đây chỉ cần kiểm tra nghiệm này có phải số nguyên hay không, nếu là số nguyên thì đó là kết quả luôn, ngược lại thì kết quả là nghiệm đó cộng thêm $1$ và làm tròn xuống.

***Độ phức tạp:*** $O(1)$.