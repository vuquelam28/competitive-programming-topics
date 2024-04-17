# Chơi Cầu Lông - Editorial

### Subtask 1

Với mỗi vận động viên thứ $i,$ ta duyệt qua các vận động viên $j$ từ $i + 1$ tới $n$ rồi đếm số lượng phần tử $a_j$ liên tiếp nhỏ hơn $a_i$. Nếu như số lượng đó lớn hơn hoặc bằng $k,$ thì ta kết luận luôn vận động viên thứ $i$ là nhà vô địch.

Cần lưu ý rằng, nếu như không tìm thấy vận động viên nào theo cách này thì kết quả sẽ là vận động viên có chỉ số lớn nhất. Hoặc nếu $k = n - 1,$ thì tất nhiên kết quả cũng phải là vận động viên có chỉ số lớn nhất (chỉ số $n$).

***Độ phức tạp:*** $O(n^2)$.

### Subtask 2

Sử dụng một biến để lưu vận động viên có chỉ số sức mạnh lớn nhất tính đến vị trí hiện tại. Giả sử nó là $\text{winner}$.

Sử dụng thêm một biến $\text{consecutive\_winning}$ là số lượng trận thắng liên tiếp của vận động viên ở đầu hàng hiện tại.

Duyệt qua các vận động viên từ $1$ tới $n,$ ta dễ dàng tính được số trận thắng liên tiếp của vận động viên đó. Còn nếu như xuất hiện một trận thua, thì $\text{winner}$ sẽ thay đổi thành người mới và $\text{consecutive\_winning}$ khởi tạo trở lại bằng $1$. Nếu vận động viên nào có số trận thắng liên tiếp lớn hơn hoặc bằng $k$ thì ngay lập tức đó là người chiến thắng chung cuộc.

Cách làm này luôn đúng bởi vì nếu như một vận động viên đã được đưa xuống cuối hàng, mà sau đó lại quay trở lại đầu hàng thì tức là thứ tự lại quay trở về như dãy ban đầu.

***Độ phức tạp:*** $O(n)$.


