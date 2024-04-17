# A và B - Editorial

### Subtask 1

Duyệt các số từ $A$ tới $B$ và tính tổng các số lẻ bằng một vòng lặp.

Để tối giản hai phân số, ta tìm ước chung lớn nhất của chúng rồi chia cả tử và mẫu cho ước chung lớn nhất.

***Độ phức tạp:*** $O(B - A + 1)$.

### Subtask 2

Coi $A'$ và $B'$ lần lượt là hai số lẻ gần nhất với $A$ và $B$ thỏa mãn: $A' \ge A, B' \le B$.

Lúc này, các số lẻ trong đoạn $[A, B]$ sẽ tạo thành dãy số: $A', A' + 2, A' + 4, \dots, B'$. Để tính tổng dãy số này, ta sử dụng công thức tính tổng dãy cấp số cộng với công sai là $2$:
$$\frac{(\text{A' + B'}) \times \text{số số hạng}}{2}$$

Để rút gọn phân số, ta sử dụng giải thuật Euclid cải tiến tìm ước chung lớn nhất của hai số $A$ và $B$.

***Độ phức tạp:*** $O\big(\log(B - A + 1)\big)$.