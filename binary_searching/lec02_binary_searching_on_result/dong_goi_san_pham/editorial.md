# Đóng Gói Sản Phẩm - Editorial

Đầu tiên, ta xác định tập ứng viên của nghiệm bài toán: $M \in [1, \sum_{i = 1}^n a_i]$.

Tiếp theo ta xác định hàm kiểm tra: $P(m) \to$  Kiểm tra xem với khối lượng giới hạn của một chiếc hộp là $m,$ thì có thể chứa hết $N$ món hàng bằng tối đa $K$ hộp hay không.
    
Đánh giá hàm $P(m)$: Khi càng tăng $m$ lên, thì số hộp cần dùng càng ít đi $\to$ Khả năng $m$ là nghiệm hợp lệ càng tăng lên. Như vậy, tập giá trị của hàm $P(m)$ sẽ có dạng:
            
$$\text{false false false... false true true true ... true}$$

Do đó, bài toán này thỏa mãn định lý chính của Tìm kiếm nhị phân, và ta sẽ tìm kiếm nhị phân giá trị $m$ nhỏ nhất mà $P(m)$ bằng $\text{true}$.

***Độ phức tạp:*** $O\big(\log (\sum a_i) \times n\big)$.