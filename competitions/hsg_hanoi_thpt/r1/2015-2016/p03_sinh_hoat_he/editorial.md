# Sinh Hoạt Hè - Editorial

Ý tưởng dựa trên sắp xếp và đếm phân phối.

Trước hết, ta nhận thấy tập các bạn nam và tập các bạn nữ có thể xử lý như hai bài toán riêng biệt (do những cặp ở chung phòng bắt buộc phải cùng giới tính), vì thế ta chia tập học sinh thành hai tập con $male$ chứa các bạn nam và $female$ chứa các bạn nữ (tất nhiên là kèm theo hai chỉ số điểm của mỗi học sinh).

Với tập $male,$ ta xử lý như sau:
- Đặt $cnt[v]$ là số lượng giá trị $v$ trong tập. Mảng này luôn được duy trì để sao cho khi xét tới vị trí $i$ thì thông tin trong mảng chỉ là thông tin của đoạn vị trí nằm trước $i$ và thỏa mãn có chung giá trị với $male[i]$ (chung với giá trị $KHTN$ hay $KHXH$ thì tùy vào bước xử lý được mô tả ở bên dưới). 
- Đầu tiên, thử sắp xếp lại tập theo thứ tự điểm KHTN tăng dần. Ở đây ta sẽ đếm số cách xếp các cặp có chung điểm $KHTN$ và khác điểm $KHXH$.
    - Xét từng đoạn phần tử có điểm $KHTN$ giống nhau. 
    - Giả sử xét tới phần tử $male[i]$ và $male[i].KHTN = male[i - 1].KHTN,$ tức là $male[i]$ sẽ ghép được với tất cả những $male[j]$ nằm trước nó mà có chung giá trị $KHTN$ với nó. Ta sẽ chỉ tính những giá trị $male[j]$ nào có điểm $KHXH$ khác với $male[i].KHXH$. 
    - Để đếm được, ta vận dụng mảng $cnt[v]$ để tính số lần xuất hiện của tất cả giá trị $v = 1...male[i].KHXH - 1$. Việc xét $v$ này vừa đảm bảo chỉ xét những bạn nam có điểm $KHXH$ khác với bạn thứ $i$ lại vừa đảm bảo không bị đếm trùng các cặp nhiều lần.
    - Nếu như xét sang $male[i]$ mà $male[i].KHTN \ne male[i - 1].KHTN$ tức là đã chuyển qua một đoạn giá trị có điểm $KHTN$ khác. Ta khởi tạo lại mảng $cnt[] = 0$ rồi cập nhật tăng $cnt\big[male[i].KHTN\big]$ lên $1$ đơn vị để sẵn sàng cho vị trí tiếp theo. 
- Tiếp theo ta lại thử đếm số cách xếp các cặp có chung điểm $KHXH$ và khác điểm $KHTN$. Lặp lại quy trình như trên, chỉ khác là ta phải sắp xếp lại danh sách tăng dần theo điểm $KHXH$.

Xử lý tương tự với tập $female$.

***Độ phức tạp:*** $O(n \times 100)$.