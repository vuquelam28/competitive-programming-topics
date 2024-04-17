# Mã Đi Tuần - Editorial

Vector nghiệm của bài toán: Là một tập các tọa độ gồm $n \times n$ phần tử:

$$a = \big\{(x_1, y_1), (x_2, y_2), (x_3, y_3), \dots, (x_{n \times n}, y_{n \times n})\big\}$$

Tập giá trị khả thi của một tọa độ $(x_i, y_i)$ là:

$$\begin{cases}\text{Là một trong các ô đi tới được từ } (x_{i - 1}, y_{i - 1}) \ (1).\\ 1 \le x_i, y_i \le n. \ (2). \\ \text{Các tọa độ đôi một phân biệt}. \end{cases}$$

Để xử lý điều kiện $(1),$ ta tạo một bảng $\text{step}[8][2]$ là: Bảng gồm 4 hàng 2 cột, với ý nghĩa $\text({step}[i][0] + x_i, step[i][1] + y_i)$ là một bước đi có thể thực hiện khi đứng tại ô $(x_i, y_i)$. Bảng này sẽ lưu độ thay đổi về hàng/cột khi di chuyển từ một ô sang các ô xung quanh nó.

Đi từ một ô $(x, y)$ ta có thể đi sang các tọa độ: $(x - 2, y - 1); (x - 2, y + 1); (x - 1, y + 2); (x + 1, y + 2); (x + 2, y + 1); (x + 2, y - 1); (x + 1, y - 2); (x - 1, y - 2)$. Mảng $\text{step} = \{(-2, -1); (-2, 1); (-1, 2); (1, 2); (2, 1); (2, -1); (1, -2); (-1, -2)\}$.

Để xử lý điều kiện thứ $(2)$ ta chỉ cần viết một hàm kiểm tra xem tọa độ của một ô $(x, y)$ bất kì có nằm trong ma trận hay không.

Điều kiện thứ $(3)$ ta xử lý bằng cách dùng một mảng $\text{visited}[x][y]$ để đánh dấu ô ở hàng $x$ cột $y$ đã đi qua hay chưa? Giá trị của $\text{visited}[x][y]$ sẽ là số hiệu của bước mà ô $(x, y)$ được đi qua.

Sau đó sử dụng mô hình quay lui để sinh ra tất cả các trường hợp có thể của tập nghiệm, nếu tìm được 1 nghiệm thì lập tức dừng thuật toán.

Độ phức tạp: $O(8^{n \times n})$.