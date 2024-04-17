# Bắn Tên - Editorial

### Subtask 1

Gọi $broken[i]$ là mảng đánh dấu quả bóng thứ $i$ đã vỡ hay chưa.

Duyệt qua từng quả bóng, nếu quả nào chưa vỡ ta sẽ bắn một mũi tên ở độ cao $h_i$ này, rồi dùng thêm một vòng lặp để xét qua các quả bóng phía sau, quả bóng nào cùng độ cao với mũi tên thì đánh dấu nó đã bị vỡ, rồi giảm độ cao của mũi tên đi $1$ tới khi đi hết các quả bóng hoặc mũi tên có độ cao bằng $0$. 

***Độ phức tạp:*** $O(n^2)$.

### Subtask 2

Gọi $f[x]$ là số lượng mũi tên bay ở độ cao $x$. Ban đầu tất cả $f[x]$ bằng $0$.

Vẫn giữ ý tưởng subtask $1,$ tuy nhiên khi tới độ cao $h_i$ ta sẽ xử lý như sau:
- Nếu $f[h_i] = 0$ - tức là ở độ cao $h_i$ chưa có mũi tên nào, thì buộc lòng phải bắn một mũi tên ở độ cao này. Ngay lập tức, quả bóng $i$ sẽ vỡ và mũi tên sẽ giảm xuống độ cao $h_i - 1 \to$ ta tăng $f[h_i - 1]$ lên $1$.
- Nếu $f[h_i] \ne 0$ thì tất nhiên quả bóng $h_i$ sẽ vỡ. Khi đó một mũi tên ở độ cao $h_i$ cũng sẽ bị giảm độ cao, ta thực hiện giảm $f[h_i]$ và tăng $f[h_i - 1]$.

***Độ phức tạp:*** $O(n)$.
