# Trò Chơi Đoạn Vui Vẻ - Editorial

Gọi $a,b$ lần lượt là dãy thứ nhất độ dài $n$ và dãy thứ hai độ dài $m$.

Ta có khi thực hiện nước đi chọn $x$ số cuối của $a$ và $y$ số cuối của $b$ thì chi phí sẽ là $(a_{n-x+1}+\dots +a_n-x)(b_{m-y+1}+\dots +b_m-y)$.

Tương đương $\big[(a_{n-x+1}-1)+\dots +(a_n-1)\big].\big[(b_{m-y+1}-1)+\dots +(b_m-1)\big]$. Để ý khi ta trừ đi mỗi phần tử của $a$ và $b$ đi $1$ thì chi phí sẽ được đơn giản đi là $(a_{n-x+1}+\dots +a_n)(b_{m-y+1}+\dots +b_m)$.

Với cách chơi tối ưu nào đó thì $2$ dãy $a,b$ sẽ được chia thành $k$ phần và phần thứ tự của $a$ sẽ tương ứng với thứ tự đó của $b$.

<div style='text-align: center'><img src="https://cdn.ucode.vn/uploads/24295/images/RuOxufLE.png" class="content-img" /></div>

Khi đó chi phí sẽ là tổng đoạn $1$ của $a$ $\times$  tổng đoạn $1$ của $b$ cộng với đoạn $2$ $a$ $\times$ đoạn $2$ $b \dots$ cộng với đoạn $k$ của $a$ $\times$ đoạn $k$ của $b$.

Vì có tích của tổng đoạn nên có thể hình dung dưới dạng bảng 2D.

<div style='text-align: center'><img src="https://cdn.ucode.vn/uploads/24295/images/mkfnBcdR.png" \/></div>

Mỗi lượt chơi sẽ có chi phí tương ứng với một hình chữ nhật (tổng đoạn của $a,b$ là hai cạnh của hình chữ nhật và tích của chúng là diện tích). Nếu ta đặt ô $c[i][j]=a_j\times b_i$ thì chi phí một hình chữ nhật (một nước đi) là tổng các $c[i][j]$ có trong hình chữ nhật đó.

Ta bắt đầu từ ô $(1,1)$ ta cần đi tới ô $(m+1,n+1)$ (nghĩa là xóa hết phần tử) bằng mỗi lượt chơi chọn từ ô $(x,y)\rightarrow (x_1,y_1 )$ thì chi phí là hình chữ nhật $(x,y)\rightarrow (x_1-1,y_1-1)$.

Khi biến bài toán thành bài toán mới như vậy ta dễ dàng nhận ra khi nhìn vào hình là việc chọn một hình chữ nhật có chiều rộng và chiều cao đều $>1$ là phí và không tối ưu, vì thay vì chọn hết hình chữ nhật mình chỉ cần chọn đường chéo trong đó thì luôn luôn lời hơn (chỉ đi theo phần xanh dương mà không đi theo phần đỏ thì lời hơn).

<div style='text-align: center'><img src="https://cdn.ucode.vn/uploads/24295/images/lRQsrBWz.png" class="content-img" /></div>

Và vì tính chất này nên ta có thể làm quy hoạch động dễ dàng. Dựa vào việc chuyển trạng thái đứng ở một ô ta có thể đi chéo hoặc đi ngang nếu trước đó không phải là đi dọc, và đi dọc nếu trước đó không phải là đi ngang.

Gọi $dp[i][j][0 / 1 / 2]$ là khi chơi một số lượt và đứng tại ô $(i,j)$ và $0$ là tới ô $(i,j)$ bằng cách đi chéo, $1$ là tới ô $(i,j)$ bằng cách đi ngang, $2$ là đi dọc. Và khi đi tới ô thì tốn thêm $c[i][j]$ chi phí.

Thì từ $dp[i][j][\dots]$ cập nhật cho $dp[i+1][j][2],dp[i][j+1][1],dp[i+1][j+1][0]$ tùy vào điều kiện (xem code để hiểu rõ).

***Độ phức tạp:*** $O(L1\times L2)$.




