# Bộ Ba Số - Editorial

### Subtask 1

Duyệt ba vòng lặp để xét mọi bộ ba trong dãy đã cho.

***Độ phức tạp:*** $O(n^3)$.

### Subtask 2

Trước tiên, ta sắp xếp lại dãy $A$ tăng dần, rồi duyệt hai vòng lặp để xét các số $a_i$ và $a_j$ trước.

Ta biết rằng, $a_i + a_j + a_k \le m$. Mặt khác, cần tìm ra tổng bộ ba nhỏ nhất thỏa mãn điều trên, nên ứng với mỗi cặp số $(a_i, a_j)$ thì ta cần tìm số $a_k$ lớn nhất thỏa mãn $a_i + a_j + a_k \le m$. Điều này có thể thực hiện bằng cách tìm kiếm nhị phân vị trí $k$ lớn nhất đứng sau $j$ mà $a_i + a_j + a_k \le m$.

***Độ phức tạp:*** $O(n^2 \times \log n)$. 