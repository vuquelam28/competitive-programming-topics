# Số Fibonacci (Vòng Lặp Cơ Bản) - Editorial

Ta chia ra $2$ trường hợp:

- Nếu $N \le 1$ thì kết quả là $0$ hoặc $1$ tương ứng.
- Nếu $N > 1,$ ta duy trì $3$ biến $f_0, f_1$ và $f_n$ để lưu trữ ba số Fibonacci liên tiếp trên dãy:
    - Ban đầu $f_0 = 0, f_1 = 1$.
    - Tuần tự lặp từ $i = 2...N,$ mỗi bước ta gán $f_n = f_0 + f_1, f_0 = f_1, f_1 = f_n$. Bằng cách này, khi kết thúc vòng lặp thì $f_n$ sẽ lưu trữ số Fibonacci thứ $n$.

Lưu ý các biến lưu số Fibonacci phải để kiểu dữ liệu `long long`. 