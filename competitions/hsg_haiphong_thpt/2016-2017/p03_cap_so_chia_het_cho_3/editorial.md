# Cặp số chia hết cho 3 - Editorial

### Subtask 1

Với mỗi $b_i,$ kiểm tra từng phần tử $a_i$ xem số mới sau khi ghép có chia hết cho $3$ hay không.

Độ phức tạp: $O(n^2)$.

### Subtask 2

Nhận thấy, điều kiện để một số chia hết cho $3$ chỉ là tổng các số của số đó chia hết cho $3$.

Ta sẽ tạo mảng $cnt[i], i \in [0,2]$ là số lượng số trong dãy $a$ có tổng các chữ số khi chia cho $3$ có số dư bằng $i$.
 
Với mỗi $b_i$, gọi $p = b_i \text{ mod } 3$. Vậy ta cần tìm các số $a_i$ có tổng chữ số chia $3$ dư $q$ thỏa mãn $(p+q) \text{ mod } 3=0$. Hay $q = (3-p) \text{ mod } 3$. Vậy ta chỉ cần in ra $cnt[q]$.

Độ phức tạp: $O(m)$.