# Hoán Vị Kế Tiếp - Editorial

Sử dụng thuật toán tìm hoán vị kế tiếp như sau:

- Tìm vị trí $i$ lớn nhất mà $a_i <> a_{i + 1}$.
- Tìm vị trí $j$ lớn nhất mà $a_j > a_i$. Tất nhiên vị trí này phải tồn tại, vì ít nhất vị trí $i + 1$ là một vị trí như vậy.
- Đổi chỗ $a_i$ và $a_j$.
- Đảo ngược tất cả các phần tử trong đoạn $[i + 1, n]$ để thu được một dãy tăng dần, đảm bảo thứ tự từ điển của hoán vị này là nhỏ nhất nhưng vẫn lớn hơn hoán vị ban đầu. 