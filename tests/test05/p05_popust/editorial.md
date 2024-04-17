# Vào Nhà Hàng - Editorial

### Ý tưởng

Đầu tiên, ta sắp xếp lại các bàn theo chiều tăng dần của giá khi không đặt trước $b_i$.

Ta sẽ xây dựng thuật toán tham lam cho bài này và chia trường hợp để tính toán kết quả. Có ba trường hợp sau khi chọn $k$ bàn ăn:
- $k = 1$: Ăn ở $1$ bàn duy nhất, hiển nhiên sẽ đặt trước một bàn có giá đặt thấp nhất.
- $1 < k \le minpos$: Đặt trước bàn ở $minpos$ (bàn có giá đặt thấp nhất), và ăn thêm ở $(k - 1)$ bàn có giá không đặt thấp nhất. Tính trước tổng tiền của các bàn này bằng mảng cộng dồn (giả sử nó là $sumb$). Có thể chứng minh bằng phương pháp phản chứng như sau:
  - Nếu đặt bàn ở $minpos,$ tổng chi phí tốt nhất là: $C_1 = sumb[k - 1] + a_{minpos}$.
  - Giả sử tồn tại một vị trí $j$ nào đó trong đoạn $[1...minpos)$ mà nếu ta đặt trước ở bàn đó sẽ thu được tổng tiền tốt hơn đặt trước ở bàn $minpos$. Vì đang ăn ở $k$ bàn, tổng chi phí tốt nhất khi đó là:
  $$C2 = (sumb[k] - b_j + a_j) < C_1 (*)$$ do giả sử chi phí này tốt hơn.
  - Mà các bàn được sắp tăng dần theo giá không đặt trước, tức là:
  $$\begin{cases} sumb[k] - b_j \ge sumb[k - 1]. \\a_j > a[minpos]. \end{cases}$$         
  
  Từ đây ta thấy bất đẳng thức $(*)$ không thể xảy ra, điều giả sử là sai. Ngoài ra, dĩ nhiên ta cũng không thể đặt trước bàn ở vị trí $j$ nào đó trong đoạn $[minpos + 1...n],$ vì chi phí sẽ là $sumb[k - 1] + a_j > C_1$. Vậy trường hợp này việc đặt trước bàn ở $minpos$ là đúng đắn.

- $minpos < k \le N$: Trường hợp này không thể chọn bàn nào có giá đặt nhỏ nhất để đặt trước nữa. Lí do là vì, nếu $a_{minpos}$ nhỏ nhưng $b_{minpos}$ cũng nhỏ, thì có thể tồn tại một vị trí $j$ nào đó thỏa mãn $a_j + b_{minpos} < a_{minpos} + b_j,$ dẫn tới việc đặt bàn trước ở vị trí $minpos$ chưa chắc đã tốt. Khi đó, ta sẽ thử hai trường hợp nhỏ như sau:
  - Chọn bàn có giá đặt nhỏ nhất trong đoạn $[k, N]$ và ăn thêm các bàn trong đoạn $\big[1...(k - 1)\big]$ với giá không đặt trước. Tổng tiền phải trả sẽ là $C_1 = sumb[k - 1] + mina[k]$ (với $mina[k]$ là giá bàn đặt trước thấp nhất trong đoạn $[k...n]$) - vì ta sẽ bỏ $1$ bàn có giá không đặt lớn nhất, thay vào đó $1$ bàn có giá đặt nhỏ nhất.
  - Chọn bàn đặt trong đoạn $\big[1, (k - 1)\big],$ và đồng nghĩa với việc phải ăn thêm bàn thứ $k$ với giá $b_k$. Khi đó tổng tiền sẽ trở thành: $C_2 = sumb[k] + (a_j - b_j),$ với $j$ là bàn được chọn đặt trước.
  Ta có thể duyệt $j$ ngược lại để xét mọi phương án bàn đặt $j$ với độ phức tạp $O(N^2)$. Tuy nhiên, nhận xét để $C_2$ nhỏ nhất, ta cần $(a_j - b_j)$ nhỏ nhất, bước này có thể sử dụng `priority_queue` để làm trong $O(\log N)$. Sau đó, ta trả ra kết quả là $\text{min}(C_1, C_2)$ cho trường hợp này.

### Kĩ thuật cài đặt

Xây dựng trước một số mảng và biến đặc biệt hỗ trợ trong khi lập trình:
- Gọi $minpos$ là vị trí của bàn có giá đặt trước thấp nhất sau khi đã sắp xếp.
- $mina[i]$: Giá bàn đặt trước thấp nhất từ $i$ tới $n$.
- $sumb[i]$: Tổng giá tiền không đặt trước của các bàn từ $1$ tới $i$.

Sử dụng thêm một hàng đợi ưu tiên $\text{qu\_min}$: Chứa các giá trị $a_i - b_i$.
