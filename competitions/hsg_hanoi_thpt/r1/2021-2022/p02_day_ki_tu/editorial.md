# Dãy Kí Tự - Editorial

### Subtask 1

Duyệt lần lượt từng bước nhảy từ $1$ tới $n,$ với mỗi bước nhảy ta cộng thêm số lượng ô di chuyển được vào một biến $x$. Do chu kì lặp lại của hàng ngang là $26$ kí tự, nên kết quả cuối cùng sẽ là kí tự cách kí tự `A` đúng $x$ vị trí.

Độ phức tạp: $O(n)$.

### Subtask 2

Dễ thấy số lần nhảy sau $n$ bước được tính theo công thức tổng của các số từ $1$ tới $n$:
$$\frac{n \times (n+1)}{2}$$ 

Gọi $x = \frac{n \times (n+1)}{2}$. Ta biết rằng từ `A` tới `Z` có tổng cộng $26$ kí tự, nên có thể coi như hàng ngang di chuyển là sự lặp lại của các chu kì độ dài $26$. Tức là, sau khi di chuyển $x$ bước ($n$ lần nhảy), robot sẽ ở vị trí cách kí tự `A` đúng $x \text{ mod } 26$ ô. Tức là nó ở ô có tên là: `(char) ((int) A + x % 26)` - theo cú pháp của ngôn ngữ C++.

Một lưu ý cho bài toán này là cần dùng kiểu dữ liệu `long long` để tính toán để tránh tràn số, đó là bẫy của subtask số $2$ và $3$. 

Độ phức tạp: $O(1)$.