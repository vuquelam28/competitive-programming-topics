# Gà Chó - Editorial

Ta gọi số gà là $i \ (0 \le i \le N),$ thì chắc chắn số chó phải là $j = N - i$.

Dùng một vòng lặp thử các giá trị $i = 0...N,$ với mỗi giá trị $i,$ tính $j$ tương ứng rồi kiểm tra điều kiện về tổng số chân:

$$2i + 4j = M$$

Nếu như biểu thức này thỏa mãn thì lập tức dừng vòng lặp và đưa ra số gà, số chó tương ứng. Do ta duyệt số gà từ nhỏ tới lớn nên sẽ đảm bảo đáp án có số gà nhỏ nhất. Đối với trường hợp $-1,$ ta có thể xử lý như sau:

- Nếu tìm thấy đáp án thì in ra đáp án và dừng luôn hàm `main()` bằng lệnh `return 0;`.
- Đặt câu lệnh `cout << -1;` ở cuối chương trình, sau vòng lặp tìm kết quả. Bằng cách này, nếu như không tìm thấy nghiệm thì câu lệnh trên sẽ được chạy. 