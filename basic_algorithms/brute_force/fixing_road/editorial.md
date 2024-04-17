# Sửa Đường - Editorial

### Subtask 1

Ứng với mỗi câu hỏi $(u_i, v_i);$ ta thay đổi đoạn đường $u_i$ thành loại nhựa $v_i$ và duyệt lại tất cả các đoạn đường để tính độ gập ghềnh.

Độ phức tạp: $O(n \times q)$.

### Subtask 2

Gọi độ gập ghềnh ban đầu của cả tuyến đường là $\text{roughness}$. Giá trị này có thể dễ dàng tính được lúc đầu bằng một vòng lặp.

Xét một truy vấn $(u_i, v_i),$ sự thay đổi của độ gập ghềnh chỉ có thể xảy ra ở một số trường hợp nhất định:

- Nếu sự thay đổi diễn ra ở đầu hoặc cuối tuyến đường ($u_i = 1$ hoặc $u_i = n$).
- Nếu đoạn đường thứ $u_{i - 1}$ và $u_{i + 1}$ thuộc cùng một loại nhựa.
- Nếu đoạn đường thứ $u_{i - 1}$ và $u_{i + 1}$ khác loại nhựa với nhau. 

Trong $3$ trường hợp trên, việc thay đổi $u$ sẽ có thể dẫn đến thay đổi tổng độ gập ghềnh của cả đoạn đường (gợi ý là chỉ có thể thay đổi trong tập giá trị $\{-2, -1, 0, 1, 2\}$). Bạn đọc hãy tự mình tính toán và tìm ra quy luật đó.

***Độ phức tạp:*** $O\big(\text{max}(n, q)\big)$.