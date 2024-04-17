# Công Ty Du Lịch - Editorial

***Ý tưởng:*** Thay vì đi tìm số lượng khách tối thiểu không được phục vụ, thì ta tìm số lượng khách tối đa có thể hướng dẫn được, rồi lấy tổng số khách trừ đi số lượng khách tối đa được phục vụ để tìm ra kết quả.

Sử dụng duyệt tham lam, ưu tiên chọn các địa điểm sao cho một hướng dẫn viên phải hướng dẫn được càng nhiều khách du lịch càng tốt. Do đó, cần ưu tiên chọn các địa điểm có số khách được hướng dẫn/1 HDV càng nhiều càng tốt để phục vụ trước. Bởi thế, ở mỗi bước duyệt, ta sẽ tìm ra địa điểm đang có số khách tối đa/1 HDV nhiều nhất, sau đó điều HDV tới địa điểm đó để phục vụ khách.

### Subtask 1

Ta duyệt số lượng hướng dẫn viên (HDV) giảm dần từ $n$ về $0,$ mỗi lượt duyệt thì tìm ra địa điểm $p$ có tỉ lệ số khách/1 HDV là lớn nhất ($t_i$ lớn nhất), rồi đếm số lượng HDV cần điều tới địa điểm này để phục vụ hết khách, và giảm số lượng hướng dẫn viên còn lại đi. Cứ làm như vậy cho tới khi số lượng HDV trở về $0$ hoặc đã phục vụ hết toàn bộ khách.

Lưu ý, với mỗi địa điểm trước tiên ta sẽ điều đến một số lượng HDV sao cho mỗi HDV đều được hướng dẫn số khách tối đa, sau đó còn lại khách dư ra ở địa điểm đó thì sẽ xử lý sau. Làm như vậy để đảm bảo ta sẽ luôn lấy được địa điểm có tỉ lệ số khách/1 HDV là cao nhất.

### Subtask 2

Vẫn giữ ý tưởng của subtask 1, tuy nhiên để cải tiến phần tìm ra địa điểm có $t_i$ lớn nhất, các bạn có thể đưa toàn bộ thông số của các địa điểm này vào một Hàng đợi ưu tiên và sắp xếp sao cho phần tử ở trên đỉnh của hàng đợi ưu tiên là địa điểm có $t_i$ lớn nhất. Khi đó thì tốc độ thuật toán sẽ nhanh hơn rất nhiều.





