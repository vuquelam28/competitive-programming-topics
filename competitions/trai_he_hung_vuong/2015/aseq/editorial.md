# Dãy Số - Editorial

### Subtask 1

Duyệt qua tất cả các đoạn con $[i, j]$ của dãy số và tính tổng tuyệt đối của chúng, rồi đếm số lượng tổng thuộc đoạn $[L, R]$.

Độ phức tạp: $O(n^2)$.

### Subtask 2

Xây dựng $sum[i]$ là mảng tổng tiền tố của mảng $A$ ban đầu.

Xét một đoạn $[i, j];$ ta thấy tổng tuyệt đối của đoạn này là: 
$$|sum[j] - sum[i - 1]|$$

Phá dấu giá trị tuyệt đối thì tổng tuyệt đối của đoạn có thể là $sum[j] - sum[i - 1]$ hoặc $sum[i - 1] - sum[j]$. Do đó, vị trí của các giá trị $sum[i]$ đã không còn quan trọng mà chỉ cần quan tâm đến giá trị. Hay nói cách khác, ứng với mỗi giá trị $sum[i],$ ta sẽ đi tìm số lượng giá trị $sum[j]$ thỏa mãn $L \le sum[i] - sum[j - 1] \le R$. 

Để giải quyết yêu cầu trên ta có thể sắp xếp lại mảng $sum$ rồi thực hiện tìm kiếm nhị phân.

Độ phức tạp: $O(n \times \log n)$.

