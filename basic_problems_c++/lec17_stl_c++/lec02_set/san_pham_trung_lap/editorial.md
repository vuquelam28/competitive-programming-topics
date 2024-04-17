# Sản Phẩm Trùng Lặp - Editorial

### Subtask 1

Dùng hai vòng lặp lồng nhau để lặp qua tất cả các cặp mã sản phẩm và tìm cặp mã sản phẩm trùng lặp.

***Độ phức tạp:*** $O(n^2)$ cho mỗi truy vấn.

### Subtask 2

Tiếp tục thêm tất cả các chuỗi vào một `set` $S$ và khi bạn gặp một chuỗi đã có trong $S,$ đó là mã sản phẩm trùng lặp cần tìm.

***Độ phức tạp:*** $O(n \log n)$ cho mỗi truy vấn.