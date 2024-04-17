# Mèo Đổi Chỗ - Editorial

### Subtask 1

Sinh tất cả các hoán vị của dãy sau đó kiểm tra điều kiện và tìm tổng khoảng cách nhỏ nhất.

***Độ phức tạp:*** $O(n!)$.

### Subtask 2

Vì $n$ lớn nên ta không thể làm theo subtask 1.

Vì mỗi con mèo phải di chuyển ít nhất $1$ bước nên tổng khoảng cách ít nhất $\ge n$.

Nếu số con mèo là số chẵn, ta có thể đổi chỗ từng cặp mèo cạnh nhau: $[2,1,4,3,6,5,\dots n,n-1]$. Tổng khoảng cách di chuyển là $n$ vì mỗi con mèo di chuyển một bước (đây là phương án tối ưu).

Nếu số con mèo là số lẻ, tổng khoảng cách di chuyển không thể là $n$. Với trường hợp này, ta đổi chỗ $3$ con mèo đầu tiên theo thứ tự $[3,1,2]$ sau đó đổi chỗ các con mèo còn lại theo trường hợp $1$. Tổng khoảng cách di chuyển là $n+1$ (tối ưu nhất).

***Độ phức tạp:*** $O(1)$.
