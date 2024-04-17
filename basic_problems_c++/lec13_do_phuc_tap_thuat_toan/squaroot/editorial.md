# Căn Bậc Hai - Editorial

Giả sử $n$ có thể tách ra thành $i \times j$ với $i, j$ là hai ước nguyên dương của $n,$ tức là $\sqrt{n} = \sqrt{i \times j}$. Khi đó, ta có thể đưa $i$ hoặc $j$ ra ngoài khi và chỉ khi $i$ hoặc $j$ là số chính phương. Vậy ta tìm các ước là số chính phương của $n$ và lấy giá trị lớn nhất, rồi in ra căn bậc hai của giá trị đó.

Độ phức tạp: $O(\sqrt{n})$.