# Bình Chọn Qua Điện Thoại - Editorial

Ta nhận thấy, do $1 \le a_i \le 10^5$, ta hoàn toàn có thể dùng một mảng $cnt$ để đếm phân phối, với $cnt[i]$ là số lượt bầu chọn của người thứ $i$.

Sau khi xây dựng xong mảng $cnt[i],$ ta gọi $mx$ là số lượt bầu chọn nhiều nhất cho một số báo danh. Sau đó, chỉ cần xét từng số báo danh thứ $i$ từ $1$ tới $10^5,$ nếu $cnt[i] = mx$ thì in ra $i$. 