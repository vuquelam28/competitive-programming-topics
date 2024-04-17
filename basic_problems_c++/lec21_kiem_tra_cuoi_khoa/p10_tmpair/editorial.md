# Cặp Số Đồng Đội - Editorial

Xét cặp số đồng đội $(a, b)$. Giả sử $a = k \times b$.

Vì $a + b = N,$ vận dụng phương pháp thế ta có:

$$k \times b + b = N$$

$$\Leftrightarrow b \times (k + 1) = N$$

Tới đây, ta thấy rằng chắc chắn $b$ và $(k + 1)$ đều phải là các ước nguyên dương của $N$. Và mỗi giá trị của $(k + 1)$ tìm được sẽ cho ta một cặp số đồng đội $(a, b)$ tương ứng. Nói cách khác, số lượng cặp số đồng đội khác nhau sẽ phụ thuộc vào các ước nguyên dương của $N$.

Xét một ước nguyên dương $i$ của $N,$ thì ta sẽ có ngay một ước tương ứng là $\frac{N}{i}$. Lúc này xảy ra hai trường hợp:

- Trường hợp $1$: $b = i, (k + 1) = \frac{N}{i}$. Trường hợp này ta thu được $a = \left(\frac{N}{i} - 1\right) \times b$. 
- Trường hợp $2$: $b = \frac{N}{i}, (k + 1) = i$. Trường hợp này ta thu được $a = (i - 1) \times b$.

Với mỗi trường hợp, ta đưa cặp số $(a, b)$ và $(b, a)$ tìm được vào một `set` để loại bỏ các cặp số trùng nhau (do hai cặp $(a, b)$ và $(b, a)$ được tính là hai cặp khác nhau). Kết quả cuối cùng là kích thước của `set`.

***Độ phức tạp:*** $O\big(\sqrt{N} \times \log\big)$.