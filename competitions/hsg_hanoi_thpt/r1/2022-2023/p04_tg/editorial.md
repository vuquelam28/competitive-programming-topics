# Trạm Gác Trung Tâm - Editorial

### Subtask 1

Với subtask này, ta cần tìm cách để cho $n$ đỉnh của đồ thị liên thông và tổng trọng số cạnh nhỏ nhất. Đây chính là bài toán tìm cây khung nhỏ nhất, có thể sử dụng thuật toán Kruskal hoặc Prim.

***Độ phức tạp:*** $O(N \times log{N})$.

### Subtask 2

Nhận xét: Đồ thị kết nối $k$ đỉnh đặc biệt sẽ là một đồ thị dạng cây gồm $k$ đỉnh đặc biệt đó và một vài đỉnh phụ.

Ta tính trước đường đi ngắn nhất qua bất kì hai đỉnh bằng thuật toán Floyd-Warshall trong $O(N^3)$ và lưu vào mảng $dist$.

Gọi $dp_{mask, i}$ là tổng trọng số của cây kết nối tập $mask$ đỉnh đặc biệt có gốc là đỉnh $i$.

Với mỗi $dp_{mask, i},$ ta cần duyệt qua tất cả các tập con của tập $mask,$ gọi là $X$. Gọi $Y = \{mask \setminus X\}$. Với cây con gốc $i$ chứa tập $X$ đỉnh đặc biệt và cây con gốc $i$ chứa tập $Y$ đỉnh đặc biệt, ta có thể gộp chúng lại thành cây con gốc $i$ chứa tập $mask$ đỉnh đặc biệt. Cập nhật $dp_{mask, i} = \text{min}(dp_{X, i} + dp_{Y, i})$.

Duyệt qua $n$ đỉnh. Xét đỉnh $u,$ nếu $dp_{mask, u} < dp_{mask_i} + dist_{u, i},$ cập nhật lại $dp_{mask, u} =  dp_{mask_i} + dist_{u, i}$. (Ở đây ta lấy cây gốc $i$ làm cây con gắn vào đỉnh $u$ để tạo thành cây gốc $u$).

***Độ phức tạp:*** $O(N^3 + 3^N \times N + 2^N \times N^2)$.