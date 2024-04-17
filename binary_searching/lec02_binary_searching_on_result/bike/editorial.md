# Thuê Xe Đạp - Editorial

### Subtask 1  

Ý tưởng của bài là tham lam, giả sử có $k$ người thuê được xe, thì ta sẽ chọn $k$ người đó là $k$ người có nhiều tiền riêng nhất, và thuê cho họ $k$ chiếc xe có giá rẻ nhất (để giảm thiểu tối đa rủi ro về việc không đủ tiền quỹ chung). Với subtask $1$ thì hoàn toàn có thể duyệt qua toàn bộ các giá trị $k = \{m, m - 1,..., 1, 0\}$ và thử xem phương án nào hợp lý.

***Độ phức tạp:*** $O(m \times n)$. 

### Subtask 2

Nhận xét thấy, bài toán này có tính chất tìm kiếm nhị phân: Nếu như có $k$ người có thể thuê được xe thì chắc chắn $\{1, 2,..., k - 1\}$ người cũng có thể thuê được xe. Vì thế ta sẽ tìm kiếm nhị phân số lượng người tối đa thuê được xe.

Giả sử đang xét số người thuê được xe là $lim$. Thử cho $lim$ người có nhiều tiền nhất thuê $lim$ chiếc xe có giá thấp nhất, người càng nhiều tiền thì thuê xe càng đắt hơn. Cách tham lam này chính xác, vì nếu người thứ $i$ không thể thuê được chiếc xe thứ $(lim - i + 1)$ thì anh ta cũng không thể thuê được những chiếc xe đắt hơn, mà anh ta cũng không thể đi thuê chiếc xe rẻ hơn được, vì khi đó anh ta sẽ lấy mất suất thuê xe của người đứng sau. Cách duy nhất để cho $lim$ người này thuê được xe là bù thêm tiền từ quỹ chung, và nếu tổng tiền phải bù thêm bị lớn hơn khoản tiền chung đang có, thì chắc chắn số người thuê được xe phải ít hơn $lim,$ tức là cần giảm $lim$ xuống bằng tìm kiếm nhị phân, ngược lại thì tăng $lim$ lên.

Sau khi đã xác định được số người nhiều nhất có thể thuê được xe, ta sẽ thuê cho họ những chiếc xe rẻ nhất, nhưng dùng trước toàn bộ số tiền ở quỹ chung, nếu thiếu thì mới dùng tới tiền riêng của các thành viên, khi đó số tiền mà họ phải tự bỏ ra sẽ là ít nhất.

***Độ phức tạp:*** $O\big(\text{min}(m, n) \times \log \text{min}(m, n)\big)$.