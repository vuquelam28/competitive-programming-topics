# Xâu Chấp Nhận Được - Editorial

### Subtask 1

Sử dụng quay lui để duyệt sinh ra toàn bộ các xâu con của hai xâu, sau đó chọn ra xâu con chung có thứ tự từ điển lớn nhất.

***Độ phức tạp:*** $O(2^n \times 2^n),$ với $n$ là độ dài hai xâu.

### Subtask 2

Nhận thấy: Xâu con cần tìm ra được ưu tiên theo thứ tự từ điển, nghĩa là các kí tự ở bên trái càng có số hiệu ASCII lớn thì càng tốt chứ không quan trọng độ dài. Vì thế ta thiết kế giải thuật tham lam như sau:

- Xét các kí tự $c$ từ `z` về `a`.
- Với mỗi kí tự $c,$ tìm vị trí $p_1$ đầu tiên và $p_2$ đầu tiên thỏa mãn: $S_1[p_1] = c$ và $S_2[p_2] = c$. Đây sẽ là kí tự đầu tiên được đưa vào kết quả.
- Tiếp tục lặp lại quá trình hai bước trên, nhưng bây giờ sẽ tìm tiếp cặp kí tự chung kể từ vị trí $p_1 + 1$ và $p_2 + 1$. Tìm như vậy cho tới khi hai xâu không còn cặp kí tự chung nào thì dừng lại và in ra kết quả cuối cùng.

Nếu hai xâu không có cặp kí tự chung nào từ đầu thì kết quả hẳn nhiên là $-1$.

***Độ phức tạp:*** $O(26 \times n)$. 