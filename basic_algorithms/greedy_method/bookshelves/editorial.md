# Giá Sách - Editorial

Ta biết rằng mỗi cuốn sách chỉ có thể có độ dày là $1$ hoặc $2,$ nên nếu sử dụng $i$ cuốn sách độ dày $1$ và $j$ cuốn sách độ dày $2$ để đặt thẳng đứng thì tổng độ dày của chúng sẽ là $(i + 2j)$. Ta cần xác định $i$ và $j$ sao cho tổng chiều rộng của $(N - i - j)$ cuốn sách còn lại không vượt quá $(i + 2j)$.

Vì độ dày của các cuốn sách đã cố định, nên ta có thể tham lam như sau: Ưu tiên chọn những cuốn sách có chiều rộng lớn đặt thẳng đứng, và các cuốn có chiều rộng nhỏ đặt nằm ngang. Vậy ta thử mọi cặp giá trị $(i, j) \ (i, j \ge 0),$ chọn ra $i$ cuốn độ dày $1$ có chiều rộng lớn nhất, $j$ cuốn độ dày $2$ có chiều rộng lớn nhất rồi kiểm tra xem tổng chiều rộng của $(N - i - j)$ cuốn còn lại có nhỏ hơn hoặc bằng $(i + 2j)$ hay không, nếu có thì cập nhật tổng độ dày nhỏ nhất với giá trị $(i + 2j)$. Áp dụng các giải thuật sắp xếp và duyệt, chúng ta có thể thu được thuật toán $O(N^3),$ hoàn toàn thỏa mãn giới hạn đề bài.

Một cách khác để thực hiện bài toán này là sử dụng quy hoạch động, nhưng nó không cần thiết nên mình sẽ không đề cập ở đây.
