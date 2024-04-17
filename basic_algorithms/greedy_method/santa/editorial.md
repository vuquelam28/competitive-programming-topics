# Ông Già Noel - Editorial

Ta sẽ sử dụng tham lam cho bài toán này:
- Đầu tiên tìm vị trí $P$ thỏa mãn $P = 2 \times K_1;$ với $K_1 \le K$.
- Ta sẽ ghép toàn bộ các món quà từ $1$ tới $P$ theo cặp đối xứng $\big(1 - N, 2 - (N - 1),...\big)$; còn các món quà từ $P + 1$ tới $N$ sẽ đặt tại hộp riêng (để luôn đảm bảo số hộp quà đúng bằng K). Tới đây dễ dàng tìm ra kích thước của hộp quà nhỏ nhất.

***Độ phức tạp:*** $O(N)$.