# Tập Hợp Đẹp - Editorial

### Subtask 1

Duyệt hết tất cả các đỉnh trong tập để kiểm tra. 

***Độ phức tạp:*** $O(N \times Q)$.

### Subtask 2

Cây trong trường hợp này có thể coi như $1$ đường thẳng, các tập cần xét sẽ là $1$ hoặc $2$ (trường hợp ngoài cây con) đoạn liên tiếp.

Ta có thể xử lý mỗi truy vấn theo thuật sau (một thuật toán không hoàn toàn chính xác nhưng có thể chấp nhận được vì sai số rất thấp):
- Chọn ngẫu nhiên $30$ phần tử trong tập.
- Với mỗi phần tử, kiểm tra xem màu của phần tử đó có thỏa mãn không, nếu có, thì đó là kết quả của truy vấn.
- Nếu xét hết $30$ phần tử mà vẫn không tìm được màu thỏa mãn, ta chấp nhận in ra $-1$ với xác xuất sai rất nhỏ $(\frac{1}{2})^{30}$.
- Để kiểm tra $1$ màu có thỏa mãn không, ta có thể lưu mỗi màu $1$ danh sách các vị trí xuất hiện và chặt nhị phân để đếm số lần xuất hiện trong đoạn.

***Độ phức tạp:*** $O(N + Q \times 30 \times \log_2N)$.

### Subtask 3

Ta lưu $2$ mảng $f[i][j]$ là số lần xuất hiện màu $j$ trong cây con gốc $i$ và $g[i][j]$ là số lần xuất hiện màu $j$ trên đường đi từ $1$ đến $i$. Hai mảng này dễ dàng tính được trong quá trình $\text{DFS}$ thăm cây. 

Với mỗi truy vấn, ta kiểm tra cả $2$ màu, số lần xuất hiện của màu $i$ dựa vào công thức:
- Truy vấn loại $1$: $f[u][i]$.
- Truy vấn loại $2$: $f[1][i]-f[u][i]$.
- Truy vấn loại $3$: $f[u][i]+f[v][i] - 2 \times f\big[\text{LCA}(u,v)\big]\big[i\big]+a\big[\text{LCA}(u,v)\big]$;

***Độ phức tạp:*** $O\big((N+Q) \times \log_2N\big)$.

## Subtask 4

Ta dùng thuật toán DFS để duỗi cây ra (tức là xây dựng ***đường đi Euler trên cây***). Chi tiết về thuật toán này các bạn có thể tìm đọc tại <a href="https://vnoi.info/wiki/algo/graph-theory/euler-tour-on-tree.md">đây</a>.

Bây giờ các đỉnh thuộc cây con gốc $u$ nằm liên tiếp nhau trong dãy khi duỗi.

Đến đây, do không có truy vấn loại $3$ nên ta có thể xử lý như trong sub $2$.

***Độ phức tạp:*** $O(N + Q \times 30 \times \log_2 N)$.

### Subtask 5

Đặt $T = \sqrt{N}$.

Với mỗi truy vấn ta chia làm $2$ trường hợp:
- Nếu lực lượng của tập $\le 2T$ ta duyệt trâu để kiểm tra.
- Nếu lực lượng của tập $> 2T \to$ nếu tập đẹp thì tồn tại $1$ màu xuất hiện $>T$ lần. Đến đây ta có thể xử lý như subtask $3,$ nhưng thay vì xét $2$ màu, ta xét hết các màu có số lần xuất hiện trên cây $>T$ lần, có tối đa $\frac{N}{T}$ màu như vậy.

***Độ phức tạp:*** $O\big(N \times \log_2 N + Q \times \sqrt{N}\big)$.