# Cặp Kí Tự - Editorial

Ý tưởng của bài toán này như sau: Xét từng giá trị $a_i$ từ cuối dãy về đầu dãy thì:

- Nếu $a_i = 0,$ chứng tỏ cặp kí tự thứ $i$ này là một cặp `AB` liền nhau, vì vậy ta thêm cặp kí tự `AB` vào đầu kết quả.
- Nếu $a_i \ne 0,$ chứng tỏ giữa cặp kí tự thứ $i$ có $a_i$ kí tự khác. Vì vậy ta phải ghép kí tự `A` vào đầu dãy kết quả và kí tự `B` vào vị trí thứ $a_i$ của xâu kết quả, do xâu được đánh số thứ tự từ $0$.

***Độ phức tạp:*** $O(n)$.