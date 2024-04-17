# Mua Xăng - Editorial

Ý tưởng của bài toán này khá rõ ràng, đó là tham lam. Để mua xăng cho ngày thứ $i,$ ta luôn luôn chọn ngày có giá xăng thấp nhất trong các ngày $1...i$ để mua. Vậy công thức chung là:

$$res = \sum_{i = 1}^n a_i \times \text{min}(p_1, p_2, \dots, p_i)$$

### Subtask 1

Giá trị $\text{min}(p_1, p_2, \dots, p_i)$ có thể tìm bằng cách thực hiện thêm một vòng lặp lồng bên trong vòng lặp $i = 1...n$.

***Độ phức tạp:*** $O(n^2)$.

### Subtask 2

Duy trì một biến $min\_cost$ để lưu giá trị $\text{min}(p_1, p_2, \dots, p_i)$. Với mỗi $i = 1...n$ ta cập nhật:

$$min\_cost = \text{min}(min\_cost, p_i)$$

Sau đó cộng thêm vào kết quả một lượng $min\_cost \times a_i$

***Độ phức tạp:*** $O(n)$.