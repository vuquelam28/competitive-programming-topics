# Trung Vị Lớn Nhất - Editorial

### Subtask 1

Do giới hạn $n$ khá nhỏ, ta có thể xét mọi dãy con độ dài lớn hơn hoặc bằng $k,$ sắp xếp lại rồi tìm phần tử trung vị của từng dãy và chọn ra trung vị lớn nhất.

### Subtask 2

#### Nhận xét

Giả sử phần tử trung vị của một dãy con $a[l...r]$ là $x$.

Theo định nghĩa, sau khi sắp xếp dãy $[l, r]$ tăng dần, thì phần tử trung vị của dãy sẽ là phần tử thứ $\left\lfloor{\frac{l + r}{2}}\right\rfloor$. Nghĩa là, nếu như $a\Big[\left\lfloor{\frac{l + r}{2}}\right\rfloor\Big] = x,$ thì:
- $a\Big[\left\lfloor{\frac{l + r}{2}}\right\rfloor\Big] \ge x$. 
- $a\Big[\left\lfloor{\frac{l + r}{2}}\right\rfloor + 1\Big] \ge x$.
-  $a\Big[\left\lfloor{\frac{l + r}{2}}\right\rfloor + 2\Big] \ge x$.
$\dots$
- $a[r] \ge x$.

Nói cách khác, trong dãy phải có tối thiểu $\frac{l + r}{2}$ phần tử lớn hơn hoặc bằng $x \ (1)$. 

Tiếp đến, gọi $P(x)$ là hàm kiểm tra: Có tồn tại một đoạn con độ dài lớn hơn hoặc bằng $k$ và trung vị là $x$ hay không. Nhận thấy, khi càng tăng $x$ lên, thì khả năng $P(x) = \text{False}$ càng lớn, vì điều kiện kiểm tra sẽ bị chặt hơn. Do đó, ta sẽ đi tìm giá trị $x$ lớn nhất thỏa mãn $P(x) = \text{True}$ bằng phương pháp tìm kiếm nhị phân.

#### Hướng giải

Xét một giá trị $x$ trong quá trình tìm kiếm nhị phân. Ta gọi thêm một mảng phụ $t$ với ý nghĩa như sau:
$$\begin{cases}t_i = 1; \text{nếu } a_i \ge x. \\ t_i = -1; \text{nếu } a_i < x. \end{cases}$$

Khi đó, nếu như một đoạn $a[l...r]$ có trung vị là $x,$ thì dựa trên nhận xét $1,$ ta biết rằng tổng đoạn $t[l...r]$ phải lớn hơn $0$. Vậy nếu xây dựng một mảng tổng tiền tố $\text{sum}[i] = \sum_{j = 1}^i t_j,$ thì một đoạn con $a[l...r]$ sẽ có trung vị bằng $x$ khi và chỉ khi:
$$sum[r] - sum[l - 1] > 0$$

Việc xây dựng mảng tổng tiền tố được thực hiện trong $O(n)$ rất dễ dàng bằng một vòng lặp.

Tuy nhiên, đề bài lại yêu cầu phải tìm những đoạn con có độ dài lớn hơn hoặc bằng $k$. Tức là, với mỗi $sum[r],$ cần xác định có tồn tại vị trí $l$ nào thỏa mãn: $l \le r - k$ và $sum[r] - sum[l] > 0$ hay không. Nếu như sử dụng hai vòng lặp, chắc chắn sẽ bị quá thời gian. Ta cải tiến như sau:

- Gọi $\text{min\_sum}[i]$ là giá trị nhỏ nhất trong các giá trị $sum[1], sum[2], \dots, sum[i]$. Xây dựng bằng công thức quy hoạch động trong một vòng lặp:
    $$\text{min\_sum}[i] = \text{min}\big(\text{min\_sum}[i - 1], sum[i]\big)$$
- Xét mỗi vị trí $r \ (1 \le r \le n),$ ta sẽ tìm luôn đoạn con $t[l...r]$ có tổng lớn nhất kết thúc tại $t_r$ trong các đoạn con có độ dài tối thiểu bằng $k$. Lợi dụng mảng $\text{min\_sum}$ vừa xây dựng, việc kiểm tra có tồn tại đoạn con có trung vị bằng $x$ và độ dài tối thiểu bằng $k$ hay không sẽ tương đương với việc kiểm tra có tồn tại vị trí $r$ nào thỏa mãn:
    $$\begin{cases}sum[r] - \text{min\_sum}[r - k] > 0. \\ r \ge k. \end{cases}$$ Nếu tồn tại vị trí $r$ như vậy thì tăng $x$ lên bằng tìm kiếm nhị phân, ngược lại giảm $x$ xuống tới khi tìm được $x$ lớn nhất.

Sắp xếp code một cách hợp lý, chúng ta sẽ thu được giải thuật với độ phức tạp $O\big(n.\log(n)\big)$.


