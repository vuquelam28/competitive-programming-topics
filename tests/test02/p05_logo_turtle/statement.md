# Rùa Robot

Sau một thời gian kì công nghiên cứu, chuyên gia lập trình Robot Đan Thanh đã sáng tạo ra được một chú rùa robot rất thông minh. Chị Đan Thanh quyết định test thử con robot này trên máy tính bằng cách đặt nó trên một trục tọa độ $Ox,$ rồi nạp vào cho chú rùa một chuỗi lệnh di chuyển gồm $2$ loại lệnh: 

- Lệnh `T`: Chú rùa sẽ quay $180\degree$ về hướng ngược lại.
- Lệnh `F`: Chú rùa sẽ tiến một đơn vị theo hướng hiện tại.

Vì đây là một con rùa rất thông minh, nên nó có thể tự thay đổi $n$ lệnh trong số các lệnh mà chị Đan Thanh đã nạp vào với mục đích di chuyển được quãng đường dài nhất. Biết rằng, ban đầu chị Đan Thanh có thể đặt chú rùa vào một vị trí ngẫu nhiên trên trục tọa độ, và quãng đường nó di chuyển được sẽ là khoảng cách giữa điểm cuối cùng sau khi di chuyển và điểm xuất phát ban đầu.

***Yêu cầu:*** Giúp chị Đan Thanh tính toán xem với $n$ lần tự thay đổi lệnh, thì chú rùa robot sẽ di chuyển được quãng đường dài nhất là bao nhiêu?

## Input

- Dòng đầu tiên chứa một chuỗi kí tự $s$ độ dài $m$ là dãy lệnh ban đầu, chỉ bao gồm hai kí tự `T` hoặc `F`.
- Dòng thứ hai chứa số nguyên dương $n$.

## Constraints

- $1 \le m \le 100$.
- $1 \le n \le 50$.

## Output

- Số nguyên duy nhất là quãng đường lớn nhất mà chú rùa di chuyển được.

## Sample input 1

```
FT
1
```

## Sample output 1

```
2
```

## Explanation 1

Thay đổi lệnh `T` thành lệnh `F`, chú rùa sẽ di chuyển được $2$ đơn vị.

## Sample input 2

```
FFFTFFF
2
```

## Sample output 2

```
6
```

## Explanation 2

Thay đổi lệnh số $1$ và lệnh số $4,$ chú rùa sẽ di chuyển được $6$ đơn vị.

