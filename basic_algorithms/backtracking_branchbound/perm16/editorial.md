# Hoán Vị 16 - Editorial

### Subtask 1

Sử dụng quay lui, duyệt tất cả các hoán vị của các số từ $1$ tới $n$ rồi đếm số hoán vị chia hết cho $16$.

***Độ phức tạp:*** $O(n!)$.

### Subtask 2

Nhận xét thấy, một số chia hết cho $16$ thì chỉ cần có $4$ chữ số tận cùng chia hết cho $16$.

Vì thế, thay vì tìm toàn bộ các hoán vị, ta chỉ cần sinh hậu tố độ dài tối thiểu là $4$ từ các số trong đoạn $[1, n];$ nói cách khác là tìm tất cả các cách tạo ra một hậu tố độ dài $4$ rồi kiểm tra xem hậu tố đó có chia hết cho $16$ hay không, sau đó nhân thêm với số lượng hoán vị của các số còn lại không sử dụng trong hậu tố.

Để đơn giản, ta sẽ sinh toàn bộ các chỉnh hợp không lặp chập $4$ của các số từ $1$ tới $n,$ đảm bảo tạo ra các hậu tố luôn luôn có độ dài lớn hơn hoặc bằng $4$. Sau đó chỉ cần nhân số lượng hậu tố chia hết cho $16$ với $(n - 4)!$ là ra kết quả cuối cùng.

***Độ phức tạp:*** $O(p^4_n)$.