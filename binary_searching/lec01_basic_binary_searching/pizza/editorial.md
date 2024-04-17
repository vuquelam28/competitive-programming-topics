# Mua Bánh Pizza - Editorial

### Subtask 1

Xét người thứ $i \ (1 \le i < n),$ sử dụng vòng lặp để tìm ra người thứ $j \ (i < j \le n)$ sao cho $a_i + a_j = m$. Vì các phần tử của dãy $A$ là phân biệt nên chắc chắn ứng với mỗi $i$ chỉ có thể tồn tại duy nhất một $j$ riêng biệt.

***Độ phức tạp:*** $O(t \times n^2)$.

### Subtask 2

Tương tự ý tưởng subtask $1$ nhưng ta tìm ra vị trí $j$ bằng cách sắp xếp lại dãy số rồi thực hiện tìm kiếm nhị phân.

***Độ phức tạp:*** $O\big(t \times n \times \log(n)\big)$.
