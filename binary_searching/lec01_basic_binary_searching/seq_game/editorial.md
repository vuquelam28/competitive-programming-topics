# Trò Chơi Trên Dãy Số - Editorial

Ứng với mỗi $s,$ cần tìm cặp số $a_i, b_j$ sao cho:
$$\big|s - (a_i + b_j)\big| \text{ MIN}$$

Phá bỏ dấu giá trị tuyệt đối, ta nhận thấy $a_i + b_j$ xảy ra ở hai trường hợp:
- Hoặc $a_i + b_j$ có giá trị lớn nhất nhưng không vượt quá $s$.
- Hoặc $a_i + b_j$ có giá trị nhỏ nhất và lớn hơn $s$.

Sắp xếp lại dãy $B$ tăng dần, sau đó duyệt qua mọi phần tử $a_i$ và tìm $b_j$ thỏa mãn cả hai trường hợp trên để so sánh chênh lệch.

***Độ phức tạp:*** $O(k \times n \times \log n)$.