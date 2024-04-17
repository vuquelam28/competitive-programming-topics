# TMatrix - Editorial

Quy bài toán về đồ thị.

Do cạnh có trọng số, nên giờ ta "tạm thời" sử dụng thuật toán Dijkstra.

Ta có nhận xét rằng, nếu đỉnh $(u,v)$ đi tới đỉnh $(x,y)$ bằng cạnh có trọng số $3$ do $u \times v = a(x,y),$ thì ta có thể duyệt một lần các đỉnh $(x',y')$ khác sao cho $a(x,y) = a(x',y')$. Do đang trong quá trình Dijkstra, nên lần update này là tối ưu nhất có thể với các đỉnh $(x',y')$ có cùng $a(x',y')$, vậy nên lần sau nếu gặp giá trị $a(x',y')$, ta không cần xét tới các cạnh trọng số $3$ này nữa.

Từ đó, số cạnh ta cần xét sẽ giảm xuống, đủ để lấy được điểm trong trường hợp $n \times m \le 10^5$.

Để làm được subtask cuối, ta cần nhận xét rằng, do cạnh trọng số lớn nhất bằng $3$, nên "độ dài ngắn nhất" của mọi đường đi trong đồ thị sẽ không quá lớn, ở mức $3 \times n \times m$.

Như vậy, thay vì cần dùng `heap` hay `priority_queue`, ta hoàn toàn có thể bỏ hệ số $\log$ đi bằng cách dùng $3 \times n \times m$ `queue`; ở đây `queu`` thứ $i$ sẽ lưu những đỉnh đang có đường đi ngắn nhất là $i$. Sau đó cứ thực hiện thuật toán như đã trình bày bên trên.