# Những Quân Vua - Editorial

### Subtask 1

Với mỗi quân vua, ta tìm đường đi ngắn nhất từ vị trí của nó tới ô $(a, b)$.

Trên ma trận, đường đi ngắn nhất giữa hai ô $(x_1, y_1)$ và $(x_2, y_2)$ là:

$$\text{max}\big(|x_1 - x_2|, |y_1 - y_2|\big) \ (1)$$

Từng test case ta duyệt lại từng quân vua rồi lấy đường đi ngắn nhất cộng vào kq.

### Subtask 2

Gọi $u = x + y, v = x - y$.
$\Rightarrow u + v = 2x, u - v = 2y$.

Khi đó, biến đổi biểu thức $\text{max}\big(|x_1 - x_2|, |y_1 - y_2|\big),$ ta có:

$$\text{max}\big(|x_1 - x_2|, |y_1 -  y_2|\big)$$ 

$$= \frac{\text{max}\big(|u_1 + v_1 - u_2 - v_2|, |u_1 - v_1 - u_2 + v_2|\big)}{2}$$

$$= \frac{\text{max}\Big(\big|(u_1 - u_2) + (v_1 - v_2)\big|, \big|(u_1 - u_2) - (v_1 - v_2)\big|\Big)}{2} \ (*)$$

Mặt khác, ta có các bất đẳng thức giá trị tuyệt đối:

- $|u| + |v| \ge |u + v|$.
- $|u - v| \ge |u| - |v|$.
- $|u| + |v| \ge |u - v|$.

Do đó, $\text{max}\big(|u + v|, |u - v|\big) = |u| + |v|$. Áp dụng vào biểu thức $(*),$ ta có:

$$\frac{\text{max}\Big(\big|(u_1 - u_2) + (v_1 - v_2)\big|, \big|(u_1 - u_2) - (v_1 - v_2)\big|\Big)}{2} = \frac{|u_1 - u_2| + |v_1 - v_2|}{2}$$

Bây giờ, xét một truy vấn $(a, b)$. Gọi $u_0 = a + b, v_0 = a - b, u_i = x_i + y_i, v_i = x_i - y_i$. Ta cần tính toán:

$$\sum_{i = 1}^n \text{max}\big(|a - x_i|, |b - y_i|\big)$$

$$\sum_{i = 1}^n \frac{|u_i - u_0| + |v_i - v_0|}{2}$$

$$ \frac{1}{2} \times \sum_{i = 1}^n |u_i - u_0| + \frac{1}{2} \times \sum_{i = 1}^n |v_i - v_0|$$

$$\left[\frac{1}{2} \times \sum_{i = 1}^{k_1} (u_0 - u_i) + \frac{1}{2} \times \sum_{i = k_1 + 1}^n (u_i - u_0)\right] + \left[\frac{1}{2} \times \sum_{i = 1}^{k_2} (v_0 - v_i) + \frac{1}{2} \times \sum_{i = k_2 + 1}^n (v_i - v_0)\right] \ (**)$$

<center>

*Với $k_1$ là vị trí lớn nhất mà $u_{k_1} \le u_0; k_2$ là vị trí lớn nhất là $v_{k_2} \le v_0$*.
</center>

Như vậy, trước tiên các bạn xây dựng các mảng $u, v$ cho các giá trị $(x_i, y_i)$. Kế đến, xây dựng mảng cộng dồn cho các giá trị $u, v$. Ứng với mỗi truy vấn $(a, b),$ hãy tính hai giá trị $(u_0, v_0)$ rồi áp dụng tìm kiếm nhị phân để tìm ra các vị trí $k_1, k_2$ tương ứng. Việc còn lại chỉ là tính tổng $(**)$ trong $O(1)!$

***Độ phức tạp:*** $O\big((m + n) \times \log(n)\big)$.
