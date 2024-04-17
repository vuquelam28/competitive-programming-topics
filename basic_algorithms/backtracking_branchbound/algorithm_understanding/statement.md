# Thông Hiểu Thuật Toán

Hân mới bắt đầu học lập trình thi đấu. Cô ấy đang muốn học $M$ thuật toán. Độ **thông hiểu** của Hân với mỗi thuật toán đang là $0$.

Hân đi qua một cửa hàng sách và tìm được $N$ quyển sách về các thuật toán. Quyển sách thứ $i$ có giá là $c_i$ đồng. Nếu cô ấy mua quyển $i$ thì với mỗi thuật toán $j \ (1 \le j \le M)$ độ thông hiểu của Hân sẽ **tăng thêm** một lượng là $a_{i,j}$.

Hân muốn độ thông hiểu của cô ấy với $M$ thuật toán đều từ $X$ trở lên.

***Yêu cầu***: Hãy cho biết Hân có thể có độ thông hiểu với $M$ thuật toán đều từ $X$ trở lên hay không? Nếu có, hãy cho biết số tiền ít nhất mà cô ấy phải bỏ ra.

## Input

- Dòng đầu tiên chứa $3$ số $N,M,X$.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa $M+1$ số. Số đầu tiên là $c_i$, $M$ số sau là $a_{i,1}, a_{i,2}, \dots, a_{i,M}$.

## Constraints

- $1 \le N, M \le 12$.
- $1 \le X \le 10^5$.
- $1 \le c_i \le 10^5; \forall i: 1 \le i \le N$.
- $0 \le a_{i,j} \le 10^5; \forall i, j: 1 \le i \le N, 1 \le j \le M$.

## Output

- Nếu Hân không thể đạt được mục tiêu, in ra $-1$. Nếu có thể in ra số tiền ít nhất mà cô ấy phải bỏ ra.

## Sample Input 1

```
3 3 10
60 2 2 4
70 8 7 9
50 2 3 9
```

## Sample Output 1

```
120
```

## Sample Input 1

```
3 3 10
100 3 1 4
100 1 5 9
100 2 6 5
```

## Sample Output 1

```
-1
```