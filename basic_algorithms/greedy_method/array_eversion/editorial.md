# Đảo Dãy Số - Editorial

### Subtask 1

Subtask này chỉ cần làm duyệt thông thường, liên tục đảo mảng tới khi thu được mảng mới không thay đổi nữa.

***Độ phức tạp:*** $O(n^2)$.

### Subtask 2

Nhận xét rằng: Giả sử phần tử ở cuối mảng hiện tại là $x = a_n,$ thì phần tử tiếp theo được đảo xuống cuối sẽ là phần tử $y = a_j$ đầu tiên lớn hơn $x$ khi tính từ vị trí $n - 1$ về $1;$ phần tử tiếp theo được đảo xuống cuối nữa sẽ là phần tử $z = a_p$ đầu tiên lớn hơn $y$ khi tính từ vị trí $j - 1$ về $1,\dots$Tới khi phần tử lớn nhất của dãy số được đưa xuống cuối thì dãy số sẽ không thay đổi nữa.

Vậy thuật toán là: Bắt đầu từ phần tử cuối cùng của dãy, tìm phần tử gần nó nhất và lớn hơn nó, rồi coi phần tử cuối cùng là phần tử mới đó, lại tiếp tục lặp lại như vậy tới khi tiến đến được phần tử lớn nhất của dãy thì in ra số bước nhảy đã thực hiện.

***Độ phức tạp:*** $O(n)$.