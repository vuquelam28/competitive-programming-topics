# Đếm Nghiệm - Editorial

Từ phương trình $ax + by = c,$ ta có thể tính được $y = \frac{c - ax}{b} \ (1)$.

Ý tưởng của bài toán là xét lần lượt các giá trị $x$ nguyên, tính $y$ theo $x$ rồi kiểm tra xem $y$ có phải là số nguyên không, nếu có thì tương ứng với $1$ cặp nghiệm nguyên dương. 

Ta dễ dàng thấy $x \in \left[1, \lfloor\frac{c - b}{a}\rfloor\right]$ (đặt $y = 1$ sẽ biết được cận trên của $x$). Dùng vòng lặp để thử $x$ trong đoạn này, tính $y$ theo công thức $(1)$ (để $y$ ở kiểu dữ liệu `double` và ép kiểu khi tính toán để thu được kết quả số thực), sau đó kiểm tra $y$ có phải số nguyên không bằng câu lệnh `if (y == (int) y)`.

