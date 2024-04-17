# Fraction - Editorial

Do $a_i, b_i$ rất lớn nên không thể tính toán cụ thể giá trị của $\frac{a_i}{b_i}$ ra để so sánh. Vậy nên với hai phân số $\frac{a}{b}$ và $\frac{x}{y}$ ta sẽ so sánh hai giá trị nhân chéo: $a \times y$ và $b \times x$.

Như vậy, viết một hàm `bool cmp (ps a, ps b)` (với `ps` là một kiểu bản ghi lưu kiểu dữ liệu phân số) để so sánh hai phân số $a,b$ bằng cách nhân chéo như trên, rồi dùng hàm sort với tham số so sánh tùy chỉnh để sắp xếp lại dãy $a$ đã cho. 

Do $a,b$ rất lớn nên ta cần tính toán số lớn cho phép nhân.

***Độ phức tạp:*** $O\big(n \times \log n \times |a_i| \times |b_i|\big);$ với $|a_i|, |b_i|$ là độ dài các số $a_i, b_i$.