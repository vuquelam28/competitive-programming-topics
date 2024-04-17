# Phần Tử Yên Ngựa - Editorial

### Subtask 1

Xét từng phần tử $a_{i, j},$ duyệt lại hàng và cột chứa nó xem nó có phải là giá trị lớn nhất trong hàng và nhỏ nhất trong cột đó không.

***Độ phức tạp:*** $O(m^2 \times n^2)$.

### Subtask 2

Tạo trước hai mảng: $\text{max\_row}[i]$ là giá trị lớn nhất của hàng $i, \text{min\_col}[j]$ là giá trị nhỏ nhất của hàng $j$.

Hai mảng này có thể khởi tạo bằng quy hoạch động trong $O(m \times n)$.

Việc còn lại đơn giản: Duyệt qua mọi giá trị $a_{i, j}$ rồi kiểm tra xem nó có bằng với $\text{max\_row}[i]$ và $\text{min\_col}[j]$ hay không, nếu có thì kết luận đó là một phần tử yên ngựa.

***Độ phức tạp:*** $O(m \times n)$.