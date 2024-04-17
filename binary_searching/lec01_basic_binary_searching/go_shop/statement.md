# Siêu Thị Go

Siêu thị GO là một trong các siêu thị lớn của cả nước. Trong siêu thị có $n$ gian hàng được đánh số từ $1$ đến $n$. Một món hàng ở gian hàng thứ $i$ có giá $a_i,$ và có thể xem số lượng hàng ở mỗi gian hàng là vô hạn.

Trong ngày hôm nay, siêu thị chào đón $q$ vị khách. Vị khách thứ $i$ mang theo số tiền là $x_i,$ và sẽ lần lượt ghé thăm các gian hàng từ $p_i$ đến $n$. Mỗi khi ghé thăm một gian hàng, nếu số tiền còn lại đủ để mua một món hàng từ gian hàng đó, thì vị khách sẽ lập tức chi tiền ra mua một món hàng từ gian hàng.

***Yêu cầu:*** Hãy cho biết mỗi vị khách mua được bao nhiêu món hàng?

## Input 

- Dòng đầu tiên ghi hai số nguyên dương $n, q$ - số gian hàng và số vị khách.
- Dòng tiếp theo gồm $n$ số nguyên dương $a_1, a_2, ..., a_n$ - giá một món hàng tại các gian hàng.
- Trên $q$ dòng tiếp theo, dòng thứ $i$ gồm hai số nguyên dương $x_i, p_i$ - số tiền vị khách thứ $i$ mang theo và gian hàng đầu tiên mà vị khách thứ $i$ viếng thăm.

## Constraints 

- $1 \le n, q \leq 100000$.
- $1 \le a_i \leq 100; \forall i: 1 \le i \le n$. 
- $x_i \leq 10^7, p_i \leq N; \forall i: 1 \le i \le q$.

## Subtasks 

- Subtask $1$ ($30\%$ số điểm): $1 \le n, q \le 1000$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output 

- In ra trên $q$ dòng, dòng thứ $i$ cho biết số món hàng mà vị khách thứ $i$ mua được.

## Sample Input 1

```
7 4
9 3 5 2 6 3 2
11 3
11 1
100 2
1 1
```

## Sample Output 1

```
3
2
6
0
```

