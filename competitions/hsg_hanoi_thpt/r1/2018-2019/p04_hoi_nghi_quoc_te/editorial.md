# Hội Nghị Quốc Tế - Editorial

Bài này dễ thấy ta sẽ quy về một đồ thị vô hướng có trọng số.

Tuy nhiên, thay vì tìm cách đi từ người thứ $u$ tới người $v$ mất trọng số ít nhất, ta sẽ tìm cách đi từ ngôn ngữ $i$ sang ngôn ngữ $j$ mất trọng số ít nhất, rồi mới dùng kết quả đó cập nhật cho các $a_{u, v}$.

Gọi $c_{u,v}$ là chi phí để đi từ ngôn ngữ $u$ tới ngôn ngữ $v$. Mảng $c$ này sẽ được tính như sau:
- Gọi $P_u$ là tập hợp những người hiểu được ngôn ngữ $u$. Tương tự ta có $P_v$ là tập hợp những người hiểu được ngôn ngữ $v$.
- Sau đó $c_{u,v}$ sẽ bằng số người $\in P_v$ mà $\notin P_u$.

Tiếp đến, ta sẽ xây dựng `vector` $adj[u]$ với mọi $1 \le u \le n$ có nghĩa là tập ngôn ngữ $v$ mà ngôn ngữ $u$ có thể trực tiếp đi được đến (cạnh của đồ thị), nghĩa là nếu có cùng một người hiểu được cả hai ngôn ngữ $u$ và $v,$ thì $adj[u]$ sẽ `push_back` thêm $v$.

Sau đó, ta sẽ thực hiện thuật toán ***Dijkstra*** cho mỗi ngôn ngữ $u \ ( 1 \le u \le n)$:
- Gọi $d(v)$ là chi phí nhỏ nhất để chuyển từ ngôn ngữ $u$ sang ngôn ngữ $v$.
- Đầu tiên gán $d(u) = |P_u|$ với $|P_u|$ là lực lượng của tập $P_u$. Tức, giả sử có hai người $a, b$ cùng nói ngôn ngữ $u$ cho nhau thì sẽ có ít nhất $d(u)$ người hiểu được.
- Sau đó, ta thực hiện thuật toán Dijkstra như bình thường, với các cạnh kề của đỉnh $u$ là tập $adj_u$ và chi phí chuyển giữa hai đỉnh $u$ và $v$ là $c(u,v)$ đã được tính ở trên.
- Đến đây, ta sẽ thấy có một vấn đề, đó là liệu kết quả ta đang tính có khi nào bị ***lặp*** hay không. Ví dụ như sau:
    - Ngôn ngữ $1$ có $2$ người hiểu là $1,2$.
    - Ngôn ngữ $2$ có $2$ người hiểu là $2,3$.
    - Ngôn ngữ $3$ có $3$ người hiểu là $1,2,3$.
    - Dễ thấy, ta  có $c(1,2) = 1, c(2,3) = 1, c(1,3) = 1$.
    - Nếu ta thực hiện Dijkstra từ $1,$ ta có $d(1) = 2,$ nó có hai đỉnh kề là $2$ và $3$:
        - Đi sang $2$ ta có: $d(2) = d(1)+c(1,2) = 3,$ 
        - Nếu từ $2$ đi sang $3$ ta lại có $d(3) = d(2) + c(2,3) = 4,$ điều này là hoàn toàn vô lý, bởi ta đã tính lặp lại $2$ lần đỉnh $3$.
        - Tuy nhiên, điều này sẽ chẳng sao cả, do trước đó, khi từ $1$ đi sang tới $3,$ ta đã cập nhật $d(3) = d(1) + c(1,3) = 3$ và đây sẽ là kết quả tối ưu rồi. 
    - Từ ví dụ trên, ta có thể thấy rằng, trong khi tính hoàn toàn có thể bị lặp, nhưng kết quả tối ưu sẽ luôn không bao giờ có trường hợp lặp số đó xảy ra.

Gọi $res(u,v)$ là mảng kết quả của bài toán, tức là số người ít nhất hiểu được lời chào của đại biểu $u$ tới đại biểu $v$.

Sau quá trình Dijkstra, ta sẽ tới với quá trình cập nhật kết quả:
- Bước này ta sẽ thực hiện ngay sau khi thực hiện xong phép Dijkstra từ đỉnh $u$.
- Gọi $best_b$ là chi phí nhỏ nhất để một người nào đó, nói bằng ngôn ngữ $u,$ để người $b$ hiểu được.
- Để tính $best_b,$ ta sẽ xét từng ngôn ngữ $i \in [1,n],$ lấy từng người $b \in P_i$ rồi cập nhật $best_b = \text{min}\big(best_b,d(i)\big)$.
- Sau đó, ta sẽ xét từng người $v \in P_u,$ và xét từng $i$ thỏa mãn $1 \le i \le m,$ cập nhật $res(v,i) = \text{min}\big(res(v,i),best_i\big)$. Điều này có nghĩa, người $v$ sẽ bắt đầu chào bằng ngôn ngữ $u,$ và xem trong quá trình phiên dịch lời chào này cho người $i,$ số người ít nhất hiểu được sẽ là bao nhiêu (hay chính là $best_i$).

Sau đó chỉ cần in ra mảng $res,$ lưu ý các trường hợp không có cách đi.

***Độ phức tạp:*** $O(n \times \log)$.