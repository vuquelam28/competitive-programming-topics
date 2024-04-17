# Đảo Dãy Số

Cho trước một dãy số $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Bạn được cung cấp một thao tác đảo dãy số như sau:

- Đặt $x = a_n$. Sau đó, chia dãy số ban đầu làm hai phần: bên trái và bên phải. Phần bên trái sẽ chứa toàn bộ các phần tử nhỏ hơn hoặc bằng $x$ trong $A$ (giữ nguyên thứ tự ban đầu của chúng), còn phần bên phải sẽ chứa toàn bộ các phần tử lớn hơn $x$ (cũng giữ nguyên thứ tự ban đầu của chúng).
- Nối phần bên trái và bên phải lại với nhau, tạo thành một dãy mới và thay thế dãy $A$ bởi dãy mới đó. Tiếp tục lặp lại thao tác đảo nói trên.

Ta có thể dễ dàng chứng minh rằng, nếu thực hiện liên tục thao tác trên với dãy $A,$ thì sau một số bước hữu hạn, dãy số sẽ không thay đổi nữa.

***Yêu cầu:*** Hãy xác định giá trị $k$ nhỏ nhất để dãy $A$ trở thành cố định sau khi thực hiện $k$ thao tác đảo?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số phần tử của dãy số.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách - các phần tử của dãy số.

## Constraints

- $1 \le n \le 2 \times 10^5$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.
 
## Output

- In ra giá trị $k$ nhỏ nhất tìm được.

## Sample Input 1

```
5
2 4 1 5 3
```

## Sample Output 1

```
1
```

## Sample Input 2

```
5
5 3 2 4 1
```

## Sample Output 2

```
2
```

## Sample Input 3

```
4
1 1 1 1
```

## Sample Output 3

```
0
```


