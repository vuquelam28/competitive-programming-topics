# Dịch Chuyển Cây - Editorial

### Subtask 1

Duyệt trâu $3$ vòng lặp để đếm tất cả các cây cần dịch chuyển.

### Subtask 2

Ta chuẩn bị trước một số mảng sau:
- $\text{row\_left}[i][j]$: Số lượng cây cùng nhóm liên tiếp trên hàng $i,$ tính từ cột $1$ tới cột $j$.
- $\text{row\_right}[i][j]$: Số lượng cây cùng nhóm liên tiếp trên hàng $i,$ tính từ cột $n$ về cột $j$.
- $\text{col\_down}[i][j]$: Số lượng cây cùng nhóm liên tiếp trên cột $j,$ tính từ hàng $1$ tới hàng $i$.
- $\text{col\_up}[i][j]$: Số lượng cây cùng nhóm liên tiếp trên cột $j,$ tính từ hàng $m$ về hàng $i$.

Các mảng này có thể chuẩn bị trong $O(m \times n)$ bằng hai vòng lặp.

Xét cái cây ở ô $(i, j) \ (a_{i, j} != 0),$ nếu như nó thuộc một hàng hoặc cột nào đó thì xảy ra tối đa $4$ trường hợp sau:
- $a_{i, j - 1} = a_{i, j}$.
- $a_{i, j + 1} = a_{i, j}$.
  Hai trường hợp này là các cây thuộc cùng hàng ngang, thì số cây cùng hàng là: $\text{row\_left}[i][j - 1] + \text{row\_right}[i][j + 1] + 1$.
- $a_{i - 1, j} = a_{i, j}$.
- $a_{i + 1, j} = a_{i, j}$.
  Hai trường hợp này là các cây thuộc cùng hàng dọc, thì số cây cùng cột là: $\text{col\_down}[i - 1][j] + \text{col\_down}[i + 1][j] + 1$.

Nếu như số cây cùng hàng ngang và cột dọc của cây $(i, j)$ đều nhỏ hơn $t$ thì cây này cần phải di chuyển đi chỗ khác.

Độ phức tạp: $O(m \times n)$.