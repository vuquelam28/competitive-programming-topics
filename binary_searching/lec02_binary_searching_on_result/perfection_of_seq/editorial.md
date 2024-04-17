# Độ Hoàn Hảo Của Dãy Con - Editorial

### Subtask 1

Duyệt hai vòng lặp để xét tất cả các đoạn con của dãy ban đầu.

### Subtask 2

Trước tiên xây dựng mảng tổng tiền tố $sum[i]$ là tổng các phần tử từ $a_1$ tới $a_i$.

Ta sử dụng two pointers: Xét cặp vị trí $(i, j)$ đầu tiên thỏa mãn $sum[j] - sum[i] \ge k,$ đồng nghĩa với việc đoạn $[i + 1, j]$ có tổng lớn hơn hoặc bằng $k$. Lấy max độ hoàn hảo của đoạn đó.

Từ từ dịch con trỏ $i$ lên tới khi $sum[j] - sum[i] < k$. Mỗi lần dịch lên ta lại cập nhật độ hoàn hảo của đoạn $[i + 1, j],$ vì đoạn này vẫn có tổng lớn hơn hoặc bằng $k$.

Sau khi dịch chuyển $i$ xong, xảy ra $2$ trường hợp:
- Phần tử $i$ sau khi dịch chuyển vẫn giữ nguyên: Ta tăng $j$ lên $1$.
- Phần tử $i$ sau khi dịch chuyển thay đổi so với ban đầu: Dịch chuyển $j$ lên tới khi $sum[j] - sum[i] \ge K$ trở lại.

Lưu ý do $sum[j] - sum[i]$ tương ứng với đoạn $[i + 1, j],$ nên $j$ bắt đầu từ $1, i$ bắt đầu từ $0$ tới $j - 1$.

***Độ phức tạp:*** $O(n)$.