# Chọn Bạn - Editorial

Tại ngày thứ $i,$ ta lựa chọn người bạn đầu tiên có số lần chọn nhỏ hơn $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$. Trong trường hợp ngày đó chỉ có duy nhất $1$ người có thể lựa chọn, ta sẽ buộc lựa chọn người đó.

Tới đây, xảy ra những trường hợp sau:

- *TH1:* Nếu có $1$ người bạn $X$ bị chọn quá $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$ lần, thì đó là do người bạn $X$ này nằm trong những ngày chỉ có một mình anh ta rảnh rỗi. Dễ dàng thấy được nếu tồn tại thì chỉ có tối đa $1$ người như vậy. Trường hợp này kết quả sẽ là `NO`.
- *TH2:* Nếu như không có người bạn nào bị chọn quá $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$ lần trong trường hợp $1,$ ta sẽ có giải thuật tham lam: Chỉ cần chọn người bạn đầu tiên thỏa mãn số lần nhỏ hơn $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$. Chứng minh thuật toán này như sau:
    1. Thuật toán đảm bảo rằng một người $X$ sẽ luôn được chọn không quá $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$ lần.
    2. Thuật toán sẽ không bao giờ khiến cho tồn tại $2$ người bạn bị chọn quá $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$ lần. Giả sử nếu tồn tại thêm người bạn $Y$ bị chọn quá $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$ lần, thì trước đó người $Y$ phải được chọn $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$ lần. Mà người $X$ đã chọn quá $\left\lfloor{\frac{M + 1}{2}}\right\rfloor$ lần, suy ra tổng số lần được chọn của $2$ người lớn hơn $M \Rightarrow$ Điều này vô lí, dẫn đến giả sử sai và thuật toán này luôn đúng đắn.