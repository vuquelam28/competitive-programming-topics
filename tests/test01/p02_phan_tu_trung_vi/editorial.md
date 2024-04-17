# Phần Tử Trung Vị - Editorial

Sau khi sắp xếp lại dãy thành một dãy mới là một dãy không giảm ($a_i \le a_{i + 1}$). Ta có thể tìm kiếm một phần tử trung vị lớn nhất bằng cách sử dụng thuật toán tìm kiếm nhị phân. Để một giá trị $x$ là phần tử trung vị thì ta cần $Q = \sum\limits_{i=(\frac{n + 1} {2})}^{n} (x - a_i)$ phép biến đổi. 

Nếu giá trị $Q$ này vượt quá $k$ thì giá trị $x$ không thể là phần tử trung vị ngược lại thì có thể. Khi đó ta sẽ tăng hoặc giảm giá trị $x$ đi tương ứng trong bước tìm kiếm nhị phân.

***Độ phức tạp:*** $O(n \times \log)$.