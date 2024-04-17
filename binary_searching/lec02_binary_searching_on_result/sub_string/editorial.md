# Xâu Con - Editorial

Với các subtask nhỏ, hoàn toàn có thể thử toàn bộ các giá trị $k \ (1 \le k \le \text{max}(|s_i|)),$ rồi duyệt qua cả $n$ xâu và lấy ra xâu con độ dài $k$ ở từng xâu $s_i$. Tới đây, có hai cách làm:

- Cách $1$: Chỉ cần đưa mọi xâu con vào một mảng, sắp xếp lại chúng và đếm các xâu con khác nhau trong đó, nếu đúng bằng $n$ thì ta thu được kết quả $k$. 
- Cách $2$: Sử dụng sẵn cấu trúc dữ liệu `map` trong C++ hoặc các ngôn ngữ tương đương. Ứng với mỗi xâu con, ta kiểm tra xem nó đã xuất hiện trong `map` hay chưa, nếu chưa thì thêm nó vào `map`. Nếu cả $n$ xâu con đều phân biệt thì $k$ hiện tại chính là đáp án. Độ phức tạp cho subtask này sẽ tốt hơn vì không cần phải sử dụng tới hàm `sort` và bớt được thao tác so sánh các xâu con với nhau.

Để pass được subtask cuối cùng, ta có nhận xét sau: Nếu như với giá trị $k$ mà các xâu con độ dài $k$ đều phân biệt, thì các xâu con độ dài lớn hơn $k$ cũng sẽ phân biệt. Vì vậy, đây là một bài toán thỏa mãn tính chất tìm kiếm nhị phân. Ta tìm kiếm nhị phân giá trị $k$ nhỏ nhất, ứng với mỗi $k$ thực hiện như cách $2$ bên trên. Độ phức tạp giải thuật trong trường hợp này giảm xuống còn $O\big(\log(|s|) \times n.\log(n)\big)$.