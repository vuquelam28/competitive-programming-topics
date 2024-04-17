# Siêu Thị Go - Editorial

### Subtask 1

Do $n$ và $q$ khá nhỏ, nên với mỗi khách hàng $i,$ ta thực hiện:

- Tìm vị trí $jmin$ đầu tiên mà $x_i < \sum_{j = p_i}^{jmin} a_j$. Như vậy khách hàng này đầu tiên sẽ mua hết hàng ở các gian hàng từ $p_i$ tới $jmin - 1$ và hẳn nhiên sau khi mua, số tiền còn lại của vị khách sẽ nhỏ hơn $a_{jmin}$.
- Tiếp tục đi từ $jmin + 1$ tới $n,$ nếu khách hàng có thể mua món hàng nào thì ta trừ luôn số tiền còn lại với giá hàng ở gian hàng đó, cho tới khi $x_i = 0$ hoặc đã đi hết tới gian hàng cuối cùng.

***Độ phức tạp:*** $O(n \times q)$.

### Subtask 2

Dựa vào ý tưởng của subtask $1,$ tuy nhiên ta sẽ liên tục "nhảy" đến gian hàng nhỏ nhất mà vị khách có đủ tiền để mua hàng (hiểu nhiên là nằm bên phải gian hàng hiện tại) cho đến khi đi đến gian hàng cuối cùng, chứ không đi tuần tự từng gian hàng. Nhận xét rằng số bước nhảy sẽ nhỏ hơn $a_{jmin},$ do số tiền còn lại nhỏ hơn $a_{jmin}$.

Để thực hiện việc tìm vị trí $jmin$ nhanh, gọi $d[i]$ là tổng giá các món hàng của các gian hàng từ $1$ đến $i$. Khi đó, tổng giá của các món hàng từ gian hàng $l$ đến gian hàng $r$ là $d[r] - d[l - 1]$ (đây là kĩ thuật mảng tổng tiền tố). Từ đó, ta có thể chặt nhị phân để tìm vị trí $jmin$ trong $O(\log n)$.

Sau khi tìm được vị trí $jmin,$ để thực hiện việc "nhảy", ta gọi $nxt[i][x]$ là vị trí $k$ nhỏ nhất nằm bên phải $i$ mà $a_k \leq x$ (nếu không tồn tại vị trí như thế thì $nxt[i][x] = n + 1$). Ta sẽ khởi tạo trước mảng $nxt$ với tất cả các vị trí $i = 1...n$ và mọi giá trị $x = 0...\text{max}(a_i)$ trong $O(n \times a_i)$ theo công thức truy hồi:  

$$\begin{cases}nxt[i][x] = nxt[i + 1][x]; & \text{nếu } x < a_i \\ nxt[i][x] = i; & \text{nếu } x \ge a_i \end{cases}$$

Khi đó, mỗi bước nhảy có thể được thực hiện dễ dàng trong $O(1)$ bằng cách liên tục di chuyển $jmin = nxt[i][x]$ với $x$ là số tiền còn lại của vị khách đang xét, rồi gán $x = x - a_i$. Liên tục thực hiện như vậy cho tới khi $jmin > n$.

***Độ phức tạp:*** $O\big(n \times (\log n + a_i)\big)$.