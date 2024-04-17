# Tập Thể Lực - Editorial

Nhận xét rằng, nếu như có thể thêm vào không quá $k$ bài tập sao cho độ khó của cả chương trình nhỏ hơn hoặc bằng một cận trên $x$ nào đó, thì chắc chắn cũng có thể tìm được lời giải cho bài toán với các cận trên lớn hơn $x$ (vì khi độ khó của chương trình càng cao thì số bài tập cần thêm vào càng nhỏ). Vì thế, bài toán này là một bài toán thỏa mãn tính chất tìm kiếm nhị phân: Độ khó chương trình càng nhỏ thì số bài tập cần thêm vào càng nhiều.

Ta sẽ tìm kiếm nhị phân cận trên $x,$ rồi kiểm tra xem có thể tạo ra một chương trình với độ khó nhỏ hơn hoặc bằng $x$ hay không. Ứng với mỗi $x,$ thì ta xét độ khó của mọi cặp bài tập $a_i - a_{i - 1},$ nếu như khoảng cách này lớn hơn $x$ thì ta cần thêm các bài tập vào giữa hai bài tập này. Để khiến cho độ khó của khoảng này giảm xuống nhỏ hơn hoặc bằng $x$ thì ta cần thêm số bài tập là: 

$$\begin{cases}\frac{a_i - a_{i - 1}}{x}; & \text{if } (a_i - a_{i - 1}) \text{ mod } x \ne 0. \\ \frac{a_i - a_{i - 1}}{x} - 1; & \text{if } (a_i - a_{i - 1}) \text{ mod } x = 0.\end{cases}$$

Tính tổng số lượng bài tập cần thêm vào, nếu như tổng số đó không vượt quá $k$ thì kết luận có thể tạo được một chương trình tập với độ khó không vượt quá $x,$ ta giảm $x$ xuống, ngược lại thì tăng $x$ lên.

Khi hai đầu mút của quá trình tìm kiếm nhị phân chạm vào nhau là lúc ta thu được kết quả cuối cùng.

***Độ phức tạp:*** $O\big(n \times \log(10^9)\big)$.