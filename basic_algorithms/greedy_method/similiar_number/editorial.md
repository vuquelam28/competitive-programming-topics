# Cặp Số Tương Đương - Editorial

Cặp số $(n, m)$ nếu là tương đương, thì bắt buộc phải thỏa mãn điều kiện sau:

$$m = n \times 2^i \times 3^j$$

<center>

Với $i$ hoặc $j$ lớn hơn $0$.
</center>

Vậy đầu tiên, hãy kiểm tra $m$ có chia hết cho $n$ không, nếu không thì chắc chắn đáp án là $-1$. Nếu có, thì hãy lấy $m$ chia cho $n,$ rồi tiếp tục loại bỏ toàn bộ các thừa số $2$ và $3$ trong kết quả thu được bằng phép chia.

Sau khi loại hết các thừa số $2$ và $3$ trong $m$ đi mà vẫn thu được $m > 1,$ thì kết luận không thể biến đổi $n$ thành $m;$ ngược lại thì đáp án chính bằng số phép chia phải thực hiện.
