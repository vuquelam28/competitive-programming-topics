# Đoạn Liên Tiếp Có Tổng Lớn Nhất - Editorial

Subtask $1, 2$ có thể giải trong $O(n^2)$ bằng cách duyệt qua tất cả các dãy con và tính nhanh tổng của chúng bằng mảng cộng dồn.

Để tối ưu bài này, ta cần nhận xét như sau:
- Gọi $s_i$ là tổng các phần tử từ $1$ tới $i$. Ta mặc định $s_0 = 0$.
- Vậy tổng của đoạn con $(i,j)$ sẽ là $s[j] - s[i-1]$. Đây là kĩ thuật mảng tổng tiền tố không có gì mới lạ.

Như vậy, với mỗi vị trí $j$, để tìm đoạn con có tổng lớn nhất kết thúc ở $j,$ ta cần tìm một số $0 \le i < j$ sao cho $s[j] - s[i]$ đạt ***max,*** như vậy dãy con $(i+1,j)$ sẽ đạt ***max***. Do $s[j]$ cố định, vậy ta cần tìm $s[i]$ nhỏ nhất có thể.

Ta có mảng $mn$ với $mn[i]$ là ***min*** của các $s[j]; \forall j \in [0,i]$. Dễ thấy ta có công thức truy hồi: $mn[i] = \text{min}\big(mn[i-1],s[i]\big)$, với $mn[0] = 0$.

Sau khi có mảng $mn$, ta duyệt toàn bộ các vị trí $j \in [1,n];$ lúc này tổng lớn nhất của đoạn con kết thúc ở $j$ sẽ là $\big(s[j] - mn[j-1]\big)$. Ta sẽ cập nhật giá trị này với kết quả. 

***Lưu ý:*** Cần dùng dữ liệu `long long` để tránh tràn số đối với ngôn ngữ C++.

Độ phức tạp: $O(n)$.