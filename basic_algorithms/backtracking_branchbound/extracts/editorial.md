# Phân Tích Số - Editorial

Do $N \le 30,$ chúng ta hoàn toàn có thể sử dụng quay lui cho bài toán này.

Nghiệm của bài toán sẽ được mô tả dưới dạng một tập $X = \{x_1, x_2, x_3, \dots\}$ không biết trước số thành phần (do các cách phân tích có thể có số lượng phần tử khác nhau). Để các cách phân tích không bị lặp lại, ta sẽ giả sử $x_1 \le x_2 \le x_3 \le \dots$

Giả sử ta đã tạo được các phần tử $\{x_1, x_2, \dots, x_{i - 1}\}$ và bây giờ cần tạo thêm $x_i$. Gọi $t[i] = x_1 + x_2 + \cdots + x_i$ thì:

$$t[i + 1] \le n$$

$$\Leftrightarrow t[i - 1] + x_i + x_{i + 1} \le n$$

$$\Leftrightarrow x_i + x_{i + 1} \le n - t[i - 1]$$

$$\Leftrightarrow x_i \le \frac{n - t[i - 1]}{2}$$

Ví dụ để minh họa cho điều trên, là khi $n = 10$ thì việc chọn $x_1 = 6, 7, 8, 9$ là vô nghĩa vì như vậy không thể tìm ra nghiệm, mà cũng không thể chọn tiếp được $x_2$. Một cách dễ hiểu, ta gọi đệ quy tìm tiếp khi giá trị $x_i$ được chọn hiện tại còn cho phép chọn thêm một phần tử khác lớn hơn hoặc bằng nó mà không làm tổng vượt quá $n$.

Việc in kết quả sẽ diễn ra khi và chỉ khi $x_i$ mang giá trị đúng bằng $n - (x_1 + x_2 + \cdots + x_{i - 1})$. Để thuật toán luôn đúng trong trường hợp tổng quát, ta đặt $x_0 = 1$.