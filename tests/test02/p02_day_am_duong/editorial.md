# Dãy Âm Dương - Editorial

Đầu tiên, hãy chia mảng ban đầu thành các đoạn gồm các số có cùng dấu. Ví dụ, nếu mảng là $[1,1,2,−1,−5,2,1,−3]$ thì sẽ có các đoạn là $[1,1,2], [−1,−5], [2,1]$ và $[−3]$. Ta sẽ thực hiện việc này bằng kĩ thuật hai con trỏ: con trỏ $l$ sẽ lưu vị trí bắt đầu của đoạn cùng dấu và con trỏ $r$ lưu vị trí kết thúc. Số lượng các đoạn này là độ dài tối đa có thể có của dãy gồm các phần tử âm và dương xem kẽ, vì chúng ta chỉ có thể lấy một phần tử từ mỗi đoạn. Và khi chúng ta muốn có tổng lớn nhất, ta cần lấy tổng của các phần tử lớn nhất từ ​​mỗi đoạn.

***Độ phức tạp:*** $O(n)$ cho mỗi truy vấn.