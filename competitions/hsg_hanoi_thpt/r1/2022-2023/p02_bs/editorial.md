# Bảng Số - Editorial

Bài toán có thể diễn giải lại như sau: tìm số cặp $(i, j)$ thỏa mãn $i \times j = x$ với $1 \le i \le n, 1 \le j \le n$.

Từ đó, có thể duyệt qua tất cả các ước của $x$ trong đoạn $\big[1..\sqrt{x}\big]$. Nếu khi duyệt gặp $u$ là ước của $x,$ gọi $v = \frac{n}{u},$ ta cần kiểm tra xem nếu $1 \le u \le n$ và $1 \le v \le n$ thì tăng $ans$ lên $2$ đơn vị nếu $u \neq v$ - nghĩa là tồn tại hai cặp $(u, v)$ và $(v, u),$ lên $1$ đơn vị nếu $u = v$.

***Độ phức tạp:*** $O({\sqrt{x}})$.