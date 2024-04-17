# Bim Bim - Editorial

Ta sẽ sử dụng những kiến thức về tính tổng $N$ số nguyên dương đầu tiên, phép chia lấy dư, vòng lặp để giải. 

Gọi $total$ là số lượng bim bim mà tất cả học sinh cần ở mỗi vòng, thì $total$ sẽ được tính như sau:

$$total = 1 + 2 + 3 + \dots + n = \frac{n \times (n + 1)}{2}$$

<center>

(_xem thêm_: [Cách để Tính tổng các số nguyên dương từ 1 đến n](https://www.wikihow.vn/T%C3%ADnh-t%E1%BB%95ng-c%C3%A1c-s%E1%BB%91-nguy%C3%AAn-d%C6%B0%C6%A1ng-t%E1%BB%AB-1-%C4%91%E1%BA%BFn-n)).
</center>

Gọi $m\_current$ là số bim bim còn lại sau mỗi vòng chơi (ban đầu $m\_current = m$). Ở mỗi vòng, nếu số lượng bim bim còn lại nhiều hơn số lượng bim bim học sinh cần $(m\_current > total)$ thì trò chơi sẽ có vòng tiếp theo. Vậy trò chơi có thể sẽ được kết thúc ở vòng có $m\_current \leq total,$ đó chính là giá trị $m \text{ mod } total$. Cuối cùng ta duyệt và tính phần bim bim còn lại. 

***Độ phức tạp:*** $O(m)$.