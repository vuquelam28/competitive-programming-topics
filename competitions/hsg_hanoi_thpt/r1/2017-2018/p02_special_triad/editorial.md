# Bộ Ba Số Đặc Biệt - Editorial

### Subtask 1

Sử dụng ba vòng lặp để duyệt toàn bộ các bộ ba và đếm số lượng bộ ba đặc biệt.

***Độ phức tạp:*** $O(m^2 \times n)$.

### Subtask 2

Nhận xét: Giả sử tạo được $K$ bộ ba đặc biệt thì chắc chắn sẽ tạo được $K - 1$ bộ ba đặc biệt. Do đó ta sẽ chặt nhị phân số bộ ba nhiều nhất tạo được, vì lúc này bài toán đã thỏa mãn định lý chính của Tìm kiếm nhị phân.

Thật vậy, do cách chọn của ta sẽ là: chọn $K$ số nhỏ nhất và $K$ số lớn nhất trong mảng $A$. Sắp xếp $K$ số nhỏ tăng dần, $K$ số lớn tăng dần, rồi ghép số nhỏ đầu tiên với số lớn đầu tiên, số nhỏ thứ nhì với số lớn thứ nhì,..., số nhỏ thứ $K$ với số lớn thứ $K$. Ứng với mỗi cặp tìm 1 giá trị $b_j$ phù hợp với cặp đó. Cách làm này dẫn đến khi K càng giảm thì chênh lệch giữa số lớn và số nhỏ được nới rộng ra, khi đó chọn $b_j$ sẽ dễ dàng hơn vì có một khoảng cách rộng hơn để nhét $b_j$ vào. Điều này đồng nghĩa với việc, nếu ta xây dựng một hàm $G(K)$ để kiểm tra xem có thể tạo ra được $K$ bộ ba đặc biệt hay không, thì tập kết quả hàm $G$ sẽ có dạng: 
$$\text{true, true, true, \dots, true, false, false, \dots, false}$$

tức là nó thỏa mãn định lý chính của Tìm kiếm nhị phân.

Xét số lượng bộ ba đang là $K,$ cần xác định xem có tạo được đủ $K$ bộ ba hay không. Ta tham lam như sau: Chọn ra $K$ số nhỏ nhất và $K$ số lớn nhất trong dãy $A,$ lưu vào hai mảng $low$ và $high$ tương ứng. Sắp xếp tăng dần hai mảng $low$ và $high,$ ta sẽ ghép $low[0] - high[0], low[1] - high[1],..., low[K - 1] - high[K - 1]$. Với mỗi bộ $low[i] - high[i],$ tìm một phần tử $b_j$ sao cho $low[i] < b_j < high[i]$. Việc tìm kiếm phần tử $b_j$ với từng cặp $low[i] - high[i]$ có thể thực hiện bằng cách duy trì một biến chạy $j$ tăng liên tục trên mảng $B$ đã sắp xếp tăng dần.

Nếu như tìm được đủ $K$ phần tử trên mảng $B$ để ghép với $K$ cặp số $low - high,$ thì tăng $K$ lên, ngược lại giảm $K$ xuống.

***Độ phức tạp:*** $O(n \times \log n)$.