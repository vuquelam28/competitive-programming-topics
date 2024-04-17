# Số Nguồn - Editorial

Xét số nguyên dương $m$. Ta gọi nguồn của $m$ là $n$ và tổng các chữ số của $n$ là $d(n)$ (giả sử $m$ có số nguồn).

Theo đề bài, ta có:

$$n + d(n) = m$$

Từ đây suy ra, $n$ luôn luôn nhỏ hơn $m$. Vì vậy, số chữ số của $n$ cũng không thể vượt quá số chữ số của $m,$ dẫn đến $d(n)$ cùng lắm chỉ đạt giá trị tối đa là $9x$ với $x$ là số chữ số của $m$. Từ đây, ta phát triển một thuật toán như sau:

- Thử xét tất cả các giá trị $d(n)$ có thể ($9x...1$). Do ta cần tìm nguồn nhỏ nhất, mà $n = m - d(n)$ nên ta sẽ xét các $d(n)$ từ lớn nhất về bé nhất. 
- Đặt $\text{diff} = m - d(n)$. Chỗ này ta phải thực hiện phép trừ số lớn do $m$ rất lớn. Nếu như $m > d(n)$ thì ta sẽ thu được $\text{diff} > 0$. Tới đây có thể coi rằng $\text{diff}$ có khả năng là nguồn nhỏ nhất của $m$. 
- Điều kiện đủ cần kiểm tra là tổng các chữ số của $\text{diff}$ phải chính bằng $d(n)$ đang duyệt ở bước $1$. Nếu đúng như vậy thì ta in ra $\text{diff}$ chính là nguồn nhỏ nhất của $m$.

***Độ phức tạp:*** $O\big(9 \times |m| \times \alpha\big)$ với $\alpha$ là độ phức tạp của thao tác trừ số lớn.

