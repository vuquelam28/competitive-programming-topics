# Xâu Con - Editorial

Do độ dài của hai xâu là khá nhỏ nên ta có thể thực hiện một thuật toán $O(n^2)$ cho bài này.

Với mỗi vị trí $i$ trong xâu $S2$, ta kiểm tra xem xâu con của $S2$ trong đoạn $[i,i+|S1|-1]$ ($|S1|$ là độ dài xâu $S1$) có bằng $S1$ hay không.