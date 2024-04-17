# LCM - Editorial

Công thức tính $\text{LCM}(a,b)$ là $\frac{a \times b}{\text{GCD}(a,b)}$.

Để tính $\text{GCD}(a,b),$ ta có thể dùng *giải thuật Euclid.* Đây là thuật toán khá cơ bản nên tôi sẽ không nhắc lại. Do $a,b$ rất lớn nên ta cần sử dụng tính toán số lớn cho các phép nhân, chia và mod. 

***Độ phức tạp:*** $O(\log b \times \alpha)$ với $\alpha$ là độ phức tạp giải thuật mod hai số lớn. 
