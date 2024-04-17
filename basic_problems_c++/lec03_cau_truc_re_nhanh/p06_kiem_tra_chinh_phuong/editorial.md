# Kiểm Tra Chính Phương - Editorial

Số chính phương có dạng bình phương của một số tự nhiên, tức là căn bậc hai của nó phải là một số nguyên.

Sử dụng hàm `sqrt()`, đặt $x = \left\lfloor\sqrt{n}\right\rfloor$. Lúc này, nếu như $n$ là số chính phương thì chắc chắn $x^2 = n,$ ngược lại thì $x^2 < n$ (do $x$ làm tròn xuống).