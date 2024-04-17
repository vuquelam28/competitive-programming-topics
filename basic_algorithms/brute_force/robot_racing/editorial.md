# Đua Robot - Editorial

Tính $r[i]$ là thời gian tới đích của robot thứ $i$ theo công thức:
$$r[i] = \frac{d}{v_i} + i - 1$$

Sau đó sử dụng hai vòng lặp để duyệt qua các cặp robot $(i, j) \ (1 \le j < i \le n),$ nếu $r[i] < r[j]$ nghĩa là một lần vượt nhau.

***Độ phức tạp:*** $O(n^2)$.