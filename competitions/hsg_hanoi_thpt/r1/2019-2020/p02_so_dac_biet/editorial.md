# Số Đặc Biệt - Editorial

Vì $n$ rất lớn nên ta không thể duyệt từng giá trị để kiểm tra được.

Gọi $len(n)$ là độ dài số $n$ và $pow(x,y)$ là $x^y$. Từ điều kiện đề bài ta suy luận được một số điều dưới đây:

$$a \times pow\big(10,len(n)+1\big)+ 10N +b = k \times N$$

$$\Leftrightarrow a \times pow(10,len(n)+1)+b = (k-10) \times N$$

$$\Leftrightarrow \frac{a \times pow\big(10,len(n)+1\big)+b}{k-10} = N$$

Vậy thuật toán đã khá rõ ràng:
- Duyệt qua các giá trị $len(n)$ trong đoạn $[1,18]$ (bởi vì đề bài chỉ yêu cầu tìm ra các số $N$ không vượt quá $10^{18},$ mà chắc chắn $10^{18}$ không phải kết quả).
- Kiểm tra xem $\Big(a \times pow\big(10,len(n)+1\big)+b\Big)$ có chia hết cho $(k-10)$ hay không, nếu có thì in ra kết quả và dừng chương trình.
- Lưu ý, đối với các bạn dùng ngôn ngữ C++ thì cần dùng kiểu dữ liệu `unsigned long long` để tránh tràn số (đây chính là bẫy của subtask số $2$).

Độ phức tạp rất nhỏ, chỉ khoảng $O(20)$. Các bạn chỉ cần khởi tạo trước một mảng $pow[i]$ mang ý nghĩa bằng $10^i$ với mọi $i \in [1, 18]$ là được.