# Tích Ba Số - Editorial

### Subtask 1

Giả sử số cần tìm có dạng $p \times q \times r$ (với $p, q, r$ là ba số nguyên tố liên tiếp). Vì $p \times q \times r \le n$ nên ta có:

$$p, q, r \le \sqrt[3]{n}$$

Từ đây, ta có thể sử dụng sàng số nguyên tố để tìm ra các số nguyên tố trong đoạn $[2, \sqrt[3]{n}];$ kế đến dùng vòng lặp để tìm ra bộ ba có tích lớn nhất. Tích đó sẽ là kết quả cần tìm. Lưu ý sàng số nguyên tố chỉ thực hiện $1$ lần duy nhất để tìm ra tất cả các số nguyên tố trong đoạn $\big[2, \sqrt[3]{10^6}\big]$ rồi sử dụng trong tất cả các test cases.

***Độ phức tạp:*** $O(100 \times \log 100 + t \times m),$ với $m$ là số lượng số nguyên tố.

### Subtask 2

Ý tưởng giống như subtask $1,$ nhưng sàng lọc phải thực hiện tới $10^6 = \sqrt[3]{10^{18}}$. Sau đó, ở bước tìm ra bộ ba $p, q, r$ có tích lớn nhất mà $\le n,$ ta cần thực hiện bằng Tìm kiếm nhị phân để giảm độ phức tạp.

***Độ phức tạp:*** $O(10^6 \times \log 10^6 + t \times \log m),$ với $m$ là số lượng số nguyên tố.