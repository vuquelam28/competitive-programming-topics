# Tìm Đường - Editorial

Chặt nhị phân giá trị chênh lệch nhỏ nhất. Giả sử giá trị chặt nhị phân là $limit$.

Với mỗi ràng buộc $limit$ ta vận dụng $\text{BFS}$ để tìm đường đi, nhưng chỉ di chuyển giữa hai ô nếu như chênh lệch của chúng không vượt quá $limit$. Nếu như đi được tới đích thì ta giảm $limit$ xuống, ngược lại tăng $limit$ lên. Bằng cách này cuối cùng sẽ xác định được $limit$ nhỏ nhất.

***Độ phức tạp:*** $O\big(\log \times (m + n)\big)$.