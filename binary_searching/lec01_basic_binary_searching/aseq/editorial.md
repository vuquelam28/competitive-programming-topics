# Dãy Số - Editorial

Đầu tiên xây dựng mảng tổng tiền tố $sum[i] = \sum_{j = 1}^i a_j$. Tổng đoạn con $[i, j]$ sẽ bằng $sum[j] - sum[i - 1]$.

Đề bài yêu cầu đếm số đoạn con $[i, j]$ thỏa mãn: 
$$L \le |sum[j] - sum[i - 1]| \le R$$

Trước tiên sắp xếp lại dãy $sum[]$ tăng dần. Xét một giá trị $sum[j] \ (1 \le j \le n),$ để biết được nó có thể ghép với những $sum[i]$ nào, ta sẽ tìm đoạn $[\text{pos\_l, pos\_r}]$ lớn nhất thỏa mãn:
$$\begin{cases}1 \le \text{pos\_l} \le \text{pos\_r} \le i. \\ L \le sum[j] - sum[\text{pos\_l} - 1] \le R; \text{pos\_l min}. \\ L \le sum[j] - sum[\text{pos\_r} - 1] \le R; \text{pos\_r max}.\end{cases}$$

Khi đó, mọi giá trị $sum[j]$ thuộc đoạn $[\text{pos\_l, pos\_r}]$ đều sẽ thỏa mãn: $L \le sum[i] - sum[j] \le R$.

Tới đây, có thể các bạn sẽ thắc mắc rằng, chưa chắc ban đầu $sum[i]$ đã đứng sau $sum[j]$ (theo đúng quy tắc lấy tổng đoạn bằng mảng tổng tiền tố, thì chỉ được phép lấy $sum[j] - sum[i - 1]$ nếu $j \ge i$). Nhưng do bài toán này yêu cầu lấy tổng tuyệt đối, nên khi $sum[i]$ đứng sau $sum[j]$ thì thực tế đó chính là thao tác lấy tổng tuyệt đối của đoạn.