# Gà Đẻ Trứng - Editorial

Chú ý kiểu dữ liệu `long long` cho bài này.

### Subtask 1

Khi $n=1$, ta có thể dễ dàng tính được ngay kết quả bằng toán học.

***Độ phức tạp:*** $O(1)$.

### Subtask 2 

Do $x \le 1000,$ ta có thể duyệt từng giá trị thời gian một cho tới khi tìm được giá trị thỏa mãn. Số trứng thu được ở mỗi giá trị thời gian có thể dùng ngay công thức Toán đã có ở subtask $1$.

***Độ phức tạp:*** $O(500000)$.

### Subtask 3

Ta sẽ sử dụng phương pháp chặt nhị phân đáp án. Dễ thấy rằng, thời gian càng lớn thì các thu hoạch được nhiều trứng và ngược lại, vậy nên ta có thể sử dụng chặt nhị phân.

Ta sẽ đặt giá trị $l = 1, r = 10^{18}$ do tối thiếu phải mất $1$ đơn vị thời gian và tối đa là mất xấp xỉ $10^{18}$. Với mỗi giá trị $mid$ khi chặt nhị phân, ta sẽ kiểm tra xem có thu được $\ge x$ quả trứng ở thời điểm đó hay không, nếu có thì cập nhật đáp án và thay đổi $r = mid - 1,$ ngược lại nếu không thỏa mãn thì $l = mid + 1$. Cách kiểm tra số trứng thu được ở một thời điểm giống với subtask $1$.

***Độ phức tạp:*** $O(\log 10^{18})$.