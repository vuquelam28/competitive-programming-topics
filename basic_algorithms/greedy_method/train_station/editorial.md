# Những Nhà Ga - Editorial

Ta nhận xét thấy, mỗi một nhà ga sẽ có danh sách những đoàn tàu đến và đi tại đó, và những đoàn tàu này sẽ không bao giờ dừng đỗ ở các nhà ga khác. Vì vậy, có thể quy việc sắp xếp lịch dừng đỗ thành việc sắp xếp hợp lí ở từng nhà ga, rồi cộng các kết quả tối ưu ở tất cả các nhà ga lại tạo thành kết quả cuối cùng của bài toán.

Với mỗi nhà ga $i,$ gọi danh sách các đoàn tàu sẽ dừng đỗ ở đó là $schedule[i]$ (có thể dùng một mảng lưu hai trường giá trị là thời gian đến - thời gian đi). Sau đó, bài toán sẽ trở thành lập lịch tối ưu trên từng nhà ga, và đó là một bài toán cơ bản có thể giải bằng Tham lam hoặc Quy hoạch động. Ở đây sẽ mô tả cách giải Tham lam:

- **Bước 1:** Sắp xếp lại các đoàn tàu ở một ga theo thời gian rời đi. Giả sử tại ga thứ $i$ có $n_i$ đoàn tàu đăng ký dừng đỗ.
- **Bước 2:** Lựa chọn đoàn đầu tiên vào danh sách các đoàn tàu được chọn. Coi đoàn tàu gần nhất vừa được chọn là đoàn tàu thứ $j$.
- **Bước 3:** Duyệt qua các đoàn tàu từ vị trí $2$ tới vị trí $n_i,$ nếu đoàn tàu nào có thời gian đến $a_i$ lớn hơn hoặc bằng thời gian rời đi của đoàn tàu gần nhất vừa chọn $b_j$ thì lựa chọn nó, rồi cập nhật lại $j = i$. Do các đoàn tàu đã được sắp xếp tăng dần theo thời gian rời đi, nên đoàn tàu được chọn sẽ luôn luôn có thời gian rời đi sớm nhất.

***Độ phức tạp:*** $O(n \log n)$.