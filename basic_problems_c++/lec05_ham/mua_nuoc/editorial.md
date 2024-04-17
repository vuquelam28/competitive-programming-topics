# Mua Nước - Editorial

Nếu $b \ge a \times 2$ thì ta sẽ mua $n$ chai nước loại $1$ lít. 

Ngược lại ta mua $\lfloor \frac{n}{2} \rfloor$ chai nước loại $2$ lít, nếu $n$ lẻ thì ta mua thêm $1$ chai nước loại $1$ lít.

***Chứng minh:***

- Nếu như chỉ mua chai $1$ lít, ta tốn số tiền là:
    $$a \times n = 2 \times a \times \left\lfloor \frac{n}{2} \right\rfloor + (n \text{ mod } 2) \times a$$

- Nếu mua kết hợp, ta sẽ mua $\left\lfloor \frac{n}{2} \right\rfloor$ chai $2$ lít và nếu $n$ lẻ thì mua thêm chai $1$ lít. Số tiền tốn là:
    $$b \times \left\lfloor \frac{n}{2} \right\rfloor + (n \text{ mod } 2) \times a$$

Từ đây dễ thấy nên lựa chọn cách mua có số tiền bé hơn.