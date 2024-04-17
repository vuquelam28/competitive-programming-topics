# Hình Vuông Con - Editorial

### Subtask 1

Xét toàn bộ các hình vuông con kích thước $k \times k$. Với mỗi hình vuông con lại đi tìm giá trị nhỏ nhất của nó bằng hai vòng lặp nữa, rồi chọn ra giá trị nhỏ nhất là lớn nhất.

Độ phức tạp: $O(k \times m^2 \times n^2)$.

### Subtask 2

Gọi $x$ là giá trị nhỏ nhất của một hình vuông con trong ma trận đã cho. Xét hàm $P(x)$ là hàm kiểm tra điều kiện: Có tồn tại hình vuông con nào kích thước $k \times k$ mà mọi giá trị của hình vuông con đó lớn hơn hoặc bằng $x$ hay không. Dễ dàng nhận thấy, khi càng tăng $x$ lên thì khả năng hàm $P(x) = \text{true}$ càng giảm đi do ràng buộc kiểm tra khi đó sẽ càng chặt hơn. Nghĩa là, sẽ tồn tại một vị trí $x_0$ thỏa mãn:
$$P(x_0 + 1...x_{max}) = \text{false}; P(x_{min}...x_0) = \text{true}$$

Đồng nghĩa với việc giá trị $x$ là một giá trị có thể thực hiện tìm kiếm nhị phân. Ta sẽ tìm kiếm nhị phân giá trị $x_0,$ trong đoạn $[0, 10^6]$ với mục tiêu là kéo càng nhỏ $x$ càng tốt để tìm được một ma trận có cận dưới của các giá trị là $x_0,$ thì khi đó giá trị nhỏ nhất của ma trận tìm được sẽ là lớn nhất.

Xét mỗi giá trị $x,$ xây dựng một ma trận $B$ với ý nghĩa:
$$\begin{cases}b[i][j] = 1; \text{nếu } a_{i, j} \ge x. \\ b[i][j] = 0; \text{otherwise}. \end{cases}$$

Như vậy, ta chỉ cần tìm ra một hình vuông con kích thước $k \times k$ trên ma trận $B$ thỏa mãn: Tổng của hình vuông con đó đúng bằng $k \times k,$ tức là đã tìm được một hình vuông con thuộc ma trận $A$ mà toàn bộ các phần tử của nó đều lớn hoặc bằng $x$. Khi đó ta xác định $P(x) = \text{true}$ và tiếp tục điều chỉnh khoảng tìm kiếm $x$ lên phía trên. 

Để tính nhanh tổng của các ma trận con thuộc ma trận $B,$ ta lại sử dụng kĩ thuật quy hoạch động tính tổng hình chữ nhật.

Kết thúc quá trình tìm kiếm nhị phân ta sẽ thu được $x_0$ là kết quả cần tìm.

***Độ phức tạp:*** $O\big(\log(10^6) \times m \times n\big)$.