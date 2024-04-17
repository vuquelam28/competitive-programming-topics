# Xếp Cặp - Editorial

Ta sẽ cần có một nhận xét để giải bài toán này bằng thuật toán tham lam:
- Đầu tiên, sắp xếp cả hay dãy $a$ và $b$ lại theo chiều tăng.
- Nhận thấy rằng, ta luôn ưu tiên chọn $a_i$ càng lớn càng tốt, bắt cặp nó với một $b_j$ lớn nhất thỏa mãn $a_i > b_j$. Dễ thấy, nếu $a_i$ bắt cặp với $b_j,$ thì một $a_u \ (u < i)$ chỉ có thể bắt cặp với một $b_v$ thỏa mãn $v < j$.

Từ đây ta có thể dùng thuật toán hai con trỏ để tham lam cho bài này như sau:
- Đầu tiên chọn cặp $(i,j)$ xuất phát là $(m,n)$.
- Giảm $j$ xuống cho tới khi nào $a_i > b_j$.
- Nếu $i$ và $j$ khác $0$, thì $(i,j)$ là một cặp thỏa mãn trong kết quả tối ưu, ta tăng kết quả lên một và giảm $i,j$ đi $1$.
- Thuật toán kết thúc khi $i$ hoặc $j = 0$.

***Độ phức tạp:*** $O(m + n + n \times \log n)$.