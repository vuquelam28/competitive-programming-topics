# Những Con Ngựa Giận Dữ - Editorial

### Subtask 1

Dùng quay lui để thử đặt $m$ con ngựa vào $n$ chuồng, sau đó tính khoảng cách nhỏ nhất giữa hai chuồng trong từng phương án, lấy max tất cả để tìm ra đáp án.

***Độ phức tạp:*** $O(n!)$.

### Subtask 2

Do kết quả phải là một trong các giá trị $|x_j - x_i| \ (i \le j)$ nên ta thử xét tất cả các kết quả này, sau đó cố gắng xếp $m$ con ngựa vào các chuồng sao cho khoảng cách giữa hai con ngựa liên tiếp lớn hơn hoặc bằng $|x_j - x_i|$ đang xét. 

Các bạn có thể tạo trước một mảng chứa các kết quả $|x_j - x_i|;$ sắp xếp giảm dần rồi duyệt để tìm ra kết quả nhanh hơn một chút.

***Độ phức tạp:*** $O(n^2 \times m)$.

### Subtask 3

Giả sử khoảng cách giữa hai chuồng liên tiếp có ngựa là $d$. 

Nếu như tồn tại một giá trị $d$ sao cho xếp được đủ $m$ con ngựa vào $n$ chuồng, thì chắc chắn các giá trị $d - 1, d - 2,\dots, 1$ đều thỏa mãn xếp được đủ $m$ con ngựa. Do đó ta tiến hành tìm kiếm nhị phân để thu được giá trị $d$ lớn nhất thỏa mãn xếp được $m$ con ngựa.

Trước hết sắp xếp tăng dần các tọa độ chuồng ngựa.

Ứng với mỗi $d,$ cách xếp ngựa như sau: Xếp $1$ con vào chuồng đầu tiên (tọa độ $x_0$), sau đó xếp con thứ $2$ vào vị trí gần nhất cách đó tối thiểu $d$ đơn vị, rồi lại xếp con thứ $3,\dots$cứ tương tự như vậy, vừa xếp vừa đếm số lượng ngựa xếp được. Nếu như số lượng đó lớn hơn hoặc bằng $m$ thì tăng $d$ lên, ngược lại giảm $d$ xuống.

Để cho dễ, ta chặt nhị phân luôn $d$ trong đoạn $[1, 10^9]$.

***Độ phức tạp:*** $O\big(\log(10^9).n\big)$.