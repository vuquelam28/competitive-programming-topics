# Tổng Power - Editorial

Bài toán có thể quy về sinh một tập $\{d_1, d_2,..., d_k\}$ sao cho $d_1^n + d_2^n + \cdots + d_k^n = x$. Dựa vào ràng buộc, ta sẽ có thể dự trù được các $d_i$ có thể nằm trong khoảng giá trị nào.

Sử dụng quay lui, duyệt hết các trường hợp có thể. Để ý là các trường hợp hoán vị cũng chỉ tính một lần nên khi quay lui, phần tử trạng thái ở vị trí sau ta luôn duyệt những giá trị lớn hơn giá trị ở vị trí trước. Có thể cải tiến hàm tính lũy thừa để tăng tốc độ chạy.