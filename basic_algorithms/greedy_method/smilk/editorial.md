# Vắt Sữa - Editorial

Ta sort các con bò lại theo thời điểm $d_i$ tăng dần. Ta sẽ vắt sữa bò theo thứ tự tăng dần $d_i$ này.  

Từ $1 \rightarrow n,$ vắt tới con bò thứ $i,$ thêm $g_i$ vào `multiset` những con bò được vắt sữa, nếu tổng thời gian vắt hiện tại $>d_i$ thì bỏ con bò có lượng sữa $g_j$ bé nhất đang ở trong `multiset` những con bò đã được vắt sữa.  

Dùng một `multiset` (các phần tử có thể trùng nhau nên không dùng `set`) để lưu các $g_i,$ thêm $g_i,$ xóa $g_i$ trong $O(log_2 N)$.

Thuật tham lam trên đúng vì xét con bò $i$ là con bò đầu tiên khiến cho tổng thời gian vắt sữa $> d_i$. Nghĩa là ta không thể đồng thời lấy được hết tất cả sữa $g_{1 \to i}$ của $i$ con bò đầu tiên. Ta phải ít nhất bỏ đi một con, vì để tối ưu kết quả ta sẽ bỏ con bò cho ít sữa nhất. Và cứ tiếp tục thêm bỏ như thế sẽ luôn được kết quả tối ưu.

***Độ phức tạp:*** $O(N \times \log_2 N)$.
