# Đếm Tổng - Editorial

Bạn sử dụng kĩ thuật duyệt quay lui sinh nhị phân. Ở mỗi phần tử ta có hai lựa chọn là chọn hoặc không chọn phần tử đó vào tập, sau đó tính tổng và lưu các tổng vào một mảng. Cuối cùng chỉ cần đếm các phần tử khác nhau trong mảng để đưa ra kết quả.

***Độ phức tạp:*** $O(\text{max}\big(2^n, \alpha)\big)$ với $\alpha$ là độ phức tạp của bước đếm các phần tử khác nhau trong mảng tổng.