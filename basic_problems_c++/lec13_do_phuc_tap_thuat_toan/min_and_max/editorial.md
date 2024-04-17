# Min And Max - Editorial

### Subtask 1

Dùng một vòng lặp duyệt $i = 1...n,$ rồi tiếp tục dùng thêm vòng lặp $j = i...n$ để tìm ra giá trị nhỏ nhất trong đoạn $[i...n]$. Tương tự với việc tìm giá trị lớn nhất.

***Độ phức tạp:*** $O(n^2)$.

### Subtask 2

Nếu ta duyệt xuôi từng $i$ từ $1$ tới $n$ khiến mỗi lần tìm $\text{min}$ và $\text{max}$ sẽ lại mất thêm một vòng for nữa để tính sẽ dẫn tới TLE.

Ngược lại, ta có thể duyệt ngược $i$ từ $n$ về $1,$ để duy trì được giá trị $\text{min}$ và $\text{max}$ cần tính sau mỗi lần `for`, không cần phải tốn thêm một vòng `for` nữa.

***Độ phức tạp:*** $O(n)$.