# Tổng Dãy Số - Editorial

Đầu tiên, đây là một bài toán lừa, rất nhiều bạn sẽ mặc định rằng số $N$ sẽ được nhập ở vị trí đầu tiên trong dãy. Nhưng thực tế đề bài không hề nói như vậy! 

Để giải quyết bài toán này, ta cần sử dụng vòng lặp vô hạn để nhập dữ liệu cho tới khi số nhập vào bằng $0$ thì dừng lại. Trong quá trình nhập, ta vừa đếm số lượng số nhập vào (đặt là $cnt$) và tính tổng các số nhập vào (đặt là $sum$). Kết thúc quá trình nhập, ta có:

$$sum = N + (a_1 + a_2 + \cdots + a_N)$$ và 
$$cnt = N+1$$
$\Rightarrow \ (a_1 + a_2 + \cdots + a_N) = sum - (cnt - 1)$.