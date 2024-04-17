# Số Nguyên Tố - Editorial

Do giới hạn của bài toán khá nhỏ, nên ta có thể sử dụng quay lui như sau:

- Đặt một biến $\text{product}$ là tích tạo thành từ các số trong dãy $P,$ khởi đầu từ $\text{product} = 1$.
- Thực hiện quay lui: Xét số nguyên tố $p_i,$ nếu $\text{product} \times p_i \le R$ thì tiếp tục quay lui từ vị trí $i$ với tích mới là $\text{product} \times p_i$. Mục đích của việc đặt cận này là đảm bảo các tích sinh ra luôn luôn không vượt quá $R$. Trong quá trình thực hiện, đồng thời kiểm tra tích tạo thành có lớn hơn hoặc bằng $L$ không, nếu có thì thu nhận kết quả.