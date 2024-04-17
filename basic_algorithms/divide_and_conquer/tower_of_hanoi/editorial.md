# Tháp Hà Nội - Editorial

Bài này sử dụng giải thuật chia để trị cơ bản, quy trình như sau:

- Chuyển $n - 1$ đĩa bên trên từ cọc $1$ sang cọc $3,$ sử dụng cọc $2$ làm trung gian.
- Chuyển $1$ đĩa còn lại ở cọc $1$ sang cọc $2$.
- Chuyển $n - 1$ đĩa ở cọc $3$ sang cọc $2,$ sử dụng cọc $1$ làm trung gian.

Số bước chuyển ít nhất trong trường hợp số cọc bằng $3$ đã được chứng minh là luôn luôn bằng $2^n - 1$.