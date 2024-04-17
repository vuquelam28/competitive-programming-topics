# Người Thắng Cuộc - Editorial

Ta sử dụng STL map trong C++ để chuyển các `string` thành phần tử trong mảng nguyên với chức năng cộng dồn điểm của người chơi. Cụ thể, trường `key` của `map` đại diện tên người chơi, và trường `value` đại diện cho điểm của người chơi đó. Với mỗi lượt chơi, ta cộng số điểm ghi được vào `key` tương ứng trong `map`. 

Người thắng cuộc sẽ là người đạt được điểm số cao nhất khi kết thúc trò chơi, hoặc là người đầu tiên có số điểm lớn hơn hoặc bằng số điểm cao nhất (tùy vào trường hợp theo đề bài). Để biết được ai là người đầu tiên giành được số điểm đó, ta cần sử dụng một mảng để lưu lại danh sách người chơi và tổng điểm họ đạt được ở mỗi lượt. Các bạn xem thêm code để biết kĩ thuật cài đặt phần này. 

***Độ phức tạp:*** $O(n \times \log n)$.