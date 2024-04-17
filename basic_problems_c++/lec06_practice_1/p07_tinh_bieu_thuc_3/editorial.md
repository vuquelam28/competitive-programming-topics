# Tính Biểu Thức 3 - Editorial

Quan sát quy luật của các số hạng trong tổng cần tìm, ta có quy luật sau:
- Số hạng thứ $i \ (1 \le i \le n)$ sẽ mang dấu `+` nếu như $i$ là số lẻ, ngược lại thì số thứ $i$ mang dấu `-`.
- Số hạng thứ $i$ có mẫu số là tổng của các số từ $1$ tới $i,$ ta có thể tính nhanh mẫu số bằng công thức $\frac{i \times (i + 1)}{2}$. 
- Cộng lần lượt các số hạng vào biến kết quả, chú ý ép kiểu số thực để kết quả chính xác.