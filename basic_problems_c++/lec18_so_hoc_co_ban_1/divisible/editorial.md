# Divisible - Editorial

Số nguyên dương nhỏ nhất có tối thiểu $K$ chữ số $0$ tận cùng và chia hết cho $N$ chính là bội chung nhỏ nhất của $N$ và $10^K$.

Ta chỉ cần dùng một vòng lặp để tính giá trị $10^K$ rồi tìm ra bội chung nhỏ nhất của nó với $N$ bằng giải thuật Euclid.

***Độ phức tạp:*** $O(K)$.
