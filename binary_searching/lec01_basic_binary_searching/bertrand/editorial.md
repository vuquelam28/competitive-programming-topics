# Định Đề Bertrand - Editorial

Đầu tiên, ta sử dụng sàng lọc số nguyên tố để tạo ra một mảng gồm các số nguyên tố từ $1$ tới $3 \times 10^6$. Lưu hết các số nguyên tố đó vào `vector` $\text{prime}$ chẳng hạn.

Đối với subtask $1,$ duyệt tuần tự các số nguyên tố trong `vector`, nếu số nào thuộc nửa khoảng $(N, 2N]$ thì đếm nó. Cách này có độ phức tạp $O(N)$.

Đối với subtask $2,$ cần áp dụng tìm kiếm nhị phân để giảm thời gian chạy thuật toán. Ứng với số $N,$ tìm kiếm nhị phân vị trí $l$ nhỏ nhất sao cho $\text{prime}[l] > N$ và vị trí $r$ lớn nhất sao cho $\text{prime}[r] \le 2N$. Kết quả bài toán là $(r - l + 1)$. Các bạn có thể áp dụng luôn hai hàm `lower_bound` và `upper_bound` để viết ngắn gọn.

***Độ phức tạp:*** $O(n \times \log n)$.