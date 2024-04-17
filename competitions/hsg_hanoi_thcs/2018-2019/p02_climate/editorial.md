# Biến Đổi Khí Hậu - Editorial

### Subtask 1

Ứng với mỗi yêu cầu tác động $(l, r, x)$, duyệt qua các vị trí $p_i \ (1 \le i \le m)$. Nếu như $l \le p_i \le r$ thì địa điểm thứ $i$ này bị tác động, ta duyệt lại một vòng lặp từ $l$ tới $p_i$ để biết được vị trí $p_i$ sẽ tăng hay giảm độ cao.

Độ phức tạp: $O(n \times m \times (r - l + 1))$.

### Subtask 2

Vẫn tương tự như subtask $1,$ ứng với mỗi yêu cầu tác động $(l, r, x)$, duyệt qua các vị trí $p_i \ (1 \le i \le m)$. Nếu như $l \le p_i \le r$ thì địa điểm thứ $i$ này bị tác động. Tuy nhiên, ta sẽ tìm ra địa điểm này bị tác động tăng hay giảm bằng nhận xét toán học: Nếu như $p_i$ và $l$ có cùng tính chẵn lẻ thì chiều cao của địa điểm $i$ sẽ bị tác động tăng lên, ngược lại thì nó giảm xuống.

Nhờ thế, ta có thuật toán độ phức tạp $O(n \times m)$.