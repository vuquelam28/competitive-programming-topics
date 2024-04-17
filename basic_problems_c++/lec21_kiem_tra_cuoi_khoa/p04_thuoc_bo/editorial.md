# Thuốc Bổ - Editorial

Giả sử ta cần thêm vào vạc $a$ lít nước và $b$ lít ma thuật. Thì ta cần thêm sao cho thỏa mãn biểu thức:

$$\frac{b}{b + a} = \frac{k}{100}$$

$$\Leftrightarrow \begin{cases}k = x \times b \\ 100 = x \times (a + b) \end{cases}$$

Mà chúng ta cần số thao tác thực hiện nhỏ nhất, tức là $(a + b)$ nhỏ nhất. Vậy nếu $100 = x \times (a + b)$ thì $x$ phải LỚN NHẤT CÓ THỂ, $x$ lại phải vừa là ước của $100,$ vừa là ước của $k$. Từ đây kết luận $x = \text{GCD}(100, k)$.

Sau khi tính được $x,$ ta thế lại vào biểu thức thì thu được số lượng lít nước và lít ma thuật cộng lại tối thiểu bằng:

$$(a + b) = \frac{100}{x} = \frac{100}{\text{GCD}(100, k)}$$

***Độ phức tạp:*** $O(\log)$.


