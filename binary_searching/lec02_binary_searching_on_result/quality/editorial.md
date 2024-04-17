# Đoạn Con Chất Lượng - Editorial

***Nhận xét:*** Nếu tồn tại một đoạn con có độ dài $M$ với trung bình cộng lớn hơn hoặc bằng $X$ thì cũng sẽ tồn tại đoạn con với độ dài $M$ có trung bình cộng lớn hơn hoặc bằng $(X - 1)$. Ta sẽ tìm kiếm nhị phân giá trị $X$ lớn nhất.

Với một giá trị trung bình $X,$ đặt $a[i] = a[i] - X$. Lúc này, bài toán trở thành xác định có tồn tại đoạn con nào có độ dài lớn hơn hoặc bằng $K$ và tổng lớn hơn hoặc bằng $0$ hay không. Nếu có thì tăng $X$ lên, ngược lại giảm $X$ xuống. Lưu ý $X$ ở đây là số thực, do đó ta cần tìm kiếm nhị phân dựa trên một giá trị epsilon (khoảng $10^{-6}$ chẳng hạn).

Bài toán tìm đoạn con có tổng lớn hơn hoặc bằng $0$ và độ dài lớn hơn hoặc bằng $K$ là bài toán cơ bản của mảng cộng dồn, nên sẽ không đề cập cách làm chi tiết.