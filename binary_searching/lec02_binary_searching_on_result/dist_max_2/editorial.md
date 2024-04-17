# Khoảng Cách Xa Nhất - Editorial

Ta sẽ chặt nhị phân giá trị kết quả, gọi $K$ là giá trị hiện tại đang chặt nhị phân. Ta cần kiểm tra xem có tồn tại $2$ điểm nào có khoảng cách $\ge K$ hay không.

Khi đó, $2$ điểm cần tìm sẽ có khoảng cách của tọa độ $x$ và $y$ xa nhau $\ge K$ đơn vị.

Ta sort các điểm lại theo tọa độ $x$. Ta sẽ đi từ trái qua phải, đi tới điểm $i$ thì ta sẽ tìm $j$ đầu tiên mà có tọa độ $x_j$ sao cho $x_i - x_j \ge K$. Khi đó, mọi điểm trong đoạn $[j, i]$ đều hoành độ cách hoành độ của $i$ tối thiểu là $K$ đơn vị. Nhiệm vụ bây giờ là tìm trong đoạn $[j, n]$ có điểm nào mà tung độ cũng cách tung độ của $i$ tối thiểu là $K$ đơn vị hay không?

Để giải quyết nhiệm vụ này, ta chỉ cần tìm ra tung độ lớn nhất và tung độ nhỏ nhất trong đoạn $[j, n]$ để so sánh và kết luận. Tuy nhiên, muốn tìm nhanh được tung độ lớn nhất và nhỏ nhất, thì ta phải xây dựng hai mảng: 

- Mảng $miny[i]$: Lưu tung độ nhỏ nhất của các điểm từ $i$ tới $n$.
- Mảng $maxy[i]$: Lưu tung độ lớn nhất của các điểm từ $i$ tới $n$.

Hai mảng này có thể xây dựng bằng công thức truy hồi và một vòng lặp. Sau đó, với mỗi $i,$ khi tìm được $j$ gần nó nhất thì chỉ cần so sánh tung độ của $i$ với $miny[i]$ và $maxy[i]$ để đưa ra kết luận giá trị $K$ hiện tại có thỏa mãn hay không. 

***Độ phức tạp:*** $O\big(n\big(log_2n + log_2 (max(x_i))\big)\big)$.