# Cặp Quà Đặc Biệt - Editorial

### Subtask 1

Sử dụng hai vòng lặp để thử chọn tất cả các cặp $(a_i, a_j)$.

Độ phức tạp: $O(n^2)$.

### Subtask 2

Với mỗi $a_i,$ ta sẽ đếm xem phía trước nó có bao nhiêu giá trị $-a_i$. Công việc này thực hiện bằng đếm phân phối hoặc bằng `map` đều được.

Độ phức tạp: $O(n)$ nếu dùng đếm phân phối, $O\big(n \times \log(n)\big)$.