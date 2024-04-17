# Số Chính Phương Đặc Biệt - Editorial

### Subtask 1

Với subtask này, có thể duyệt qua tất cả các số trong đoạn $[a, b]$ và kiểm tra xem số đang xét có phải là số đặc biệt không.

Số $x$ là số đặc biệt nếu thỏa mãn điều kiện sau:
- $x$ là số chính phương $(1)$.
- $\sqrt{x}$ là số nguyên tố $(2)$.

Điều kiện $(1)$ có thể kiểm tra nếu $\lfloor \sqrt{x} \rfloor \times \lfloor \sqrt{x} \rfloor = x$ thì $x$ là số chính phương.

Điều kiện $(2)$ có kiểm tra bằng cách duyệt ước trong đoạn $\big[2..\sqrt{N}\big]$.

***Độ phức tạp:*** $O\big((b - a + 1) \times \sqrt{i}\big)$.

### Subtask 2

Việc duyệt qua tất cả các số trong đoạn $[a, b]$ ở subtask này là bất khả thi bởi $a \le b \le 10^{12}$.

Ta có nhận xét: Từ $1$ đến $10^{12}$ chỉ có tối đa $10^6$ số chính phương. Từ đó, chỉ cần duyệt qua các số trong đoạn $[2..10^6]$ và kiểm tra xem số đang xét $x$ có nguyên tố không. Nếu $x$ là số nguyên tố thì ta kiểm tra nếu $a \le x \times x \le b$ thì tăng $ans$ lên $1$ đơn vị. 

Việc kiểm tra số nguyên tố có thể sử dụng Sàng Eratosthenes.

***Độ phức tạp:*** $O(n \times \log)$ cho việc khởi tạo sàng nguyên tố.