# Đào Vàng - Editorial

Ý tưởng là xét mọi ô $a_{i, j} = 0$ rồi kiểm tra xem trong hàng $i$ và cột $j$ có chứa số $1$ nào không. Nếu có thì ô này là một ô đã bị kiểm soát, Tí không thể nhặt vàng ở ô đó. Ngược lại thì tăng kết quả thêm $1$.

Tuy nhiên, nếu như với mỗi ô $(i, j)$ lại duyệt kiểm tra hàng $i$ cột $j$ thì độ phức tạp sẽ lên tới $O\big(T \times m \times n \times (m + 1)\big),$ không thể vượt qua subtask $2$. Ta cần một ý tưởng tốt hơn.

Rất đơn giản, hãy xét mọi ô $(i, j);$ nếu ô đó có giá trị $1$ thì đánh dấu lại hàng $i,$ cột $j$ là không thể nhặt vàng (có thể sử dụng hai mảng để đánh dấu). Cuối cùng chỉ cần xét mọi ô $(i, j)$ như cách đã nói, nhưng kiểm tra hàng và cột chứa ô đó trong $O(1)$ dựa vào mảng đánh dấu đã tạo ra.

***Độ phức tạp:*** $O(T \times m \times n)$.