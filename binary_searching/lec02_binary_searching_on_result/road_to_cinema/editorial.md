# Rạp Chiếu Phim - Editorial

Đầu tiên, ta thêm hai địa điểm có tọa độ $0$ và $s$ vào danh sách các trạm xăng, coi đó là hai trạm xăng. Sắp xếp lại các địa điểm theo chiều tăng dần trên trục số.

Nhận xét rằng, nếu một chiếc xe có dung tích bình xăng là $G$ có thể đi tới rạp chiếu phim trong không quá $t$ phút, thì tất cả những chiếc xe có dung tích bình xăng lớn hơn $G$ cũng đều có thể đi tới được rạp chiếu phim trong thời gian cho phép (xăng nhiều hơn tất nhiên khả năng di chuyển sẽ nhanh hơn). Vì thế, ý tưởng là ta sẽ đi tìm giá trị $G$ nhỏ nhất sao cho mọi chiếc xe có dung tích bình xăng lớn hơn hoặc bằng $G$ đều có thể di chuyển được tới rạp chiếu phim trong không quá $t$ phút, rồi chọn chiếc xe có giá thuê nhỏ nhất trong những chiếc xe đó. 

Giá trị $G$ có thể tìm bằng cách tìm kiếm nhị phân trên đoạn $[0, 10^9]$. Điều ta cần quan tâm là, với một chiếc xe có dung tích $G$, thì cách di chuyển như thế nào sẽ là tối ưu để có thể đi từ địa điểm $0$ tới địa điểm $s?$ Điều này có thể xác định bằng một hàm $P(G)$ bằng phương pháp tham lam như sau: Gọi khoảng cách giữa địa điểm $i$ và địa điểm $i - 1$ là $d$. Chia hành trình ra làm nhiều đoạn liên tiếp, và xe sẽ lần lượt xuất phát từ các địa điểm $i - 1$ tiến tới địa điểm $i$ cho tới khi đến đích. Có hai trường hợp xảy ra:

- Nếu như $d > G,$ thì xe không thể di chuyển từ $i - 1$ tới $i$ và hàm $P(G)$ sẽ trả về false ngay lập tức.
- Nếu như $d \le G,$ thì xe có thể di chuyển ở chế độ nhanh trong số kilomet là $k = \text{min}(d, G - d)$ kilomet, và thời gian di chuyển đoạn đường này sẽ là: $k + (d - k) \times 2 = 2d - k$.
    *Chứng minh:* Giả sử ta đi được $k$ kilomet ở chế độ nhanh, ta sẽ muốn tìm ra $k$ lớn nhất để giảm thời gian di chuyển. Mà ta có:
    $$2k + (d - k) \le G$$ $$\Leftrightarrow k \le G - d$$

    Vậy suy ra $k$ đạt giá trị lớn nhất là $G - d$. Tuy nhiên, nếu như $d < G - d$ thì có thể coi như cả đoạn đường đó đều có thể đi bằng chế độ nhanh, vậy nên $k = \text{min}(d, G - d)$.

Tính tổng thời gian di chuyển trên tất cả các đoạn đường, nếu tổng đó không vượt quá $t$ thì hàm $P(G)$ sẽ trả về true và ta giảm $G$ đi tới khi $G$ đạt cực tiểu. 

Cuối cùng trong các xe thỏa mãn dung tích bình xăng lớn hơn hoặc bằng $G_{min},$ chọn ra xe có giá thuê nhỏ nhất.

***Độ phức tạp:*** $O\big(\log(10^9) \times k\big)$.



