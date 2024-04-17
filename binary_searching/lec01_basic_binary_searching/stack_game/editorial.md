# Trò Chơi Trên Ngăn Xếp - Editorial

Nhận thấy ta cần tìm hai vị trí $i$ và $j$ sao cho tổng $[(A[1...i]) + (B[1...j])] \le X$ và $(i + j)$ lớn nhất.

Với sub 1: duyệt trâu $2$ vị trí $i$ và $j$ tốn hai vòng for, như vậy tổng độ phức tạp $O(M \times N)$.

Cải tiến cho sub 2:
- Đặt $\text{prefix\_sum}[i]$: Tổng các số từ $b_1$ tới $b_i$.
- Xét các vị trí $i$ từ $0$ tới $M,$ chặt nhị phân tìm vị trí $j$ lớn nhất sao cho tổng $(A[1...i]) + \text{prefix\_sum}[j] \le X$. Khi đó số điểm ghi được sẽ là $(i + j)$. Lấy max của số điểm ghi được ở tất cả các trường hợp, ta thu được kết quả cuối cùng. Độ phức tạp $O\big(M \times \log2(N)\big)$.