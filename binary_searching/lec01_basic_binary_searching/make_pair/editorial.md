# Ghép Cặp - Editorial

### Subtask 1

Ta duyệt hai vòng lặp để xét mọi cặp học sinh và tìm ra số lượng cặp thỏa mãn.

***Độ phức tạp:*** $O(n^2)$.

### Subtask 2

Đầu tiên sắp xếp chiều cao của các học sinh tăng dần.

Với mỗi $a_j,$ ta sẽ cần tìm ra số lượng $a_i$ đứng trước nó sao cho $a_j - a_i \le K$. Ta có thể sử dụng tìm kiếm nhị phân để tìm ra vị trí $imax$ lớn nhất sao cho $a_j - a_{imax} \le K,$ khi đó mọi giá trị $a_{1...imax}$ đều có thể ghép với $a_j$ để tạo ra một cặp phù hợp.

***Độ phức tạp:*** $O(n \times \log n)$.