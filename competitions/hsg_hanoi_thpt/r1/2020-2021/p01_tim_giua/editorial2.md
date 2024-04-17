# Tìm giữa - Editorial

# Subtask 1
- Ta định nghĩa $f(l,r)$ là tổng các số nguyên từ $l$ cho tới $r$. Dễ thấy công thức $f(l,r) = (r-l+1)*(r+l)/2$.
- Với $l$, $r$ bé, ta chỉ cần $for$ từng giá trị $m$ thuộc đoạn $[l,r-1]$ và tính nhanh kết quả sau đó cập nhật cho đáp án.

# Subtask 2
- Ta đang cần tìm $m$ sao cho: $|f(l,m) - f(m+1,r)|$ có giá trị nhỏ nhất.
- Nói cách khác ta có phương trình:
    - $A = |(m+l)*(m-l+1)/2-(r+m+1)*(r-m)/2|$ 

    - <=> $A = |2*m^2+2*m-(r^2+r+l^2-l)|/2$
    - Đặt $B = 2*m^2+2*m-(r^2+r+l^2-l)$
    - Dễ thấy, $B$ là một phương trình bậc $2$ có $2$ nghiệm. Nếu $B = 0$ thì đó cũng chính là kết quả tốt nhất ta có thể đạt được, nhưng nghiệm của $B$ chưa chắc đã nguyên dương.
    - Gọi $x$ là nghiệm dương của phương trình $B$, nếu $x$ nguyên thì đáp án của bài toán chính bằng $x$, ngược lại thì ta có hai giá trị tiềm năng là cận nguyên trên và dưới của $x$. 
    - Ví dụ với $x = 4.6$, ta có hai giá trị tiềm năng là $4$ và $5$. Đến đây ta chỉ việc thử cả hai giá trị và xem giá trị nào đưa ra chênh lệnh tốt hơn. 
    - Việc giải phương trình bậc hai có thể được thực hiện dễ dàng bằng các công thức toán từ bậc THCS. Lưu ý, để tránh tràn số, cần dùng công thức tính $\Delta'$ rút gọn.
- Như vậy, bằng việc giải phương trình trên, ta có thể ra đáp án của bài toán với độ phức tạp $O(1)$.