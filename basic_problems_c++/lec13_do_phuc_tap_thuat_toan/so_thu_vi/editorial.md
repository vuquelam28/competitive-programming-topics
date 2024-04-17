# Số Thú Vị - Editorial

### Subtask 1

Dùng vòng lặp để duyệt các số từ $1$ đến $n$, kiểm tra xem số đó có phải số **thú vị** hay không bằng cách so sánh $S(x)$ và $S(x+1)$. Nếu là số **thú vị** thì tăng biến đếm lên 1 đơn vị. In ra kết quả số lượng số **thú vị.**

***Độ phức tạp:*** $O(n)$.

### Subtask 2

Nếu số $x$ không kết thúc bằng chữ số $9$ thì chắc chắn $S(x+1) = S(x) + 1$ vì chỉ có chữ số cuối tăng lên 1 đơn vị.

Nếu chữ số cuối cùng của $x$ là $9$ thì không cần quan tâm sự thay đổi của các chữ số khác, ta biết chắc chắn rằng $S(x+1) < S(x)$. Để giải bài toán, chúng ta cần đếm các số $x$ thỏa mãn $1 \le x \le n$ và có chữ số cuối cùng là $9$. Ta nhận xét rằng, cứ sau một số chia hết cho $10$ thì sẽ có một số có tận cùng là $9,$ vì thế ta sẽ đi đếm số lượng số chia hết cho $10$ trong đoạn $[1, n + 1]$ và công thức tính nhanh sẽ là $\left\lfloor\frac{n+1}{10}\right\rfloor$.

***Độ phức tạp:*** $O(1)$.
