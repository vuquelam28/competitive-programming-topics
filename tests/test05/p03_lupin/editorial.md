# Siêu Trộm - Editorial

Xét bài toán trên một giá duy nhất, vì các bình chỉ có thể lấy ra từ hai đầu của mỗi giá, nên ta có thể xây dựng mảng cộng dồn $\text{total\_value}[i]$ là tổng giá trị của các bình từ vị trí $1$ tới vị trí $i$. Sau đó, giả sử lấy $j$ bình trên giá này thì có thể chia ra làm hai lượt: Lấy $k$ bình ở phía trái và $(j - k)$ bình ở phía phải, bằng cách duyệt mọi giá trị $k$ từ $0$ tới $j$ ta thu được kết quả tối ưu trên một giá.

Giờ xét bài toán trên $N$ giá, trước tiên xây dựng mảng cộng dồn $\text{total\_value}[i][j]$ là tổng giá trị của các bình từ $1$ tới $j$ trên giá thứ $i$. Công thức quy hoạch động:
$$\text{total\_value}[i][j] = \text{total\_value}[i][j - 1] + pot[i][j]$$

Gọi $dp[i][j]$ là tổng giá trị tối đa Lupin đập được khi đập bỏ $j$ bình từ hàng $1$ tới hàng $i \ (1 \le i \le N, 1 \le j \le M)$. Giả sử hàng thứ $i$ đập bỏ $x \ (0 \le x \le k_i)$ bình, thì các hàng từ $1$ tới $i - 1$ phải đập bỏ $j - x$ bình. Vậy ta có công thức quy hoạch động:
$$dp[i][j] = \text{max}(dp[i - 1][j - x] + \{\text{giá trị max của x bình trên hàng i}\}) \ (*)$$

Với subtask $1,$ hoàn toàn ta có thể duyệt thử tất cả các cách chọn $x$ bình trên giá thứ $i$ giống như bài toán trên một hàng: Thử chọn $y$ bình ở đầu bên trái và $x - y$ bình ở đầu bên phải. 

Với subtask $2,$ cần có một cách làm tốt hơn. Nhận thấy rằng, nếu chọn $x$ bình trên giá thứ $i$ thì có thể tìm được ngay cách chọn tốt nhất khi xét mọi cặp $(y, x - y)$. Đặt $\text{max\_row}[i][j]$ là giá trị lớn nhất thu được nếu đập bỏ $j$ bình trên hàng $i$. Ta có công thức quy hoạch động:
$$\text{max\_row}[i][j] = \text{max}\big(\text{total\_value}[i][y] + \text{total\_value}[i][k_i] - \text{total\_value}[i][k_i - (j - y)]\big)$$

Lúc này, công thức quy hoạch động $(*)$ sẽ trở thành:
$$dp[i][j] = \text{max}\big(dp[i - 1][j - x] + \text{max\_row}[i][j]\big)$$

Độ phức tạp giải thuật giảm xuống còn $O(N \times k_i \times M),$ đủ để vượt qua hết các testcases. Kết quả cuối của bài toán tất nhiên là $dp[N][M]$.