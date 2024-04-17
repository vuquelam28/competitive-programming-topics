# Dịch Chuyển Tức Thời - Editorial

### Subtask 1 + 2

Sử dụng $\text{BFS}$ để tìm đường đi ngắn nhất từ ô xuất phát tới ô đích.

***Độ phức tạp:*** $O(m \times n)$.

### Subtask 3

Dựng đồ thị trên ma trận: Với mỗi ô $(u, v)$ ta sẽ tạo ra danh sách kề của nó gồm bốn ô chung cạnh $(u - 1, v), (u, v - 1), (u + 1, v), (u, v + 1);$ và đồng thời thêm các ô trùng số với nó nếu tồn tại. Sau đó sử dụng $\text{BFS}$ để tìm đường đi ngắn nhất từ ô xuất phát tới ô đích, trên cơ sở đã xây dựng danh sách kề của từng ô. 

Để lưu trữ các ô cùng số thì ta sử dụng thêm một mảng $\text{same\_num}[x]$ kiểu `vector` các `pair` (`tuple` trong Python) để lưu danh sách các ô cùng chứa số $x$. Vậy mỗi khi xét một ô $(u, v);$ ta sẽ có danh sách các ô kề với nó là $(u - 1, v), (u, v - 1), (u + 1, v), (u, v + 1)$ và $\text{same\_num}[a_{u, v}]$. Vì giải thuật $\text{BFS}$ sẽ luôn luôn cho ra đường đi tối ưu tại mỗi lượt lấy ra một đỉnh ở đầu hàng đợi, nên mỗi khi tối ưu từ ô $(u, v)$ sang các ô kề với nó thì ta sẽ hủy luôn danh sách các ô cùng số với nó đi (vì không thể tối ưu thêm nữa).

***Độ phức tạp:*** $O(m \times n)$.

### Subtask 4

Ý tưởng vẫn giống như subtask $3,$ tuy nhiên do subtask này số rất lớn, nên ta buộc phải rời rạc hóa các số trên bảng trước khi tạo danh sách kề.

***Độ phức tạp:*** $O(m \times n)$.