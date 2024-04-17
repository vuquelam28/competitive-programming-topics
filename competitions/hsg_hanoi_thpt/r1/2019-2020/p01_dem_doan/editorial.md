# Đếm Đoạn - Editorial

### Subtask 1

Ta có công thức tính nhanh tổng các số nguyên trong đoạn $[l,r]$ như sau:
$$f(l,r) = \frac{(r-l+1) \times (r+l)}{2}$$

Do $n \le 10^4,$ ta có thể thử từng đoạn $[l,r]$ xem $f(l,r) = n$ hay không.

***Độ phức tạp:*** $O(n^2)$.

# Subtask 2

Với $n \le 10^8,$ lần này ta sẽ dùng vòng lặp duyệt qua tất cả các giá trị $l$ trong đoạn $[1,n]$. 

Với mỗi giá trị $l$ tương ứng, ta giải phương trình nghiệm $r$ thỏa mãn:
$$\frac{(r-l+1) \times (r+l)}{2} = n$$

Nếu $r$ là một số nguyên dương và $r \ge l,$ đó là một kết quả thỏa mãn.

***Độ phức tạp:*** $O(n)$.

# Subtask 3

Xét phương trình nghiệm nguyên hai ẩn: $\frac{(r-l+1) \times (r+l)}{2} = n$. Biến đổi ta được:

$$(r-l+1) \times (r+l) = 2n$$

Nhiệm vụ của chúng ta là tìm tất cả các cặp nghiệm nguyên dương $(l,r) \ (l\le r)$ của hệ phương trình này. Do $2n$ là một số nguyên dương nên:
- Chắc chắn $(r-l+1)$ và $(r+l)$ là ước của $2n$.
- Nói cách khác, giả sử $(r-l+1) = x$ là ước của $2n,$ thì $(r+l) = \frac{2n}{x}$.

Ta có hệ phương trình:
$$
    \begin{cases}
        r-l+1 = x \\
        r+l = \frac{2n}{x}
    \end{cases}
$$

$$ \Leftrightarrow
    \begin{cases}
        2r + 1= x + \frac{2n}{x} \\
        2l - 1 = \frac{2n}{x} - x 
    \end{cases}
$$

Tới đây, ta rút ra được rằng, để hệ phương trình có cặp nghiệm nguyên dương cần thỏa mãn các điều kiện sau:
- $x \le \frac{2n}{x}$.
- $x + \frac{2n}{x}$ là số lẻ.

Nếu hai điều kiện trên thỏa mãn thì luôn luôn ta có $l \le r$. Như vậy, ta có thuật toán như sau:
- Đặt $m = 2n$.
- Xét mọi $x$ trong đoạn $[1,\sqrt{m}]$.
- Nếu $m$ chia hết cho $x,$ ta kiểm tra xem $x+\frac{m}{x}$ có phải số lẻ hay không, nếu có thì cộng thêm $1$ vào đáp án.

***Độ phức tạp:*** $O(\sqrt{n})$.