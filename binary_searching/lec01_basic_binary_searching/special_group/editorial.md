# Xếp Nhóm - Editorial

Trước tiên, sắp xếp lại các số trong dãy tăng dần. Đặt khoảng cách giữa hai số trong cùng một nhóm là $\text{diff}$ thì $\text{diff}$ có thể nhận một trong các giá trị $\{a_2 - a_1, a_3 - a_1, a_4 - a_1,..., a_{2N} - a_1\}$.

Với subtask $1,$ dĩ nhiên kết quả luôn luôn là $1$ cách chia duy nhất.

Với subtask $2,$ có thể thử quay lui để chia $2N$ phần tử thành $N$ nhóm với chênh lệch trong mỗi nhóm là $\text{diff}$.

Với subtask $3,$ gọi thêm một mảng $\text{is\_chosen}[i]$ có nghĩa là phần tử thứ $i$ đã được chọn hay chưa. Ứng với mỗi $\text{diff},$ duyệt mọi phần tử $a_i$ chưa được chọn và duyệt thêm một vòng lặp nữa để tìm xem trong dãy có tồn tại phần tử $a_i + \text{diff}$ hay không, nếu có thì đánh dấu cả hai phần tử đó đã được chọn. Nếu như mọi phần tử của dãy đều được chọn vào một nhóm nào đó thì kết luận giá trị $\text{diff}$ này có thể chia nhóm được và tăng số cách chia thêm một.

Với subtask $4,$ vẫn sử dụng ý tưởng ở subtask $3,$ nhưng ứng với mỗi $\text{diff},$ trong khi duyệt các $a_i$ cần áp dụng giải thuật tìm kiếm nhị phân để xác định trong dãy có tồn tại $a_i + \text{diff}$ hay không (nhớ là dãy ban đầu chỉ gồm toàn các phần tử đôi một khác nhau nên không sợ bị trùng).

Với subtask $5,$ nhận xét thấy, $\text{diff}$ có thể nhận một trong các giá trị $\{1, 2, 3, ..., 2N - 1\}$ (vì các phần tử là $1, 2, 3,..., 2N$). Từ đó suy ra, phần tử $a_i$ buộc phải ghép với phần tử $a_{i + diff},$ mà muốn ghép được đúng $N$ nhóm thì $\text{diff}$ bắt buộc phải là các ***ước*** của $N$. Vậy subtask này quy về bài toán đếm số ước nguyên dương của $N$.