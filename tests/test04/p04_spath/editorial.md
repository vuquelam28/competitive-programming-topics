# Spath - Editorial

### Subtask 1

Với mỗi truy vấn, ta Dijkstra từ $(x,y)$.

***Độ phức tạp:*** $O\big(q \times m \times n \times \log_2 (m \times n)\big)$.

### Subtask 2

Không mất tổng quát, giả sử $y<v$. Đặt $dp[i][j]$ là khoảng cách ngắn nhất khi đi từ $(x,y)$ tới $(i,j)$. Việc tính $dp[i][j]$ chỉ phụ thuộc vào $dp[..][j-1]$ nên với mỗi truy vấn sẽ tốn $O(n)$. 

***Độ phức tạp:*** $O(q \times n)$.

### Subtask 3

Gom những truy vấn có chung vị trí xuất phát $(x,y)$ lại với nhau để xử lý. Nhận thấy chỉ có tối đa m×n nhóm như vậy nên chỉ cần Dijkstra $O(m*n)$ lần. 

***Độ phức tạp:*** $O\big(m^2 \times n^2 \times \log_2 (m \times n)\big)$.

### Subtask 4

Ta có tính chất: Giả sử đường đi tối ưu từ $(x,y)$ tới $(u,v)$ phải đi qua cột $t$ thì tồn tại một ô $(z,t)$ nằm trên đường đi ấy.

Ta dùng phương pháp chia để trị để giải quyết bài toán này.

Xét đoạn mã sau:

```cpp
void solve (tập S, cực trái l, cực phải r) {
        if (r > l hoặc tập S rỗng) return
        int mid = (r+l)/2
        for (int i=1; i<=m; i++) {
            dijkstra (l,r,i,mid) (thực hiện thuật toán dijkstra từ ô (i,mid) ra tất cả các ô có cột trong đoạn [l,r])
            Cập nhật mọi truy vấn trong tập S, giả định rằng đường đi tối ưu từ (x,y) --> (u,v) sẽ đi qua ô (i,mid)
         }
         Tập trái = những truy vấn trong tập s có max(y,v) < mid
         Tập phải = những truy vấn trong tập s có min(y,v) > mid
         solve (Tập trái, l, mid-1)
         solve (Tập phải, mid+1, r)
}

```

Như vậy, với mỗi lần đệ quy, ta sẽ Dijkstra $m$ lần. Tuy nhiên, mỗi lần thực hiện Dijkstra ta chỉ giới hạn trong đoạn $[l,r]$. Tức thực tế, ta chỉ cần Dijkstra qua tổng cộng $n \times m \times \log_n$ ô. 

Tuy vậy, ta thấy rằng có một trường hợp đặc biệt:

<center>

![Imgur](https://imgur.com/xKb5SZy.png)
</center>

Với trường hợp này (hai ô màu xanh lá là truy vấn đang xét, hai đường thẳng màu đỏ là hai biên, đường thẳng màu cam là hàng $mid,$ đường đi màu xanh nước biển là đường đi tối ưu), ta nhận thấy rằng việc chỉ Dijkstra trong khoảng $[l,r]$ dẫn tới việc các ô trong hàng $mid$ không thể đi theo đường màu xanh nước biển để tạo ra đường đi tối ưu, liệu nó có dẫn tới việc không thể cập nhật kết quả tối ưu? Câu trả lời là không. Thật vậy, ở lần đầu ta gọi hàm $solve(S,1,n),$ không thể có đường đi nào ra ngoài bảng. Tiếp theo tới đệ quy cho tập con trái, giả sử có một đường đi tối ưu phải ra ngoài khoảng $[l,mid-1],$ vậy nó buộc phải đi qua ô $mid,$ tức là ta đã xét tới nó rồi. Tương tự với tập con bên phải. Như vậy hàm trên hoàn toàn đúng.