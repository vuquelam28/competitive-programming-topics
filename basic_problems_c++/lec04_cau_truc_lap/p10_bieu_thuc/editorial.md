# Biểu Thức - Editorial

Với mỗi giá trị $i = 1...N,$ ta cần thực hiện hai bước:

- Tính $fact = i!$.
- Cộng $fact$ vào một biến kết quả $res$.

Ta có thể sử dụng thêm một vòng lặp bên trong để tính giá trị $i!,$ nhưng như vậy sẽ thừa thãi. Ta chỉ cần duy trì biến $fact$ lưu $i!,$ với mỗi $i$ ta gán $fact = fact \times i,$ rồi cộng thêm $fact$ vào $res$. 