# BNumber - Editorial

Sử dụng tìm kiếm nhị phân để tìm đáp án bài toán.

Vói một số $d$ bất kì, số lượng số đẹp nhỏ hơn hoặc bằng $d$ là $⌊\frac{d}{3}⌋ + ⌊\frac{d}{5}⌋  - ⌊\frac{d}{15}⌋$. (Kí hiệu $⌊x⌋$ là phần nguyên: $⌊6.8⌋ = 6$, $⌊5⌋ = 5$). Như vậy, ta có thể tìm ra số $d$ nhỏ nhất thỏa mãn từ $1$ tới $d$ có tối thiểu $k$ số đẹp, đó chính là kết quả bài toán. Ta có thể tìm kiếm $d$ trong đoạn $[1, 10^{16}]$.

***Độ phức tạp:*** $O(\log 10^{16})$.