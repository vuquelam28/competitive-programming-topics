# Ước Số - Editorial

### Subtask 1

Với yêu cầu thứ nhất, duyệt lần lượt các giá trị $k$ từ $m - 1$ về $1$ để tìm ước nguyên dương lớn nhất của $m$ và không vượt quá $m$. Độ phức tạp $O(m)$.

Với yêu cầu thứ hai, duyệt qua các giá trị $x$ từ $1$ tới $\left \lfloor{\frac{n}{2}} \right \rfloor$ và tính $y = n - x$. Sau đó có thể sử dụng giải thuật Euclid dạng phép trừ để tìm ước chung lớn nhất của $x$ và $y$. Độ phức tạp $O(m^2)$.

***Độ phức tạp:*** $O(m^2)$.

### Subtask 2

Với yêu cầu thứ nhất, duyệt qua mọi giá trị $k$ từ $2$ tới $\sqrt{n},$ nếu $k$ là ước của $n$ thì $\frac{n}{k}$ cũng là ước của $n$. Tìm $\text{max}$ giữa hai giá trị này để thu được kết quả. Độ phức tạp $O(\sqrt{n})$.

Với yêu cầu thứ hai, vẫn duyệt qua các giá trị $x$ từ $1$ tới $\left \lfloor{\frac{n}{2}} \right \rfloor$ và tính $y = n - x,$ sau đó áp dụng giải thuật Euclid ở dạng cải tiến bằng phép chia dư để tìm ước chung lớn nhất của $x$ và $y$. Độ phức tạp $O\big(m.\log(m)\big)$.

***Độ phức tạp:*** $O\big(m.\log(m)\big)$.

