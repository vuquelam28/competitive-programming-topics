# Biểu Thức 2 - Editorial

Quy luật của dãy số như sau: Nếu đánh số thứ tự các số hạng từ vị trí $1,$ thì số hạng thứ $i \ (1 \le i \le n)$ sẽ có dạng $\frac{1}{1 + 2 + \cdots + i}$.

Vậy ta lặp qua các giá trị $i = 1...n,$ với mỗi $i,$ ta tính ra tổng $1 + 2 + \cdots + i = \frac{i \times (i + 1)}{2}$ (công thức Toán học). Sau đó cộng thêm vào biến kết quả giá trị $\frac{1}{1 + 2 + \cdots + i}$.

Lưu ý ép kiểu để thu được kết quả số thực.