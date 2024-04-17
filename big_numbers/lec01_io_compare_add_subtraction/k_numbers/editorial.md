# Knumbers - Editorial

Ban đầu khởi tạo $res = 0$.

Đi từ đầu dãy số $n$ tới cuối, ta có công thức $res = res \times k + n_i$.

Kết quả có thể rất lớn nên cần dùng xử lý số nguyên lớn, tuy nhiên do $2 \le k \le 5$ nên thay vì phải code nhân số lớn, ta có thể dùng phép cộng và lặp lại $k-1$ lần.