# Chú Sóc Con - Editorial

Phương án tối ưu để sóc có thể ăn hết $n$ hạt dẻ được mô phỏng như sau:

Đầu tiên sóc đứng ở gốc cây $1,$ sau đó đi lên ngọn của cây $1$ và ăn hạt dẻ. Đi xuống độ cao $\min(h_1, h_2)$ sau đó nhảy qua cây $h_2$. Leo lên ngọn của cây $h_2$ ăn hạt dẻ. Đi xuống độ cao $\min(h_2, h_3)$ sau đó nhảy qua cây $h_3, \dots$

Cụ thể hơn, thời gian để ăn hạt dẻ trên $n$ cây là $n$ giây, để nhảy từ cây $1$ đến $n$ là $n - 1$ giây, để leo từ cây $i - 1$ đến độ cao đủ để nhảy sang cây $i$ là $|h_i - h_{i - 1}|$. Vậy kết quả là:

$$\Sigma^n_{i = 1} |h_i - h_{i - 1}| + 2 \times n - 1$$

***Độ phức tạp:*** $O(n)$.