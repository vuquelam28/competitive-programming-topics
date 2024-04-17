# Bội Chung Nhỏ Nhất 1 - Editorial

Gọi $(a, b)$ là ước chung lớn nhất của $a$ và $b$. Ta biết rằng $[a, b] = \frac{a \times b}{(a, b)}$. Vậy nghĩa là:

$$\frac{[a, b]}{a} = \frac{b}{(a, b)}$$

Lúc này, số lượng giá trị khác nhau của biểu thức $\frac{[a, b]}{a} \ (1 \le a \le 10^{18})$ sẽ chính bằng số lượng giá trị khác nhau của biểu thức $\frac{b}{(a, b)}$. Ta dễ dàng chứng minh được biểu thức vế trái là số nguyên, và tương tự với biểu thức vế phải.

Do $b$ đã cố định, nên chỉ cần đếm xem có bao nhiêu giá trị khác nhau của $(a, b)$. Ở đây, $(a, b)$ lại là ước của $b$ và $b$ cũng là ước của chính nó, vậy $a$ chỉ cần bằng $(a, b)$ là thỏa mãn. Hay nói cách khác, bài toán trở thành: Đếm số ước nguyên dương của $b$.

***Độ phức tạp thuật toán:*** $O(\sqrt{n})$.