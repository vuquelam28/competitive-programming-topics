# Sắp Xếp Hoán Vị - Editorial

### Subtask 1

Duyệt quay lui $9!$ trạng thái để tìm kết quả tối ưu.

### Subtask 2

Nhận xét: Trong các cách sắp xếp tối ưu các tập đoạn được chọn để sắp xếp là $S$ thì với hai đoạn bất kì $[l_i, r_i]$ và $[l_j, r_j]$ thì giao của hai đoạn này là rỗng.

Do đó ta có thể quy hoạch động. Gọi $dp_i$ là chi phí nhỏ nhất để sort từ $1$ đến $i,$ các vị trí $i$ phải thỏa mãn $\text{max}(a_1, a_2, ..., a_i) = i$.

Từ đó: $dp_i = \text{min}\big(dp_j + \lfloor \sqrt{i - j} \rfloor\big)$ với $j$ thỏa mãn $\text{max}(a_1, a_2, ..., a_j) = j$.

***Độ phức tạp:*** $O(N^2)$.

### Subtask 3

Nhận xét: 
- Với dãy độ dài $n,$ chi phí tối đa để sắp xếp lại dãy là $\lfloor \sqrt{N} \rfloor$ (chọn dãy $[1..N]$).
- $dp_i \geq dp_j$ với $i \geq j$.

Từ đó, với mỗi $i,$ ta chỉ cần quan tâm tối đa $\lfloor \sqrt{N} \rfloor$ vị trí $j$ tương ứng $\lfloor \sqrt{i - j} \rfloor = 1, 2, ..., \lfloor \sqrt{N} \rfloor$.

Với chi phí $x,$ ta cần tìm vị trí $j$ nhỏ nhất thỏa mãn $\lfloor \sqrt{i - j} \rfloor = x$. 

$\rightarrow$  $i - (x + 1)^2 + 1 \le j \le i - x^2$ 

Gọi $p_k = j$ là vị trí nhỏ nhất lớn hơn hoặc bằng $k$ thỏa mãn $\text{max}(a_1, a_2, ..., a_j) = j$. Từ đó $j = p_{\text{max}(0, i-(x+1)^2+1)}$. Cập nhật $dp_i = dp_j + x$.

***Độ phức tạp:*** $O\big(N\sqrt{N}\big)$.

### Subtask 4

Với nhận xét ở subtask 3, ta có thể sử dụng quy hoạch động đổi biến. Gọi: 
- $dp_x = i$ là vị trí $i$ lớn nhất có thể sắp xếp tăng dần sử dụng $x$ chi phí.
- $m_i = j$ với $j$ là giá trị lớn nhất tồn tại hoán vị $[1..j]$ trong đoạn $[1..i]$ của dãy $a$.   

Duyệt qua số chi phí từ $1$ đến $\lfloor \sqrt{N} \rfloor$ để tính $dp_i$. Với chi phí $j < i$ để tính kết quả cho chi phí $i,$ ta có thể sắp xếp tối đa đoạn từ $\big[dp_j + 1, \text{min}(n, dp_j + (i - j + 1)^2 - 1)\big]$. Đặt $pos_j = \text{min}\big(n, dp_j + (i-j+1)^2-1\big),$ việc chọn sắp xếp đến $pos_j$ luôn tối ưu  bởi $m_i \geq m_{i-1}; \forall i: 1 \le i \le n$. Cập nhật $dp_i=\text{max}(m_{pos_j})$.

***Lưu ý:*** Nếu $m_{pos_j}=j$ ($a_{1...pos_j}$ là hoán vị từ $1$ đến $pos_j$) và $a_{pos_j+1} = pos_j+1, a_{pos_j+2}=pos_j+2,..., a_{pos_j+k}=pos_j+k$ thì ta cần cập nhật lại $dp_i=pos_j+k$.

***Độ phức tạp:*** $O\big(\sqrt{N} \times \sqrt{N}\big) = O(N)$.