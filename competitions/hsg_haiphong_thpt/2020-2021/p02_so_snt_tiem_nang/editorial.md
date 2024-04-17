# Số Siêu Nguyên Tố Tiềm Năng - Editorial

### Subtask 1

Duyệt từng số có vị trí nằm trong đoạn $[u, v]$ của dãy $a$ rồi kiểm tra từng số có phải số nguyên tố tiềm năng không theo định nghĩa.

***Độ phức tạp:*** $O\big(n \times \sqrt{a_i} \times \text{length}(a_i)\big)$.

### Subtask 2

Với $a_i \le 10^8$, ta sẽ kiểm tra xem số $a_i$ có phải số nguyên tố tiềm năng hay không bằng cách thử từng điều kiện:
- Xem số $a_i$ có phải số nguyên tố hay không?
- Nếu thêm một chữ số trong khoảng $[0,9]$ vào cuối số $a_i$ thì đó có phải là số nguyên tố hay không? Hay nói cách khác kiểm tra số $(a_i \times 10 + k) \ (k \in [0,9])$ có phải số nguyên tố hay không.
- Nếu xóa đi từng chữ cái cuối của số $a_i$ thì số đó còn là số nguyên tố hay không?
- Chi phí cho toàn bộ việc kiểm tra sẽ là $O(10 \times \sqrt{a_i})$ vì thao tác kiểm tra số nguyên tố mất $O(\sqrt {a_i})$.

Để trả lời truy vấn nhanh, thay vì duyệt qua từng vị trí của đoạn $[u, v]$ ta có thể làm như sau:
-  Gọi $s[i]$ là số lượng số siêu nguyên tố tiềm năng của dãy $a$ trong đoạn vị trí $[1, i]$. Dễ thấy $s[i] = s[i - 1]$ nếu $a_i$ không là số siêu nguyên tố tiềm năng, ngược lại $s[i] = s[i - 1] + 1$. Bước khởi tạo này tốn độ phức tạp là $O(n \times 10 \times \sqrt{a_i})$.
- Như vậy, đáp án cho một truy vấn $(u,v)$ sẽ là $s[v] - s[u - 1]$.

***Độ phức tạp:*** $O\big(\text{max}(T, n \times 10 \times \sqrt{a_i})\big)$.

### Subtask 3

Do $n$ lên tới $10^5$ nên nếu kiểm tra số nguyên tố trong $O(\sqrt {a_i})$ sẽ dẫn tới chạy quá thời gian do $a_i \le 10^6$.

Tuy nhiên, ta để ý rằng, nếu thêm một chữ số phía sau $a_i$ thì $a_i$ cũng chỉ có thể lên tới $10^7+9$. Do vậy, ta sẽ dùng sàng số nguyên tố để việc kiểm tra số nguyên tố diễn ra trong $O(1)$.

Sau đó, làm tương tự với subtask $2$ để trả lời nhanh các truy vấn.

***Độ phức tạp:*** $O\big(\text{max}(T, n \times 10, 10^7 \times \log 10^7)\big)$.

### Lưu ý

Do subtask $3$ không lồng với subtask $2$, khi ở subtask $2$ thì $a_i \le 10^8$, còn với subtask $3$ là $a_i \le 10^6$, nên ta cần phải code cả hai subtask rồi xử lý với ràng buộc tương ứng.