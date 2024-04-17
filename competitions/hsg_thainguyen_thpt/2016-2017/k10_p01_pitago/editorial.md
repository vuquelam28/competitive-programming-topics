# Bộ Pitago - Editorial

### Subtask 1

Sử dụng ba vòng lặp, duyệt tất cả các bộ $i, j, k$ và kiểm tra xem chúng có phải một bộ Pitago không.

***Độ phức tạp:*** $O(n^3)$.

### Subtask 2

Sắp xếp lại dãy số tăng dần. Sau đó sử dụng hai vòng lặp, duyệt các cặp $a_j, a_k$ và sử dụng tìm kiếm nhị phân để đếm số lượng giá trị $a_i$ thỏa mãn: $a_i^2 = a_j^2 + a_k^2$. 

***Độ phức tạp:*** $O(n^2 \times \log n)$.

### Subtask 3

Đầu tiên, đếm phân phối toàn bộ các giá trị trong dãy số và lưu vào mảng $cnt$.

Dùng hai vòng lặp xét mọi cặp $(a_j, a_k);$ nhiệm vụ cần làm là đếm số lượng giá trị $a_i = \sqrt{a_j^2 + a_k^2}$ (tất nhiên chỉ đếm trong trường hợp $a_j^2 + a_k^2$ là một số chính phương), đó chính là số bộ ba tạo được với một cặp $(a_j, a_k)$. Điều này rất đơn giản vì đã có mảng $cnt$ tính trước. Tuy nhiên cần lưu ý trừ bớt đi đi các số bằng với $a_j$ và $a_k,$ tức là nếu $\sqrt{a_j^2 + a_k^2} = a_j$ thì kết quả giảm bớt đi $1$ và tương tự với $a_k$. 

***Độ phức tạp:*** $O(n^2)$.