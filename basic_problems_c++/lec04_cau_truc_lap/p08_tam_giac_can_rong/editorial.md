# Tam Giác Cân Rỗng - Editorial

Gọi $i \ (1 \le i \le h)$ là chỉ số hàng của tam giác mà ta đang in ra. Quy luật như sau:
- Với hàng $i = 1$ và hàng $i = h$ (đáy): Có $h - i$ dấu cách và $i \times 2 - 1$ dấu `*`.
- Với các hàng còn lại: $h - i$ dấu cách, rồi $1$ dấu `*`, rồi $i \times 2 - 3$ dấu cách, rồi $1$ dấu `*`.