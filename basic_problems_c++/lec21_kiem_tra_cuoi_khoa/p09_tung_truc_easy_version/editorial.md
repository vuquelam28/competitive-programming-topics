# Con Đường Tùng - Trúc (Bản Dễ) - Editorial

Sắp xếp các cây theo thứ tự tăng dần về khoảng cách. Do bài toán này giới hạn về dữ liệu khá nhỏ, nên ta sẽ làm theo cách duyệt trâu là thử tất cả các đoạn đường để xem đoạn đường nào có tối thiểu $a$ cây tùng và $b$ cây trúc.

Xét mọi vị trí $i \ (1 \le i \le n);$ ta sẽ thử tìm một con đường ngắn nhất bắt đầu từ cây thứ $i$ mà bao gồm ít nhất $a$ cây tùng và $b$ cây trúc. Nếu tính từ vị trí đang xét, không tìm được đoạn đường nào thỏa mãn thì kết thúc vì dù có chạy tiếp thì vẫn không thể tìm được đoạn đường nào thỏa mãn.

***Độ phức tạp:*** $O(n^2)$.