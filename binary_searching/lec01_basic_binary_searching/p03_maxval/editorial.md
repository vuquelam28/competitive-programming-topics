# Giá Trị Lớn Nhất - Editorial

Xét $a_i\ge a_j$,  ta có thể viết $a_i=p\times a_j+q$      $(q=a_i\%a_j<a_j)$. Ta cần tìm $q$ lớn nhất với mọi $a_i\ge a_j$.

Sort lại mảng $a$ theo thứ tự tăng dần. Và xóa bỏ hết phần tử trùng nhau ở trong dãy (dùng erase unique trong c++).

Xét thuật toán sau: Với mỗi $a_j$ và với mỗi $p$ ta sẽ tìm một $a_i$ nào đó $(i\ge j)$ có $q$ là lớn nhất $(a_i$ phải có dạng là $a_i=p\times a_j+q'$  $(q'<a_j))$. Và số này sẽ là số lớn nhất mà bé hơn $(p+1)\times a_j$ có trong dãy. Và vì dãy $a$ đã sort ta có thể dùng chặt nhị phân (sử dụng ngay hàm lowerbound trong C++) để tìm số này. Dĩ nhiên nếu không tồn tại $a_i$ nào $a_i=p\times a_j+q'  (q'<a_j))$ thì vị trí ta tìm được khi lấy kết quả cũng sẽ không ảnh hưởng. 

Đánh giá độ phức tạp: Với mỗi $j$ từ $1$ tới $n$, với mỗi $p$ từ $1$ tới $10^6/a_j$  ta chặt nhị phân trên đoạn $[j,n]$. Nếu nhìn qua thì sẽ thấy độ phức tạp lên tới $O(N^2 log_2N)$.

Nhưng ta có: $N+N/2+N/3+N/4+⋯+N/N$   ~  $O(Nlog_2N)$. Vì các $a_i$ đều tăng dần và khác nhau nên với $j$ vòng lặp ta sẽ có tổng phép tính $10^6+10^6/2+⋯+10^6/(2\times 10^5 )$   $<O(10^6  log⁡_2(10^6 )$ . Nhân thêm chi phí của chặt nhị phân ta sẽ có thuật toán $O(N(log_2N)^2)$.
