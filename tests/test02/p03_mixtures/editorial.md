# Trộn Hóa Chất - Editorial

Đặt $dp[i][j]$ là lượng khói ít nhất bốc lên khi gộp đoạn $[i, j]$ thành một chai hóa chất. Ta có công thức:
$$dp[i][j] = \text{min}(dp[i][p] + dp[p + 1][j]), \text{với } i \le p \le j$$

Ứng với mỗi $p,$ chắc chắn đoạn$ [i, p]$ dù có gộp như thế nào đi nữa thì luôn luôn tạo ra một chai có màu bằng tổng các màu trong đoạn $[i, p] \ \text{mod } 100,$ tương tự với đoạn $[p + 1, j]$. Vì thế, ta tính trước một mảng cộng dồn tổng các màu từ vị trí 1 tới vị trí $i$ (mảng $sum[i] = sum[i - 1] + a[i]$). Sau đó, với mỗi lần gộp đoạn tại vị trí $p,$ lượng khói bốc lên sẽ bằng:
$$[sum(i, p) \text{ mod } 100] \times [sum(p + 1, j) \text{ mod } 100]$$

Cơ sở quy hoạch động: $dp[i][i] = 0, dp[i][j] = +\infty$. Kết quả cuối cùng tất nhiên là $dp[1][N]$. 

Tuy nhiên, cần chú ý trong quá trình duyệt tính bảng phương án, phải chọn thứ tự duyệt sao cho các đoạn có $1$ phần tử được tính đầu tiên, rồi tới đoạn gồm $2$ phần tử, rồi đoạn gồm $3$ phần tử,..., cho tới đoạn có $N$ phần tử. Nếu cảm thấy khó để xác định cách duyệt thì nên sử dụng cách cài đặt đệ quy có nhớ. Chi tiết cách cài đặt bạn đọc hãy xem trong solution.

***Độ phức tạp:*** $\approx O(n^3)$ cho mỗi truy vấn.