# Tổng Tam Giác Dưới - Editorial

Một phần tử $a_{i, j}$ nếu nằm ở tam giác dưới của ma trận vuông thì sẽ có đặc điểm:
- $1 \le i < n$.
- $1 \le j < i$.

Ta chỉ cần dùng hai vòng lặp duyệt qua các cặp chỉ số $(i, j)$ thỏa mãn hai điều kiện trên và tính tổng của các phần tử ở hàng $i$ cột $j$.