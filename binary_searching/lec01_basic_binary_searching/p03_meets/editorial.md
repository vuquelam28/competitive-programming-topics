# Gặp gỡ - Editorial

Sort mảng $d$ tăng dần và lưu mảng $id[u]$ là $d_u$ ở mảng cũ chưa sort thì sau khi sort sẽ nằm ở vị trí $id[u]$.

Với một truy vấn $x,y$. Ta sẽ chuyển $x=id[x],y=id[y]$ và làm việc trên mảng mới như bình thường và không ảnh hưởng kết quả. 

Giả sử $x<y$ thì ta có vị trí z cần tìm sẽ $x\le z\le y$ vì chọn $z<x$ hoặc $z>y$ thì sẽ làm $cost$ luôn $>d_y-d_x$ mà khi mình chọn $z=x$ thì đã được cost lời hơn $= d_y-d_x$. 

Ta sẽ chọn $z$ sao cho $d_z$ gần với $((d_x+d_y ))/2$ nhất vì sẽ cân bằng kết quả và được kết quả tối ưu. Ta có thể tìm $z$ bằng cách chặt nhị phân (dùng hàm $upper\_bound, lower\_bound$) trên mảng $d$ đã sort. Mỗi truy vấn sẽ tốn $O(log_2N)$.

Độ phức tạp: $O(Nlog_2N+Qlog_2N)$.
