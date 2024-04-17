# Phục Hồi Dữ Liệu - Editorial

Đầu tiên, ta cần biết cách nhập một $string$ có kí tự dấu cách. Ta sẽ dùng câu lệnh `getline(cin, s)` để nhập chuỗi kí tự $s$ có cả dấu cách.

Sau đó, đi từng phần tử của xâu $S$ để kiểm tra, nếu nó thỏa mãn là một chữ cái tiếng Latin hoa hoặc thường, in ra chữ cái đó.

***Độ phức tạp:*** $O(n)$.