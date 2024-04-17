# Lật Bánh - Editorial

Nhận định: Có tổng cộng $(N - K + 1)$ đoạn liên tiếp độ dài $K,$ và mỗi đoạn chỉ có thể lật không quá $1$ lần. Ta có thể tham lam bằng cách xét mọi vị trí $i$ từ đầu tới cuối chuỗi, nếu $s[i]$ là dấu `-` thì lật đoạn $[i, i + K - 1]$. Trong trường hợp sau khi đã xét hết chuỗi mà vẫn còn lại vị trí bằng `-` thì đáp án là `IMPOSSIBLE`.