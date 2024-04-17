# Hình Chữ Nhật - Editorial

### Subtask 1

Sử dụng bốn vòng lặp để duyệt qua tất cả các bộ bốn điểm, kiểm tra xem bốn điểm đó có tạo thành một HCN hay không.

***Độ phức tạp:*** $O(n^4)$.

### Subtask 2

Sắp xếp các điểm theo thứ tự tăng dần của hoành độ, nếu hoành độ bằng nhau thì tăng dần theo tung độ.

Sau khi sắp xếp, trên danh sách điểm lúc này sẽ phân thành các đoạn liên tiếp có hoành độ bằng nhau. Lúc này, ta xử lý như sau:
- Gọi $\text{start}[i]$ là vị trí bắt đầu của đoạn chứa các điểm có hoành độ bằng với hoành độ của điểm thứ $i$.
- Gọi $\text{mark}[y1][y2]$ là số lượng cặp điểm có tung độ là $(y_1, y_2)$. Mảng này sẽ chỉ cập nhật đếm số cặp điểm tính đến trước vị trí $\text{start}[i]$ trong quá trình duyệt $i$.

Duyệt qua các cặp điểm $(p_1, p_2)$ có cùng hoành độ bằng cách duyệt $p_1$ từ $2$ tới $n$ và duyệt $p_2$ từ $\text{start}[p_1]$ tới $p_1 - 1$. Ta nhận thấy rằng, cần tìm ra cặp $(p_3, p_4)$ ở phía trước $(p_1, p_2)$ thỏa mãn:

$$p_3.y = p_1.y; p_4.y = p_2.y; p_3.x = p_4.x$$

Mảng $\text{mark}$ sẽ sử dụng để đếm số lượng cặp $(p_3, p_4)$ thỏa mãn điều kiện trên. Trong quá trình duyệt $(p_1, p_2),$ ta sẽ cộng thêm số lượng cặp điểm $(p_3, p_4)$ chính bằng $\text{mark}[p_1.y][p+2.y]$ vào kết quả. Sau mỗi lần cộng thì đếm phân phối luôn $\text{mark}[p_1.y][p_2.y]$ tăng thêm $1$ đơn vị.

***Độ phức tạp:*** $O(n^2)$.