# Chọn Cuộc Họp - Editorial

Nếu đã làm nhiều quy hoạch động, các bạn có thể dễ dàng thấy rằng bài toán này là bài toán cơ bản áp dụng từ bài toán quy hoạch động dãy con tăng dài nhất. Ý tưởng mình sẽ nhắc lại sơ qua: 
- Bước $1$: Sắp xếp lại các cuộc họp tăng dần theo thời gian bắt đầu $a_i$.
- Bước $2$: Đặt $dp[i]$ là số lượng cuộc họp nhiều nhất có thể chọn từ $1$ tới $i$ và có chọn cuộc họp thứ $i$. Ta có công thức:
$$dp[i] = \text{max}(dp[j]) + 1, \text{với } 1 \le j < i, b[j] < a[i]$$

Vấn đề khó hơn ở bài toán này là đếm số phương án chọn. Đặt $cnt[i]$ là số phương án lựa chọn để đạt được số cuộc họp là $dp[i]$. Áp dụng nguyên lí cộng trong tổ hợp, ta có công thức:
$$cnt[i] = \sum_{j = 1}^{i - 1}cnt[j], \text{với } dp[j] = dp[j] + 1 \text{ và } a[i] > b[j]$$

Nghĩa là số phương án ở $i$ sẽ bằng tổng số lượng các phương án ở $j$ mà $dp[j]$ tạo ra được $dp[i]$. Chỗ này bạn đọc tự suy nghĩ thêm để hiểu rõ công thức. Riêng trường hợp cách lựa chọn $dp[i]$ này là duy nhất (nghĩa là $cnt[i] = 0$ sau khi cộng) thì phải gán $cnt[i] = 1$.

Sau khi tính toán xong, ta thu được kết quả là:
- Số cuộc họp tối đa: $res = \text{max}(dp[i])$.
- Số cách chọn cuộc họp tối đa: $\sum cnt[i], \text{với } dp[i] = res$.

Điều cuối cùng cần lưu ý, đó là số lượng cách chọn có thể rất lớn, nên ta cần áp dụng phép cộng số lớn khi cộng các giá trị $cnt$ với nhau. Nếu bạn nào chưa biết tính toán với số lớn thì hãy xem lại chuyên đề số lớn nhé!