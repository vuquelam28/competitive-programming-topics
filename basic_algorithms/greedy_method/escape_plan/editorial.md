# Kế Hoạch Vượt Ngục - Editorial

Đầu tiên ta xử lý vài trường hợp đặc biệt:
- Trong $x$ giờ đầu tiên, Jack chạy được quãng đường là $x \times v$ mét. Nếu quãng đường này đã lớn hơn hoặc bằng khoảng cách tới cây đậu thần thì kết quả là $0$ luôn.
- Nếu $v_0 \le v$ thì tên khổng lồ cũng không bao giờ bắt kịp được Jack, nên kết quả cũng là $0$.

Giờ chỉ cần áp dụng giải thuật brute-force để duyệt. Đặt $\text{diff} = v_0 - v,$ quãng đường mà Jack đã chạy được là $\text{already\_ran},$ thì sau $t = \frac{\text{already\_ran}}{\text{diff}}$ giờ, tên bảo vệ sẽ đuổi kịp Jack. Khi đó, cần ném thêm một món trang sức ra (kết quả cập nhật tăng thêm $1$); và tên bảo vệ sẽ nhặt món trang sức đó, quay trở về lâu đài mất $t$ giờ và đánh bóng món trang sức mất $y$ giờ. Trong thời gian ấy, Jack sẽ chạy thêm được quãng đường là $v \times (t + y)$ mét. Liên tục lặp lại giải thuật này tới khi Jack tới được cây đậu thần thì dừng lại và đưa ra kết quả cuối cùng.

