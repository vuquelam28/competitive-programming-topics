# Đưa Đón Nhân Viên - Editorial

Nhận xét thấy, cần ưu tiên đón nhân viên theo cự li từ xa về gần, để cho quãng đường phải di chuyển của xe ngày càng ngắn lại.

Vậy trước hết, ta sẽ đi đón lần lượt ở các điểm từ xa về gần, mỗi điểm cố gắng đón đủ $m$ người/lượt. Dễ dàng tính được, với một điểm $i,$ thì số chuyến xe đón được đủ $m$ người ở điểm đó sẽ là $\left \lfloor{\frac{a_i}{m}} \right \rfloor,$ và quãng đường phải đi là 

$$s_i = 2 \times x_i \times \left \lfloor{\frac{a_i}{m}} \right \rfloor$$

Tính tổng tất cả các quãng đường $s_i$ trước. Sau bước này, mỗi địa điểm sẽ chỉ còn lại số người bằng $a_i \text{ mod } m$. Ta sẽ đi gom người từ xa về gần để đảm bảo xe phải di chuyển ngắn nhất có thể. Bước này rất đơn giản nên xin nhường lại cho bạn đọc.