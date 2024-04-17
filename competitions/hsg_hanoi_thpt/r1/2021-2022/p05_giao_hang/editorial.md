# Giao Hàng - Editorial

Để giải được bài toán này, ta sẽ áp dụng thuật toán ***tham lam.***

Nhận thấy rằng, ta có thể chia bài toán ra thành hai pha riêng biệt. Pha đầu tiên ta sẽ chọn $x$ nhân viên vào kho $1$ và $t-x$ người vào kho hai. Sau đó sẽ tối ưu cách giao hàng tới các địa điểm và lấy $min$ kết quả. Vậy ta có thể thực hiện các pha này như thế nào?

Gọi tập $a$ là tập hợp gồm các nhân viên đang đi tới kho $1$, $b$ là tập các nhân viên đang đi tới kho $2$, $c$ là tập các nhân viên đang không được giao việc.

Đầu tiên, ta sẽ chọn $t$ nhân viên đi tới kho $1$, và từ kho $1$ sẽ giao tới $t$ địa điểm nhận hàng. Gọi giá trị $cur$ là chi phí cho sự lựa chọn này. Gán biến kết quả $res = cur$.

Gọi $a[i] = (x,y)$ là khoảng cách nhân viên $i$ tới kho $1$ và kho $2$. Ta sắp xếp các $a[i]$ theo $x$ tăng dần.
Gọi $b[i] = (x,y)$ là khoảng cách địa điểm $i$ tới kho $1$ và kho $2$. Ta sắp xếp các giá trị $b[i]$ theo $(y-x)$ tăng dần.

Từ giờ, ta sẽ dần dần ***chuyển*** một nhân viên vào kho $2,$ ***giảm*** một nhân viên tới kho $1$ và ***hủy*** một đơn hàng giao từ kho $1$ thành giao từ kho $2$, và tính lại khoảng cách quãng đường.

Ta sẽ duyệt mọi giá trị $i$ trong khoảng $[1,t]$, mỗi bước ta có hai lựa chọn:
- ***Lựa chọn 1:*** Chuyển một nhân viên từ tập $s1$ sang $s3$ và một nhân viên từ $s3$ sang $s2$:
    - Để chuyển tối ưu, ta sẽ lấy nhân viên có giá trị $q = a[i].x$ lớn nhất trong tập $a$ để chuyển sang $c$, và lấy nhân viên có giá trị $p = a[i].y$ nhỏ nhất trong tập $c$ để chuyển sang $b$. 
    - Độ tăng giá trị của lựa chọn này sẽ là $(p-q)$.
- ***Lựa chọn 2:*** Chuyển một nhân viên từ tập $s1$ sang tập $s2$:
    - Để chuyển tối ưu, ta sẽ lấy nhân viên có giá trị $(a[i].y - a[i].x)$ nhỏ nhất để chuyển.
    - Độ tăng giá trị của lựa chọn này sẽ là $(a[i].y - a[i].x)$.
    
Ta sẽ xem xét lựa chọn nào là tối ưu nhất về đương đi trong hai lựa chọn trên. Gọi $\Delta = $ chi phí tăng lên nhỏ nhất trong hai lựa chọn, vậy lúc này tổng chi phí sẽ là:
- $cur = cur + \Delta$ (chi phí chuyển một nhân viên tới kho $2$ và giảm một nhân viên tới kho $1$).
- $cur = cur + \big(b[i].y - b[i].x\big)$ (chi phí hủy một đơn hàng giao tới địa điểm $i$ từ kho $1$ và chuyển thành giao từ kho $2$).
- Ta sẽ cập nhất $res$ cho kết quả bằng cách lấy min các giá trị $cur$.

Để xử lý các thao tác một cách nhanh nhất, ta cần:
- Nhận thấy tập $b$ không cần quan tâm do ta không lấy giá trị ra từ nó, vậy nên ta không cần kiểm soát tập này.
- Tập $a$ ta sẽ lưu bằng hai `set` như sau:
    - `set` đầu tiên sắp xếp theo thứ tự tăng dần của $a[i].x$. (phục vụ lựa chọn một)
    - `set` thứ hai sắp xếp theo thứ tự tăng dần của $a[i].y-a[i].x$. (phục vụ lựa chọn hai)
    - Tập $c$ ta chỉ cần lưu bằng một `set` sắp xếp theo $a[i].y$ tăng dần.
- Lúc này những thao tác tìm $x$ lớn nhất, $y$ bé nhất, $y-x$ bé nhất,  xóa phần tử khỏi tập và thêm phần tử vào tập chỉ mất $O(log)$ mỗi lần.

***Độ phức tạp:*** $O(n \times \log)$.