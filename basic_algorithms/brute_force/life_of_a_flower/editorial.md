# Tưới Hoa - Editorial

Giải thuật của bài này rất đơn giản: Duyệt qua toàn bộ các ngày mà Ucoder chăm sóc cây hoa, rồi xử lý từng trường hợp:

- Nếu $a_i = a_{i - 1} = 0$ thì cây hoa chắc chắn chết.
- Nếu $a_i = a_{i - 1} = 1$ thì cây hoa cao thêm $5$ cm.
- Nếu $a_i = 1$ thì cây hoa cao thêm $1$ cm.

Để đơn giản, hãy duyệt kể từ ngày thứ $2$ trở đi. Cuối cùng chỉ cần cộng kết quả thêm $1$ nếu như ngày thứ nhất bông hoa cũng được tưới.

***Độ phức tạp:*** $O(n)$.