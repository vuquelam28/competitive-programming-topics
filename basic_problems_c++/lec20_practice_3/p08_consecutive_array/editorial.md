# Consecutive Array - Editorial

### Subtask 1

Dùng hai vòng lặp để duyệt mọi đoạn con liên tiếp của dãy, sau đó kiểm tra các điều kiện cần thỏa mãn và lấy tổng lớn nhất.

***Độ phức tạp:*** $O(n^2)$.

### Subtask 2

Do dãy số gồm toàn các số nguyên dương, nên thay vì xét mọi đoạn con, ta sẽ liên tục tìm ra các đoạn con gồm các số liên tiếp và lấy tổng lớn nhất trong các đoạn con đó trong một vòng lặp.

Giả sử ta xuất phát từ vị trí $i,$ ta tìm ra vị trí $j$ xa $i$ nhất về phía sau mà đoạn $[i, j]$ thỏa mãn là đoạn gồm các số tự nhiên liên tiếp, sau đó tiếp tục tìm đoạn con kế tiếp bằng cách xét vị trí xuất phát từ $j + 1$ (do $a_{j + 1}$ và $a_j$ không phải hai số liên tiếp nên đoạn con tiếp theo thỏa mãn đề bài buộc phải xuất phát ít nhất từ vị trí $j + 1$).

***Độ phức tạp:*** $O(n)$.
