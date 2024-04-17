# Dãy Số Nguyên Tố - Editorial

Đầu tiên, chúng ta cần tìm cách để kiểm tra số $a_i$ có phải số nguyên tố hay không. Rõ ràng, với giới hạn $a_i \le 10^6$, ta sẽ nghĩ ngay tới thuật toán sàng số nguyên tố trong độ phức tạp $O(n \times \log)$.

Bây giờ vấn đề của chúng ta là làm thế nào để trả lời các truy vấn.

Với subtask $1$ và $2,$ dễ thấy ta có thể kiểm tra từng đoạn $[u_i,v_i]$ trong dãy để đếm số số nguyên tố. Độ phức tạp lúc này sẽ là $O(n \times m)$.

Nhưng với subtask $3,$ ta cần tìm cách trả lời truy vấn nhanh hơn như sau:
- Sử dụng mảng cộng dồn. Gọi $s_i$ là số phần tử là số nguyên tố trong đoạn vị trí $[1,i]$ của dãy $a \rightarrow s_i = s_{i-1}+1$ nếu $a_i$ là số nguyên tố, ngược lại $s_i = s_{i-1}$. Khởi tạo $s_0 = 0$.
- Như vậy, kết quả của mỗi đoạn $[u,v]$ sẽ bằng $s[v] - s[u-1]$. 
- Theo cách này, ta có thể trả lời mỗi truy vấn trong độ phức tạp $O(1)$.
- Độ phức tạp chung: $O(n \times \log + m)$.