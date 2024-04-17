# Chơi Bóng Chày - Editorial

### Subtask 1

Sắp xếp các con bò đứng tăng dần theo tọa độ. Sau đó, sử dụng ba vòng lặp để xét mọi bộ ba $(X, Y, Z),$ kiểm tra xem bộ ba đó có phải một bộ ba hợp lệ với yêu cầu bài toán hay không. Độ phức tạp giải thuật là $O(n^3)$.

### Subtask 2

Duyệt hai vòng for để xét mọi cặp $(X, Y)$. Nhận xét thấy, các vị trí $Z$ hợp lệ có thể ghép với cặp $(X, Y)$ này phải thỏa mãn: 

$$XY \le YZ \le 2.XY$$

Do các chú bò đã được sắp xếp tăng dần theo vị trí, nên đồng nghĩa với việc các con bò $Z$ hợp lệ sẽ đứng thành một đoạn liên tiếp. Chặt nhị phân để tìm ra vị trí $Z_{min}$ nhỏ nhất và vị trí $Z_{max}$ lớn nhất thỏa mãn:
$$XY \le YZ_{min} \le YZ_{max} \le 2XY$$

Tổng của tất cả các giá trị $Z_{max} - Z_{min} + 1$ với mọi cặp $(X, Y)$ sẽ là kết quả của bài toán. Độ phức tạp giải thuật rút xuống còn $O\big(n^2.\log(n)\big)$.