# Tích Bốn Số - Editorial

Bài này chúng ta đơn giản chỉ cần xem xem có số $0$ hay không, nếu có thì in ra $0$, ngược lại đếm xem có bao nhiêu số âm, nếu có lẻ số âm thì in ra $-1$, chẵn thì in ra $1$.

Chỉ có một lưu ý rằng, khi nhập dữ liệu nên nhập dưới dạng `string`, thay vì `long double`. Bởi nếu cho số $0.00...001$ (có $10^5$ số $0$ sau dấu chấm), rất dễ sinh ra sai số, do kiểu dữ liệu `long double` trong C++ cũng chỉ có khả năng lưu được một số lượng chữ số có hạn.   