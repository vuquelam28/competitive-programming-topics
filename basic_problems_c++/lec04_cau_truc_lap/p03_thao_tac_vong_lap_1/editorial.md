# Thao Tác Vòng Lặp 1 - Editorial

Ta thực hiện ba công việc đúng như đề bài yêu cầu:

- Kiểm tra $N$ là số nguyên tố hay không: Chỉ cần xét trong đoạn $[2, N - 1]$ xem có ước nào của $N$ hay không, nếu có thì $N$ không phải số nguyên tố, ngược lại thì $N$ là số nguyên tố. Có thể sử dụng một biến $\text{is\_prime}$ để đánh dấu điều đó, nếu tồn tại ước thì gán $\text{is\_prime = false}$ rồi thoát khỏi vòng lặp luôn.
- Đếm số lượng số nguyên dương $\le N$ mà chia hết cho $5$: Dùng một vòng lặp và `if` để thực hiện kiểm tra.
- Tính tổng các số lẻ và tích các số chẵn trong các số nguyên dương nhỏ hơn hoặc bằng $N$: Dùng một vòng lặp kết hợp với `if...else` để thực hiện. Lưu ý biến lưu tích phải để kiểu dữ liệu `long long`.