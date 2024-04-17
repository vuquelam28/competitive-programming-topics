# Đếm Số - Editorial

### Subtask 1

Tạo ra dãy số $U$ theo đúng công thức cho tới khi $u_i \ge \text{max}(a_i)$ thì dừng lại. Duyệt từng số trên dãy $U,$ kiểm tra tính nguyên tố của nó và nếu nó là số nguyên tố thì duyệt lại đếm trên mảng $A$.

***Độ phức tạp:*** $O(m \times n \times \sqrt{u_i})$.

### Subtask 2

Sử dụng đếm phân phối, tạo mảng $cnt[X]$ là số lần xuất hiện của phần tử $X$ trong mảng $A$.

Tạo ra dãy số $U$ theo đúng công thức đề bài cho tới khi $u_i \ge \text{max}(a_i)$ thì dừng lại. Trong quá trình tạo dãy, kiểm tra luôn số nào trong dãy là số nguyên tố thì đưa vào một mảng khác. Sử dụng sàng lọc số nguyên tố để kiểm tra số nguyên tố, tránh chạy quá thời gian khi tính toán.

Cuối cùng duyệt tất cả các số nguyên tố trong mảng đã lưu và cộng vào kết quả số lần xuất hiện của chúng trong mảng $A$ dựa vào mảng cnt đã khởi tạo lúc đầu. 

***Độ phức tạp:*** $O(n \times \log n)$.