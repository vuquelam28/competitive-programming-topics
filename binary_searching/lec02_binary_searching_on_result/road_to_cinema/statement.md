# Rạp Chiếu Phim

Quỳnh là một cô bé rất đam mê phim ảnh, hàng tuần cô bé đều đến xem phim ở rạp CGV. Con đường từ nhà Quỳnh tới rạp chiếu phim có thể xem như một trục số, với nhà của Quỳnh ở tọa độ $0$ và rạp chiếu phim ở tọa độ $s$. 

Tuần này, do trời mưa nên Quỳnh không muốn tự đi tới rạp phim, mà sẽ thuê một chiếc ô tô rồi lái từ nhà mình tới rạp. Nơi thuê xe cung cấp $n$ chiếc xe, chiếc thứ $i$ có giá thuê $c_i$ đồng và dung tích bình xăng $v_i$ lít. Quỳnh thuê xe nào thì chiếc xe đó sẽ được đổ đầy xăng rồi đặt sẵn tại cửa nhà để Quỳnh sử dụng.

Mỗi chiếc xe đều có hai chế độ di chuyển: ***Chế độ chậm*** sẽ đưa Quỳnh đi được $1$ km trong $2$ phút và tiêu tốn $1$ lít xăng; ***chế độ nhanh*** sẽ đưa Quỳnh đi được $1$ km trong $1$ phút và tiêu tốn $2$ lít xăng. Tất nhiên, xe phải luôn luôn có xăng mới có thể di chuyển, và nếu hết xăng thì Quỳnh phải dừng lại để mua xăng rồi mới đi tiếp.

Trên con đường từ nhà Quỳnh tới rạp, có đúng $k$ trạm đổ xăng, trạm thứ $i$ đặt ở tọa độ $x_i \ (x_i < s; \forall i: 1 \le i \le k)$. Mỗi lần dừng lại đổ xăng, xe sẽ luôn luôn được đổ đầy bình xăng, bất kể nó đã hết xăng hay vẫn còn xăng. 

Tuy nhiên, có một vấn đề nảy sinh là bộ phim mà Quỳnh chọn để xem sẽ bắt đầu chiếu trong $t$ phút nữa, vì vậy cô bé phải đến rạp kịp thời, chậm nhất là sau đúng $t$ phút, nếu không sẽ bị lỡ mất phim. 

***Yêu cầu:*** Hãy giúp Quỳnh chọn ra chiếc xe để thuê sao cho chi phí thuê là nhỏ nhất, đồng thời cô bé vẫn có thể đến rạp phim kịp giờ chiếu?

## Input

- Dòng đầu tiên chứa bốn số nguyên dương $n, k, s, t$.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên dương $c_i, v_i$ - giá thuê và dung tích bình xăng của xe thứ $i \ (1 \le i \le n)$.
- Dòng cuối cùng chứa $k$ số nguyên $x_1, x_2, \dots, x_k$ - tọa độ của $k$ trạm xăng.
- Các số trên cùng một dòng phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 2 \times 10^5$.
- $1 \le k \le 2 \times 10^5$.
- $2 \le s \le 10^9$.
- $1 \le t \le 2 \times 10^9$.
- $1 \le c_i, v_i \le 10^9; \forall i: 1 \le i \le n$.
- $1 \le x_i < s; \forall i: 1 \le i \le k$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n, k \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra giá thuê xe nhỏ nhất mà Quỳnh cần bỏ ra, hoặc $-1$ nếu như không có cách nào để Quỳnh đến rạp kịp giờ chiếu.

## Sample Input 1

```
3 1 8 10
10 8
5 7
11 9
3
```

## Sample Output 1

```
10
```

## Explanation 1

Quỳnh có thể thuê xe thứ nhất hoặc xe thứ ba, nhưng xe thứ nhất sẽ rẻ hơn. Đầu tiên Quỳnh đi tới trạm xăng thứ nhất bằng chế độ nhanh, mất $3$ phút và $6$ lít xăng. Sau đó cô bé đổ đầy bình xăng $8$ lít, rồi đi tiếp $4$ phút ở chế độ thường và $3$ phút ở chế độ nhanh, di chuyển được tổng cộng $7$ km và tốn tròn $8$ lít xăng.

