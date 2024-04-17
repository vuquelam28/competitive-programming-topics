# Tìm Số - Editorial

Ta sẽ duyệt qua từng phần tử $i$ trong đoạn $[p,q]$ và kiểm tra xem đảo ngược của nó có phải là số nguyên tố hay không.

Tuy nhiên, để giành được điểm tối đa được bài này, ta cần kiểm tra số nguyên tố trong $O(1)$ thay vì $O(\sqrt n)$.

Để làm được điều này, ta dùng thuật toán ***sàng số nguyên tố***. Ta sẽ sàng để chuẩn bị trước một mảng $p$, nếu $p_i = \text{true}$ thì số $i$ là số nguyên tố. Đây là ý tưởng cải tiến của subtask 2.

Do $1 \le p,q \le 10^7$, nên một số $y$ là đảo ngược của một số $i \in [p,q]$ cũng sẽ $\le 10^7$. Do vậy ta chỉ cần sàng tới $10^7$.

Sau đó, duyệt từng phần tử và kiểm tra xem đảo ngược của nó có phải số nguyên tố hay không. Lưu ý, để tránh bị quá thời gian thì bài này không nên khai báo quá nhiều thư viện, chỉ nên sử dụng những thư viện nào cần thiết (đối với ngôn ngữ C++).