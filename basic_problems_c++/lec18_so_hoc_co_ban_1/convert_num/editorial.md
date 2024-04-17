# Biến Đổi Số - Editorial

Bước $1$: Chuyển $n$ về dạng phân số sao cho tử số là một số nguyên. Khi đó, $n$ trở thành dạng:

$$\frac{n \times 10^m}{10^m}$$

Để làm nhanh bước này, ta có thể nhập $n$ bằng kiểu chuỗi kí tự, rồi nhanh chóng tìm ra vị trí của dấu `.` thập phân bằng một vòng lặp.

Bước $2$: Tìm ước chung lớn nhất của $n \times 10^m$ và $10^m$. Sau đó ta tối giản phân số vừa tính ở trên. Giá trị $n$ nhỏ nhất sau khi biến đổi thành nguyên sẽ bằng với tử số của phân số vừa tối giản.

Bước $3$: Dựa vào bước $2,$ ta kết luận giá trị $k$ cần tìm chính bằng $10^m$ chia cho ước chung lớn nhất vừa tìm được.

***Độ phức tạp:*** $O(k)$ với $k$ là độ dài của số $n$.