# Trò Chơi Thả Thính - Editorial

Bạn chỉ cần sử dụng xem kẽ hai biểu tượng cảm xúc có độ hạnh phúc lớn nhất và lớn nhì, gọi hai giá trị đó là $x$ và $y$ ($x \ge y$). Để tìm ra hai giá trị này thì ta chỉ cần sắp xếp lại mảng.

Chúng ta có một phương án chơi tối ưu như sau: sử dụng biểu tượng cảm xúc giá trị $x \ k$ lần, còn lại sử dụng một giá trị $y,$ sau đó lại sử dụng $x$ đủ $k$ lần và tiếp tục, $\dots$

Vậy một "chu kì" sử dụng có độ dài $k + 1$ và ta sử dụng các biểu tượng giá trị $x$ trong các lần còn lại. Kết quả là: 

$$\left\lfloor{\frac{m}{k+1}}\right\rfloor \times (x \times k + y) + x \times \big[m \text{ mod } (k + 1)\big]$$

***Độ phức tạp:*** $O(n \times \log n)$.



