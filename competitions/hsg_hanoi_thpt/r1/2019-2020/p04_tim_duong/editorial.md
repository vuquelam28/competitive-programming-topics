# Tìm Đường - Editorial

Do hai subtask vẫn giữ nguyên ý tưởng thuật toán và chỉ đổi cấu trúc dữ liệu (mảng 2 chiều thành `map`, nên chúng ta sẽ nói luôn về subtask 2).

# Subtask 2 

Đề bài yêu cầu ta tìm đường đi ngắn nhất tới vị trí của robot, với việc trọng số mỗi lần di chuyển là $1$, vậy nên, dễ thấy ý tưởng chủ đạo sẽ xoay quanh thuật toán $\text{BFS}$.

Đầu tiên ta sẽ tới với bước xây đồ thị:
- Ta coi mỗi điểm trên trục tọa độ là một đỉnh của đồ thị, vậy ta sẽ xuất phát từ đỉnh $(0,0)$ và cần đi tới đỉnh $(u,v)$ - với $(u,v)$ là tọa độ của robot.
- Với việc xây cạnh, ta sẽ tiến hành như sau:
    - Gọi hai biến $(u,v)$ là tọa độ đang xét hiện tại. Đầu tiên $(u,v)$ = $(0,0)$.
    - Tiếp đó, ta xét từng phần tử trong đường đi đã cho (tức là duyệt qua từng kí tự trong chuỗi input):
        - Nếu phần tử đó là $D$ ta nối cạnh 2 chiều giữa $(u,v)$ và $(u,v+1)$. Sau đó tăng $v$ lên $1$.
        - Nếu phần tử đó là $N$ ta nối cạnh 2 chiều giữa $(u,v)$ và $(u-1,v)$. Sau đó giảm $u$ đi $1$.
        - Nếu phần tử đó là $T$ ta nối cạnh 2 chiều giữa $(u,v)$ và $(u,v-1)$. Sau đó giảm $v$ đi $1$.
        - Nếu phần tử đó là $B$ ta nối cạnh 2 chiều giữa $(u,v)$ và $(u+1,v)$. Sau đó tăng $u$ lên $1$.
    - Có thể thấy, sau khi duyệt toàn bộ các phần tử của chuỗi input thì $(u,v)$ chính là vị trí đứng cuối cùng của $robot$.

Tuy nhiên, do $u,v$ có thể lên tới $10^4$ hoặc $-10^4$, ta không thể dùng mảng hai chiều để lưu tập cạnh kề của mỗi đỉnh được. Thay vào đó, ta sẽ sử dụng một `std::map < pair < int, int >, vector < pair < int, int > > >` để biểu diễn tập cạnh kề.

Sau khi xây xong cạnh, ta chỉ việc thực hiện thuật toán $\text{BFS}$ như bình thường, tuy nhiên cần dùng `std::map < pair <int, int>, int>` để lưu lại các giá trị như $vis$ (xem một đỉnh đã được tới hay chưa), hay $d$ (đường đi ngắn nhất tới một đỉnh), bởi nếu dùng mảng 2 chiều sẽ dẫn tới tràn bộ nhớ.

***Độ phức tạp:*** $O(|S| \times \log)$.
