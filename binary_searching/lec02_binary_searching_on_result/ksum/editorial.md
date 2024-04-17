# KSum - Editorial

### Subtask 1

Ta xây dựng đủ $n^2$ phần tử của dãy $c$ rồi sắp xếp lại và in ra $c_k$.

***Độ phức tạp:*** $O(n^2 \times log)$.

### Subtask 2

Ta sẽ chặt nhị phân kết quả của bài toán.

Đầu tiên, ta sẽ sắp xếp hai dãy $A$ và $B$ lại.

Giờ với một giá trị $val,$ ta cần kiểm tra xem có bao nhiêu cặp $(i,j)$ mà $a_i+b_j \le val,$ nếu số cặp đó lớn hơn hoặc bằng $k$ thì ta trả về đúng cho hàm kiểm tra và giảm giá trị $val$ đi, ngược lại thì tăng $val$ lên.

Để đếm số cặp thỏa mãn, ta sẽ thử từng $i$ từ $1$ tới $n$ và kiểm tra xem có bao nhiêu số trong $B$ thỏa mãn $b_j \le val - a_i$. Do mảng $B$ đã được sắp xếp nên ta có thể dùng hàm `upper_bound()` trong STL C++ hoặc tìm kiếm nhị phân thủ công để làm việc này.

***Độ phức tạp:*** $O(n \times log^2)$.