# Phát Đồng Xu - Editorial

### Subtask 1

Ứng với mỗi truy vấn, các bạn duyệt từng vị trí từ $l$ tới $r$ và tăng số lượng đồng xu nhận được ở các vị trí đó lên $1$ đơn vị trên một mảng. Sau đó tìm ra phần tử lớn nhất trong mảng đó và số lượng phần tử lớn nhất.

***Độ phức tạp:*** $O(n \times m)$.

### Subtask 2

Ứng với mỗi truy vấn, thay vì duyệt từ $l$ tới $r,$ thì ta áp dụng kĩ thuật update tăng đoạn kiểu "lười" trên một mảng $cnt[n + 1]$ như sau:
$$cnt[l] = cnt[l] + 1; cnt[r + 1] = cnt[r + 1] - 1$$

Riêng đối với các truy vấn cập nhật có $l > r,$ ta có thể tách làm 2 đoạn là $[l, n]$ và $[1, r]$ rồi làm theo cách trên.

Sau khi update xong toàn bộ các truy vấn theo cách trên, ta duyệt lại một lần các vị trí $i$ từ $1$ tới $n$ và cập nhật:
$$cnt[i] = cnt[i] + cnt[i - 1]$$

Như vậy, toàn bộ mảng $cnt$ sẽ được cập nhật chính xác. Nhiệm vụ cuối cùng ta chỉ cần đi tìm số lớn nhất trên mảng và số lượng số như vậy.

***Độ phức tạp:*** $O\big(\text{max}(m, n)\big)$.

### Subtask 3

Cách làm ở subtask 2 sẽ không thực hiện được với $n \le 10^9$ vì vừa gây tràn bộ nhớ mảng vừa không thể duyệt bằng 1 vòng lặp. Để cải tiến, thay vì duyệt toàn bộ các vị trí từ $1$ tới $n,$ thì ta sẽ sử dụng cấu trúc dữ liệu `map` để đánh số lại các đầu mút của truy vấn cập nhật tăng.

Để dễ hình dung, xét một ví dụ như sau: Giả sử ta có các truy vấn lần lượt là $[1, 5], [2, 20], [3, 10^9], [15, 10^8]$. Nếu như làm theo cách ở subtask 2 thì ta phải duyệt từ $1$ tới $10^9$ để update lại các vị trí trên mảng $cnt,$ hoàn toàn không khả thi. Thay vào đó, ta sẽ ném tất cả các đầu mút của các truy vấn cập nhật vào một mảng mới và đánh số lại chúng. Ta biết rằng, một truy vấn cập nhật $[u, v]$ thì thao tác thay đổi sẽ diễn ra ở $cnt[u]$ và $cnt[v + 1],$ vì thế ta sẽ ném hai giá trị $u$ và $v + 1$ vào một mảng mới là $pos$ rồi sắp xếp chúng lại (lưu ý lọc các giá trị trong mảng $pos$ tránh để bị trùng nhau, ví dụ hai lần đầu mút $1$ bị lặp lại). Hai mảng $pos$ và $cnt$ được mô tả như hình bên dưới, kèm theo chỉ số của các phần tử:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/WbNmrobh.png)
</center>

Và sau khi được update lại bằng một vòng lặp (giả định là ta có thể duyệt như vậy) thì trạng thái $cnt$ sẽ như thế này:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/VHaeYdbp.png)
</center>

Ý nghĩa của bảng $cnt$ trên sẽ là: 
- Vị trí $pos[1] = 1$ nhận được $1$ đồng xu.
- Vị trí $pos[2] = 2$ nhận được $2$ đồng xu.
- Các vị trí từ $pos[3] = 3$ tới $pos[4] - 1 = 5$ nhận được $3$ đồng xu.
- Các vị trí từ $pos[4] = 6$ tới $pos[5] - 1 = 14$ nhận được $2$ đồng xu.
- Các vị trí từ $pos[5] = 15$ tới $pos[6] - 1 = 20$ nhận được $3$ đồng xu.
- Các vị trí từ $pos[6] = 21$ tới $pos[7] - 1 = 10^8$ nhận được $2$ đồng xu.
- Các vị trí từ $pos[7] = 10^8 + 1$ tới $pos[8] - 1 = 10^9$ nhận được $1$ đồng xu.

Như vậy, với một cặp vị trí $(i, i + 1)$ trên mảng $pos$ thì rõ ràng ta biết rằng, toàn bộ những người từ vị trí $pos[i]$ tới $pos[i + 1] - 1$ đều sẽ nhận được số đồng xu cùng bằng $cnt[i],$ hoàn toàn không cần phải duyệt toàn bộ các vị trí để update lại. Vì vậy, ta chỉ cần cộng dồn từ trước ra sau trên mảng $cnt$ để có được số đồng xu ở các đoạn vị trí liên tiếp nhau, đồng nghĩa với việc ta chỉ cần update ở các vị trí tương ứng với từng cặp $(l, r)$ trên mảng $cnt$.

Vấn đề đặt ra bây giờ là, ứng với một truy vấn $(l, r)$ thì làm sao để biết $l$ và $r$ tương ứng với vị trí số mấy trên mảng $cnt?$ Cách làm là ta sử dụng `map` $\text{new\_id}$ để đánh số lại các vị trí $l, r$ thành các $id$ tương ứng trên mảng $cnt$. Chẳng hạn, $\text{new\_id}[1] = 1, \text{new\_id}[6] = 4, \text{new\_id}[10^8 + 1] = 7, \dots$ Sau bước này, thì với mỗi cặp $(l, r)$ ta chỉ cần tiến hành update như sau:

$$\begin{cases} cnt\big[\text{new\_id}[l]\big] = cnt\big[\text{new\_id}[l]\big] + 1 \\ cnt\big[\text{new\_id}[r + 1]\big] = cnt\big[\text{new\_id}[r + 1]\big] - 1 \end{cases}$$

Công việc còn lại chỉ là cộng dồn từ đầu tới cuối mảng $cnt$ và tiến hành xử lý tìm kết quả dựa vào các gợi ý đã cho ở trên.

******Độ phức tạp:****** $O(m)$.

