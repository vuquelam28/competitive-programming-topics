# Đường Hầm Kì Vĩ - Editorial

Xét gốc của cây ở $1,$ giả sử bỏ cạnh $u-v$ thì ta phải thêm cạnh mới theo cách để path dài nhất của cây mới là nhỏ nhất.

Gọi $du$ là path dài nhất của cây chứa $u,$ $dv$ là path dài nhất của cây chứa $v$. Câu trả lời tối ưu sẽ là nối điểm ở giữa $du$ với điểm ở giữa $dv$. Khi đó path dài nhất của cây mới sẽ là $\text{max}\Big(du, dv, \lfloor\frac{du+1}{2}\rfloor + \lfloor\frac{dv+1}{2}\rfloor+1\Big)$. 

Ta sẽ dùng quy hoạch động để tính được path dài nhất trong gốc $v$ và ngoài gốc $v$ từ đó giả sử bỏ cạnh $u-v$ thì đã có $du$ và $dv$ chỉ việc lấy $min$ kết quả.

Gọi $dp[u][0]$ là độ dài của path dài nhất trong subtree của $u$.
       
Gọi $dp[u][1]$ là độ dài của path dài nhất nằm ngoài subtree của $u$.

Nếu tính được hai giá trị này của mọi $u$ và lấy max tích thì sẽ luôn được kết quả tích tối ưu. Vì chắc chắn kết quả cuối cùng sẽ có một $u$ từ $1$ tới $n$ nào đó nên khi ta lấy max hết thì sẽ lấy được kết quả tối ưu này luôn. 

Gọi $dp1[u][0],dp1[u][1]$ lần lượt là độ dài path dài nhất bắt đầu ở $u$ đi xuống subtree của $u$ và độ dài path dài nhất bắt đầu ở $u$ đi lên ra ngoài subtree của $u$.

Ta có các công thức truy hồi: 

$dp1[u][0]=\text{max}(dp1[v][0]+1)$ với $v$ là con của $u$.

$dp[u][0] = \text{max}(dp[v][0]$, (tổng hai path dài nhất đi qua $u$) $= 2$ giá trị $dp1[v][0]$ lớn nhất $+ 2)$.

Ta sẽ tính hai giá trị trên bằng cách $\text{DFS}$ một lần xuống và tính $u$ từ $v$.

$dp1[v][1]=\text{max}(dp1[u][1]+1)$ - Path dài nhất bắt đầu ở $u$ và đi xuống một con của $u$ không phải là $v + 1$ (Dùng các `vector` $pre1, suf1$ để lấy max path dài nhất ở các cây con khác không phải $v$ một cách nhanh chóng).

$dp[v][1]=\text{max}(dp[u][1])$ - Tổng $2$ path dài nhất kết thúc ở $u$ nhưng $2$ path này không dùng đỉnh nào trong subtree của $v$ (sẽ gồm $dp1[u][1]$ và các $dp1[v' ][0]$ với $v'$ là các con của $u$ khác $v$) (Dùng các `vector` $pre, suf$ để lấy max đoạn này nhanh chóng, và vì lấy $2$ path dài nhất nên phải lưu path dài nhì ở cả $pre$ và $suf$ nữa).

$dp[v][1]$ còn lấy max của các $dp[v' ][0]$ với $v'$ là con của $u$ khác $v$.

Kết quả là $max(dp[u][0] \times dp[u][1])$.

Code mẫu có khai báo $dp[u][0]$ thành $dp[0][u]$ và $dp[0][u]$ ý nghĩa là số đỉnh trên path chứ không phải độ dài của path (số đỉnh trên path = độ dài của path + $1$) nên trong những chuyển trạng thái có một chút thay đổi cũng như phần lấy kết quả.

***Độ phức tạp:*** $O(N)$.
