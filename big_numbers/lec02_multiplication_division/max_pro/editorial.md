# Tích Lớn Nhất - Editorial

Với subtask $1,$ ta thực hiện tất cả các phép nhân hai cặp số và tìm ra kết quả. 

Với subtask $2,$ ta khéo léo nhận xét như sau để làm giảm số thao tác cần thực hiện:

- Nếu có ít nhất hai số âm thì lấy tích hai số âm nhỏ nhất (lấy giá trị tuyệt đối của hai số đó nhân với nhau).
- Nếu có ít nhất hai số dương thì lấy tích hai số dương lớn nhất.

Tuy nhiên, trong subtask này ta sẽ cần cài đặt phép toán nhân hai số lớn và chuyển một số kiểu `long long` sang kiểu số lớn (do đề bài cho trước là các số nguyên). 

***Độ phức tạp:*** $O(\alpha)$ với $\alpha$ là độ phức tạp phép nhân hai số lớn. 
