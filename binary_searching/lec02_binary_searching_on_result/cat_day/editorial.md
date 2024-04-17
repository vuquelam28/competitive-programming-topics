# Cắt Dây - Editorial

### Subtask 1

Gọi độ dài đoạn dây có thể cắt là $L,$ thì $1 \le L \le \text{min}(l_i)$. Ta lại biết rằng, một đoạn dây có độ dài $l_i$ thì sẽ cắt được thành $\left\lfloor{\frac{l_i}{L}}\right\rfloor$ đoạn dây có độ dài $L$. Vì vậy, chỉ cần duyệt qua mọi giá trị $L$ có thể, rồi tính tổng số đoạn dây cắt được theo công thức:

$$total = \sum_{i = 1}^n \left\lfloor{\frac{l_i}{L}}\right\rfloor$$

Nếu $total \ge K$ thì ta kết luận ngay giá trị $L$ lớn nhất. Để làm được như vậy ta cần duyệt $L$ từ lớn về nhỏ.

***Độ phức tạp:*** $O\big(\text{min}(l_i) \times n\big)$.

### Subtask 2

Nhận xét thấy, nếu như một độ dài $L$ thỏa mãn là nghiệm của bài toán, thì khi cắt các đoạn dây với độ dài $L - 1$ lại càng có thể thỏa mãn bài toán (độ dài đoạn dây cắt ra nhỏ đi thì số lượng đoạn cắt được càng tăng lên). Do đó, ta có thể tìm $L$ lớn nhất bằng cách tìm kiếm nhị phân. Các bước còn lại vẫn tương tự.

***Độ phức tạp:*** $O\big(\log \text{min}(l_i) \times n\big)$.