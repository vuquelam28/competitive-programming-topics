# Cặp Số - Editorial

### Subtask 1

Duyệt tất cả các giá trị $x, y$ trong đoạn $[a, b]$ rồi kiểm tra các điều kiện đề bài yêu cầu.

Độ phức tạp: $O\big((b - a + 1)^2\big)$.

### Subtask 2

Duyệt trước các giá trị $x$ thỏa mãn $a \le x^2 \le b$ và các giá trị $y$ thỏa mãn $a \le y^3 \le b,$ lưu vào hai mảng $F$ và $G$.

Số lượng phần tử trong hai mảng $F$ và $G$ sẽ khá nhỏ, đủ để duyệt hai vòng lặp trong $1$ giây. Khi đó ta thực hiện duyệt tất cả các cặp $(x^2, y^3)$ rồi đếm số cặp thỏa mãn điều kiện đề bài.

Độ phức tạp: $O\big(|F| \times |G|\big)$.