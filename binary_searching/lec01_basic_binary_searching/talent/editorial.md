# Trung Tâm Bồi Dưỡng Tài Năng - Editorial

***Subtask 1 và 2:*** Hai subtask này vì $M$ rất nhỏ nên ứng với mỗi đề xuất chỉ cần duyệt từ $1$ tới $N$ để tính mức độ phù hợp của đề xuất đó, độ phức tạp sẽ là $O(M \times N)$.

***Subtask 3:*** Vì $w_i = 1; \forall i: 1 \le i \le N$ nên mức độ phù hợp của mỗi đề xuất $p$ sẽ là: 
$$\sum_{i = 1}^N |d_i - p|$$

Nếu như ta sắp xếp lại các giá trị $d_i$ tăng dần, thì chắc chắn sẽ tồn tại một vị trí $mid$ thỏa mãn mọi $d_i \le p \ (1 \le i \le mid)$ và $d_i > p \ (mid < i \le N)$. Khi đó, độ phù hợp của đề xuất $p$ trở thành:
$$\sum_{i = 1}^{mid} p - d_i + \sum_{i = mid + 1}^{N} (d_i - p) \ (1)$$

Nếu ta xây dựng trước một mảng tổng tiền tố $\text{sum\_d}[i]$ là tổng của các giá trị $d_1...d_i$ thì biểu thức $(1)$ trở thành:
$$(mid \times p - \text{sum\_d}[mid]) + [\text{sum\_d}[N] - \text{sum\_d}[mid] - (N - mid) \times p] \ (2)$$

Tới đây, ta xây dựng được giải thuật $O(M \times \log_2(N))$ như sau:
- Sắp xếp lại mảng $d$ và xây dựng mảng tổng tiền tố $\text{sum\_d}$.
- Ứng với mỗi đề xuất $p,$ tìm kiếm nhị phân vị trí $mid$ trên mảng $d$ sao cho $d_i \le p \ (1 \le i \le mid)$ và $d_i > p \ (mid < i \le N)$.
- Sử dụng công thức $(2)$ để tính ra mức độ phù hợp của đề xuất này trong $O(1)$.

***Subtask 4:*** Ý tưởng hoàn toàn tương tự, ta cũng tìm được vị trí $mid$ như ở subtask $3$. Tuy nhiên lúc này đẳng thức tính độ phù hợp của một đề xuất $p$ sẽ trở thành: 
$$\sum_{i = 1}^{mid} w_i \times (p - d_i) + \sum_{i = mid + 1}^{N} w_i \times (d_i - p)$$

$$= p.\sum_{i = 1}^{mid} w_i - \sum_{i = 1}^{mid} (w_i \times d_i) + \sum_{i = mid + 1}^N(w_i \times d_i) - p.\sum_{i = mid + 1}^Nw_i \ (3)$$

Dựa vào đẳng thức $(3),$ xây dựng hai mảng tổng tiền tố dưới đây (tất nhiên nhớ sắp xếp lại các địa điểm tăng dần theo $d_i$):
- $\text{sum1}[i]$: Tổng của các giá trị $w_1, w_2,...,w_i$.
- $\text{sum2}[i]$: Tổng của các tích $(w_1 \times d_1), (w_2 \times d_2),..., (w_i \times d_i)$.

Ứng với mỗi đề xuất, sau khi tìm kiếm nhị phân được vị trí $mid$ giống như ở subtask $3,$ biểu thức $(3)$ sẽ trở thành:
$$\big(p \times \text{sum1}[mid] - \text{sum2}[mid]\big) + \Big[\text{sum2}[N] - \text{sum2}[mid] - p \times \big(\text{sum1}[N] - \text{sum1}[mid]\big)\Big]$$

Vậy ta có giải thuật $O(M \times \log_2N)$ thỏa mãn vượt qua tất cả các testcases.
