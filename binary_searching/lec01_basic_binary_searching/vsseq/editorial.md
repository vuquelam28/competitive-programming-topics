# Sân Điền Kinh - Editorial

Vì dãy số đã sắp xếp tăng dần, và dãy số $A$ ban đầu là một dãy tăng ngặt, cho nên với mỗi $a_i$ thì chỉ có thể tồn tại duy nhất một $a_j = a_i + M$.

Từ nhận xét trên, ta áp dụng tìm kiếm nhị phân như sau: Duyệt mọi $i$ từ $1$ tới $n - 1,$ tìm kiếm nhị phân giá trị $a_i + M$ trên đoạn $[i + 1, n]$ của mảng và cộng thêm $1$ vào kết quả nếu tìm thấy giá trị đó.

Sau khi kết thúc tìm kiếm với tất cả các $a_i,$ nếu kết quả vẫn bằng $0$ thì đưa ra $-1$.

***Độ phức tạp:*** $O(n \times \log n)$.