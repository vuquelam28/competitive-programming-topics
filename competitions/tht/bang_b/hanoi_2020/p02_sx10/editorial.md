# Giá Trị X10 - Editorial

### Subtask 1

Tính trực tiếp ra số $S$ rồi tính tổng chữ số của nó.

Độ phức tạp: $O(k)$.

### Subtask 2

Trước hết, biến đổi $S$ theo $n$:

$$S = n \times 10^0 + n \times 10^1 + \dots + n \times 10^{k + 1}$$

$$= n \times \overline{111\dots1} \ (k + 1 \text{ số } 1) \ (*)$$

Giả sử $n$ có $m$ chữ số. Ta sẽ tách $n$ theo cấu tạo số: Giả sử $n = 123$ thì tách ra thành $n = 1 \times 10^2 + 2 \times 10^1 + 3 \times 10^0$. Tổng quát, ta coi như $n$ có thể tách thành dạng:

$$n = \overline{d_1d_2d_3\dots d_m}$$

$$= d_1 \times 10^{m - 1} + d_2 \times 10^{m - 2} \times \cdots \times d_n \times 10^0$$

Ta thấy biểu thức $(*)$ đã được biến đổi thành một biểu thức tổng, với số $\overline{111\dots1}$ lần lượt nhân với $10^{m - 1}$ đủ $d_1$ lần, nhân với $10^{m - 2}$ đủ $d_2$ lần,..., nhân với $10^0$ đủ $d_m$ lần. Nếu ta đặt tính biểu thức tổng này theo phương pháp tiểu học, ta sẽ thấy nó ở dạng như hình bên dưới:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/qpVMRbCj.png)
</center>

Lấy ví dụ, nếu $n = 123, k = 3$ thì biểu thức đặt tính tổng sẽ trông như sau:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/ixXRqFIS.png)
</center>

Tới đây, ta quan sát và xử lý theo quy luật: Số lượng chữ số $1$ của hàng đơn vị trên biểu thức đặt tính tổng sẽ tăng dần theo tổng các chữ số của $n$ tính từ hàng đơn vị ngược lên trên: $3, 3 + 2, 3 + 2 + 1$. Kể từ cột mà số lượng chữ số $1$ đạt cực đại, nó sẽ duy trì thêm $k + 1 - m$ lần nữa nếu như $k + 1 > m$ và rồi lại giảm dần theo hiệu các chữ số của $n$: $6 - 3 = 3, 6 - 3 - 2 = 1$.

Hãy dựa vào những nhận xét trên để giải quyết bài toán!

Độ phức tạp: $O(m),$ với $m$ là số chữ số của $n$.