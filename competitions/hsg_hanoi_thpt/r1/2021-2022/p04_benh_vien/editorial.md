# Bệnh Viện - Editorial

Để thuận tiện, ta sẽ coi hệ thống thành phố và các đường đi như một đồ thị dạng ***cây,*** với $n$ đỉnh và $m$ đỉnh đặc biệt (gọi là tập $P$). Bài toán cần giải là đếm số đỉnh $u$ sao cho $\text{max}\big(dist(u,v)\big) \le K; \forall v \in P$. Ở đây ta coi $dist(u,v)$ là đường đi ngắn nhất từ $u$ tới $v$.  

### Subtask 1 và 2

Dễ thấy với $n \le 10^4,$ ta hoàn toàn có thể thực hiện $\text{DFS } N$ lần. Ý tưởng như sau:
- Với mỗi đỉnh $u,$ gọi $lv[v]$ là độ dài đường đi ngắn nhất từ $u$ tới $v,$ ta có thể tính mảng này bằng cách $\text{DFS}$ từ đỉnh $u$.
- Ta sẽ kiểm tra xem $\text{max}\big(lv[v]\big); \forall v \in P$ có nhỏ hơn hoặc bằng $K$ hay không, nếu có thì đây là một đỉnh thỏa mãn.

***Độ phức tạp:*** $O(n^2)$.

### Subtask 3

Cây lúc này sẽ suy biến về đường thẳng. Xét ví dụ sau:

<center>

![Imgur](https://i.imgur.com/uYplOSP.png)
</center>

Các đỉnh $2,3,6$ là các đỉnh đặc biệt. Tuy vậy, nếu coi $1$ là ***gốc*** của cây thì ta thấy rằng, chỉ cần quan tâm tới đỉnh *gần* $1$ nhất và đỉnh *xa* $1$ nhất là hai đỉnh $2,3$. Khi ấy khoảng cách xa nhất của một đỉnh tới một đỉnh đặc biệt sẽ là $max$ khoảng cách từ đỉnh ấy tới đỉnh $2$ và $3$.

Vậy, để tổng quát, ta làm như sau:
- Để cây sẽ được đi theo thứ tự đường thẳng, chọn ***gốc*** của cây là đỉnh có duy nhất một cạnh kề. Gọi $x$ là đỉnh gần gốc nhất, $y$ là đỉnh xa gốc nhất. 
- Gọi $l[u]$ là $dist(x,u)$, $r[u]$ là $dist(y,u)$. Như vậy chỉ cần kiểm tra xem $\text{max}\big(l[u],r[u]\big)$ có nhỏ hơn hoặc bằng $K$ hay không.

***Độ phức tạp:*** $O(N)$.

### Subtask 4

Có thể thấy subtask 3 là một gợi ý khá rõ cho subtask này. 

Để giải được bài toán này, ta cần hiểu sâu một chút về ***diameter (đường kính)*** hay đường đi dài nhất trên cây. Hai đỉnh $u,v$ là hai đỉnh đầu và cuối của ***diameter*** khi và chỉ khi với mọi đỉnh $x, \text{max}\big(dist(x,u),dist(x,v)\big)$ bằng với độ dài đường đi dài nhất của $x$ tới một đỉnh trong tập.

Như vậy, ta cũng sẽ đi tìm ***diameter,*** nhưng ở một điều kiện mới, đó là tìm đường đi dài nhất trên cây giữa hai đỉnh đặc biệt, tức $u,v \in P$.

Cách tìm ***diameter*** đã khá phổ biến. Đầu tiên ta $\text{DFS}$ từ một đỉnh $x$ bất kì, thu được đỉnh $u$ là đỉnh xa với đỉnh $x$ nhất. Sau đó lại $\text{DFS}$ từ $u$, thu được đỉnh $v$ xa với đỉnh $u$ nhất. Lúc này $u,v$ là hai đỉnh đầu và cuối của ***diameter***. Tuy nhiên, để tìm đường đi dài nhất giữa hai đỉnh đặc biệt, ta cần xét các $x,u,v \in P$.

Lúc này ta xây dựng hai mảng $l, r$ và giải tương tự như subtask 3.

***Độ phức tạp:*** $O(N)$.