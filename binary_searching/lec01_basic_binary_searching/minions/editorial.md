# Minions Bầu Cử - Editorial

Tạo mảng tổng tiền tố trên mảng $s,$ đặt là $sum[]$.

Với mỗi minion $j,$ ta sẽ xem nó có thể bầu cho những minions $i$ nào:

- TH1: Khi $j > i,$ thì minion $j$ sẽ bầu cho minion $i$ nếu như $s[j] \ge sum[j - 1] - sum[i]$.
Ở trường hợp này, nhận xét thấy $(sum[j - 1] - sum[i])$ sẽ giảm dần với $i = 1 \rightarrow (j - 1)$. Ta chặt nhị phân tìm vị trí $\text{pos\_left}$ nhỏ nhất sao cho $s[j] \ge sum[j - 1] - sum[\text{pos\_left}]$. Khi đó minion $j$ sẽ bầu cho các minion từ vị trí $\text{pos\_left}$ tới vị trí $(j - 1)$. Update bằng kĩ thuật range update lên mảng vote.

- TH2: Khi $j < i,$ thì minion $j$ sẽ bầu cho minion $i$ nếu $s[j] \ge sum[i - 1] - sum[j]$.
Ở trường hợp này, nhận xét thấy $sum[i - 1] - sum[j]$ tăng dần với $i = (j + 1) \rightarrow N$. Ta chặt nhị phân tìm vị trí $\text{pos\_right}$ lớn nhất sao cho $s[j] \ge sum[\text{pos\_right} - 1] - sum[j]$. Khi đó minion $j$ sẽ bầu cho các minion từ vị trí $(j + 1)$ tới $\text{pos\_right}$. Tương tự, ta update lên mảng vote bằng kĩ thuật range update.

Cuối cùng, cập nhật lại mảng vote và đưa ra kết quả ở mỗi vị trí.
