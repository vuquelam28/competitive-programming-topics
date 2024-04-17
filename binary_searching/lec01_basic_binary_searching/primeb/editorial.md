# Số Đẹp - Editorial

Sàng lọc số nguyên tố, tạo ra các mảng chứa các số $p$, số $r$ và số $q$ khả thi. Ta tạo trước ba mảng này để dùng về sau cho tiện.

Ta nhận thấy, số lượng giá trị $p$ chỉ có thể nằm trong đoạn $[1, 14 \times 10^6],$ giá trị $q$ chỉ có thể nằm trong đoạn $[1, 6500]$ và giá trị $r$ chỉ có thể nằm trong đoạn $[1, 500]$ (đây là ước tính đã làm tròn), vì vậy nên các giá trị $q$ và $r$ sau khi lưu lại sẽ khá ít, vì chúng còn là các số nguyên tố. 

Như vậy, ta có thể duyệt hai vòng for để xác định $q$ và $r$, sau đó chặt nhị phân tìm các giá trị $p$ thỏa mãn $p \times q^2 \times r^3 \le N$. Cần lưu ý xử lý tinh tế để tránh đếm cả các giá trị $p$ trùng với $q$ hoặc $r$.

***Độ phức tạp:*** $O(|q| \times |r| \times \log |p|)$ với $|p|, |q|, |r|$ lần lượt là số lượng các giá trị $p, q$ và $r$ khả thi.
