# Dominoes - Editorial

Sử dụng quay lui sinh ra các dãy nhị phân $0 - 1$ độ dài $n,$ vị trí $i$ nếu là bit $1$ thì tương ứng với việc có xoay quân domino thứ $i,$ ngược lại là không xoay quân domino thứ $i$. Với mỗi phương án, tính chênh lệch giữa tổng hai phần trên dưới và số lần xoay dominoes, từ đó chọn kết quả nhỏ nhất.

***Độ phức tạp:*** $O(2^n \times n)$.