# Tích Lớn Nhất - Editorial

Liệu chúng ta có cần kiểm tra tất cả các dãy con?

Xét dãy $(a_i,a_{i+1},\dots, a_j)$. Chỉ khi phần tử $a_{j+1}$ lớn hơn số lớn nhất trong dãy đang xét thì việc thêm $a_{j+1}$ vào dãy mới có tác dụng (vì số nhỏ nhất của dãy sẽ không thay đổi).

Xét trong dãy sau khi thêm $a_{j+1}$, giả sử $a_{j+1}$ là số lớn nhất, nếu $a_i$ không phải số nhỏ nhất thì dãy $(a_{i+1},a_{i+2},\dots, a_{j+1})$ sẽ cho ta kết quả tương đương và nếu $a_i$ là số nhỏ nhất thì dãy $(a_{i+1},a_{i+2},\dots, a_{j+1})$ sẽ cho kết quả tốt hơn.

Vậy nên nếu ta thêm một phần tử vào dãy, ta không cần kiểm tra kết quả của cả dãy, kiểm tra $(a_i,a_{i+1},\dots, a_j)$ và $(a_{i+1},a_{i+2},\dots, a_{j+1})$ là đủ.

Ý tưởng trên giúp ta đi đến kết luận: Ta không cần phải kiểm tra dãy con nào nhiều hơn $2$ phần tử vì: dãy $(a_1,a_2,a_3)$ sẽ không cho kết quả lớn hơn dãy $(a_1,a_2)$ và $(a_2,a_3)$. Vậy nên việc cần làm chỉ là kiểm tra tích lớn nhất giữa các cặp phần tử liên nhau trong dãy ban đầu.
