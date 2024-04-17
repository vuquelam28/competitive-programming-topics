# Minimize Distance - Editorial

Coi con đường mà Hoàng cần di chuyển là một trục tọa độ thẳng, với vị trí cửa hàng nằm ở tọa độ $0$.

Chiến lược tham lam có thể sử dụng để giải quyết bài toán này. Vì ta muốn tổng quãng đường di chuyển là nhỏ nhất có thể, nên luôn luôn ưu tiên đi từ xa về gần để phát báo. Việc này có thể thực hiện độc lập trên nửa bên dương của trục tọa độ (gồm các ngôi nhà ở vị trí dương) và nửa bên âm của trục tọa độ (gồm các ngôi nhà ở vị trí âm). Vậy ta chia các ngôi nhà ra làm hai bên, một bên toàn tọa độ dương, một bên toàn tọa độ âm, sắp xếp chúng lại rồi xử lý độc lập.

Giả sử xét tập tọa độ của bên dương gồm $n_1$ ngôi nhà. Mỗi lần di chuyển, Hoàng có thể phát báo cho $k$ ngôi nhà liên tiếp từ xa về gần. Vậy tổng quãng đường di chuyển với một bên là $\sum_{i = n_1, i = i - k}^1 2 \times x_i$ (một lần di chuyển sẽ bao gồm đi từ $0$ tới điểm xa nhất chưa được phát báo và đi từ điểm cuối cùng được phát báo trong lần đó trở về cửa hàng). Xử lý tương tự với tập tọa độ bên âm (nhớ là đi từ xa về gần).

Tuy nhiên, do ở lần di chuyển cuối cùng, Hoàng không cần quay trở lại cửa hàng nữa, nên ta sẽ xử lý một chút ở đây. Ta chọn ra ngôi nhà có tọa độ xa nhất so với gốc tọa độ và để nó lại để phát báo cuối cùng (sau khi phát cho ngôi nhà này thì sẽ đứng lại luôn ở đó chứ không quay về nữa). Còn các ngôi nhà còn lại, ta vẫn thực hiện đi từ xa về gần đúng như thuật toán ở trên. Điều này dẫn tới công thức ở trên sẽ bị thừa mất một lần di chuyển tới $x_i$ xa nhất, ta trừ bớt đi ở kết quả lượng đó.

***Độ phức tạp:*** $O\big(n \times \log(n)\big)$.
