# Số Đặc Biệt - Editorial

***Nhận xét:*** Một số nguyên dương $x$ là ***số Hải Lệ*** khi và chỉ khi nó ở một trong hai dạng:
- Dạng $1$: $x = 3^8$.
- Dạng $2$: $x = (3 \times p)^2,$ với $p$ là số nguyên tố khác $3$.

## Subtask 1

Duyệt qua tất cả các số trong đoạn $[a, b]$ và đếm ước của các số đó, nếu số ước đúng bằng $9$ và số đó là bội của $3$ thì tăng kết quả lên.

***Độ phức tạp:*** $O\big(\sqrt{a} + \sqrt{a + 1} + \dots + \sqrt{b}\big)$.

## Subtask 2

Cách làm tương tự subtask $1,$ tuy nhiên thay vì duyệt lại đoạn $[a, b]$ ở mỗi test case, ta nên khởi tạo trước một mảng $dp[i]$ là số lượng ***số Hải Lệ*** trong đoạn $[1, i]$. Tính trước mảng này tới $10^3,$ rồi với mỗi test case chỉ cần in ra số lượng ***số Hải Lệ*** trong đoạn $[a, b]$ bằng công thức:

$$dp[b] - dp[a - 1]$$

***Độ phức tạp:*** $O\big(T + \sqrt{a} + \sqrt{a + 1} + \dots + \sqrt{b}\big)$

## Subtask 3

Duyệt các số trong đoạn $[a, b],$ đếm ước của chúng nhưng bằng phương pháp sàng số nguyên tố Eratosthenes.

***Độ phức tạp:*** $O\big((b - a).\log(x)\big)$.

## Subtask 4

Sàng lọc trước một mảng $prime$ chứa các số nguyên tố từ $1$ tới $10^6$.

Trên mảng xét các số nguyên tố khác $3,$ tìm kiếm nhị phân vị trí $pos$ lớn nhất thỏa mãn $(3 \times prime[pos])^2 \le N$. Số lượng ***số Hải Lệ*** tạo ra ở dạng $2$ chính bằng $(pos + 1)$ (Do ở bài này mình sử dụng vector để lưu số nguyên tố). Kiểm tra nếu $3^8 \le n$ thì cộng thêm $1$ vào kết quả.

***Độ phức tạp:*** $O(\log n)$.