# Bảo Tàng Cổ Vật - Editorial

Giả sử số lượng cổ vật phân biệt mà bảo tàng nhận được là $A$ và số lượng khu vực trưng bày trong bảo tàng là $C,$ mức độ nhàm chán ít nhất có thể của khách tham quan $ANS$ sẽ là:

$$ANS = C - min(C,A)$$

Ta có thể tìm $A$ bằng cách cho các phần tử trong dãy kí tự vào `set`, khi đó $A$ chính là độ lớn của `set`.

Tuy nhiên, độ dài xâu lên tới $10^7,$ nếu như đưa toàn bộ kí tự vào `set` thì có thể gây quá thời gian. Ta có thể cải tiến bằng cách kiểm tra, nếu thấy độ dài `set` đã bằng $26$ nghĩa là toàn bộ các kí tự latin in thường đã bị đánh dấu, khi đó ta sẽ không đưa thêm kí tự nào vào `set` nữa.

***Độ phức tạp:*** $O\big(n \times \log n)$ với $n$ là độ dài xâu kí tự. 