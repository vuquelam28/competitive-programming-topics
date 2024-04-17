# Tích Lấy Dư - Editorial

### Subtask 1

Dùng một vòng lặp để tính ra tích các số thuộc đoạn $[a, b],$ rồi lấy số dư của kết quả tìm được khi chia cho $c$.

### Subtask 2

Áp dụng công thức kết hợp giữa phép nhân và phép đồng dư:
$$(a \times b) \text{ mod } n = \big[(a \text{ mod } n) \times (b \text{ mod } n)\big] \text{ mod } n$$

Sử dụng công thức này liên tục trong khi tính kết quả để tránh bị tràn số.