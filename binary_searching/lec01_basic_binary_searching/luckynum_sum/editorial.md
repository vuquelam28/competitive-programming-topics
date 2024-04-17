# Tổng May Mắn - Editorial

### Subtask 1

Đầu tiên tạo ra tất cả các số may mắn trong đoạn $[l, r]$ và lưu vào một mảng $\text{lucky}$ rồi sắp xếp tăng dần. Việc khởi tạo này có thể dễ dàng làm bằng một vòng lặp với độ phức tạp chỉ bằng số chữ số của $r$. 

Duyệt tất cả các số $i$ trong đoạn $[l, r]$ sau đó tìm kiếm nhị phân để tìm ra số may mắn nhỏ nhất lớn hơn hoặc bằng $i$.

***Độ phức tạp:*** $O\big((r - l + 1) \times \log(r)\big)$.

### Subtask 2

Nhận thấy, các giá trị $\text{next}(i)$ sẽ được chia đều thành các đoạn bằng nhau có giá trị tăng dần khi viết chúng ra thành một dãy liên tiếp với các $i = l \dots r$. Vậy ta có ý tưởng như sau:
- Xuất phát từ giá trị $l,$ tìm giá trị $d = \text{next}(l)$. 
- Sử dụng tìm kiếm nhị phân để tìm giá trị $mid$ lớn nhất thỏa mãn: $d \ge mid$. Tức là mọi giá trị $i \in [l, mid]$ đều có $\text{next}(i) = d,$ do đó kết quả sẽ tăng thêm một lượng $d \times (mid - l + 1)$.
- Gán $l = mid + 1$ và lặp lại từ bước đầu tiên cho tới khi $l > r,$ ta thu được kết quả bài toán.

***Độ phức tạp:*** $O\big(\log(r - l + 1)\big)$.