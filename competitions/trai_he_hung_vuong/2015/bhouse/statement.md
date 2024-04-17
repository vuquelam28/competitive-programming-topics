# Xây Nhà

Sau nhiều năm tham dự trại hè kiếm thưởng, thanh niên Sơn Tùng dành dụm được một số tiền vừa đủ để mua đất làm nhà. Mảnh đất mà cậu ta mua được có dạng hình chữ nhật dài $N$ mét, rộng $M$ mét, được chia thành $N \times M$ ô đất có cạnh bằng $1$ và có độ cao nhất định, ô nằm ở giao của hàng thứ $i$ và cột thứ $j$ trên mảnh đất có chiều cao là $a_{i, j}$. Nhà của Sơn Tùng phải được xây trên một hoặc nhiều ô đất liền nhau có dạng hình chữ nhật và có cùng chiều cao.

***Yêu cầu:*** Hãy đếm số phương án xây nhà của Sơn Tùng trên mảnh đất mới mua được? Hai phương án xây nhà được gọi là khác nhau nếu như có ít nhất một ô đất khác nhau giữa hai phương án đó.

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N$ và $M$ - kích thước mảnh đất.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa $M$ số nguyên dương $a_{i, j}$ phân tách nhau bởi dấu cách - mô tả chiều cao của các ô đất trên hàng đó.

## Constraints

- $1 \le N, M \le 1000$.
- $1 \le a_{i, j} \le 10^9; \forall i, j: 1 \le i \le N, 1 \le j \le M$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le N, M \le 50$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là tổng số cách xây nhà mà Sơn Tùng có thể thực hiện.

## Sample Input

```
5 3
2 2 2
2 2 1
1 1 1
2 1 2
1 2 1
```

## Sample Output

```
27
```

