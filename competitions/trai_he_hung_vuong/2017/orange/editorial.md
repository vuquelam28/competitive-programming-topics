# Cam Sành Hàm Yên - Editorial
<div style="text-align:justify">

- Đầu tiên sắp xếp tăng dần các giá tiền.
- Xét các khách từ vị trí $i$ tới vị trí $N,$ ta sẽ thử tạo ra mức giá phù hợp để mọi khách từ $i$ tới $N$ mua được cam:
    + Nếu khách $i$ có mức giá $p[i]$ là duy nhất trong đoạn $[i, N] \ (p[i] \ne p[i + 1]),$ giá bán cam sẽ là $p[i]$.
    + Nếu khách $i$ có mức giá $p[i]$ lặp lại $(p[i] == p[i + 1]),$ giá bán cam sẽ là $p[i] - 1$. Dễ dàng chứng minh điều này.
</div>