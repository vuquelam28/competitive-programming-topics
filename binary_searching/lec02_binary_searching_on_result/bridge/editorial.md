# Xây Cầu - Editorial

***Nhận xét:*** Giả sử xây được một cây cầu có độ rộng là $mid$ và có số hàng lớn hơn bằng $M$ thì chắc chắn cũng sẽ xây được cây cầu có độ rộng nhỏ hơn $mid$ và vẫn có số hàng lớn hơn bằng $M$. Vậy ta sẽ tìm kiếm nhị phân chiều rộng lớn nhất có thể. Giả sử xây một cây cầu có độ rộng lớn hơn hoặc bằng mid thì:

- Đặt $dp[i][j]$ là số hàng tối đa xây được nếu như sử dụng $i$ khối gỗ kích thước $A$ và $j$ khối gỗ kích thước $B$. Thử xây một hàng bằng $k$ khối gỗ loại $A \ (1 \le k \le i)$ thì số lượng khối gỗ loại $B$ cần dùng là $t = \frac{(mid - k \times A + B - 1)}{B} \cdot$ Công thức quy hoạch động: $dp[i][j] = \text{max}\big(dp[i][j], dp[i - k][j - t] + 1\big)$.
- Cơ sở qhđ: $dp[i][0] = \frac{i}{\big[(mid + A - 1) / A\big]}, dp[0][j] = \frac{j}{\big[(mid + B - 1) / B\big]} \cdot$

Sau khi tính xong các $dp[i][j],$ nếu $dp[X][Y] \ge M$ có nghĩa là xây được một cây cầu có tối thiểu $M$ hàng, vậy ta tăng độ rộng của cầu lên, ngược lại giảm độ rộng cầu xuống.

