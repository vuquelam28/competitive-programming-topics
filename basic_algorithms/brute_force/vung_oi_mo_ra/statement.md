# Vừng Ơi Mở Ra

Chắc hẳn ai trong chúng ta cũng đọc qua truyện "Alibaba và 40 tên cướp" và biết rằng khi Alibaba đến nơi cất kho báu và đọc thần chú "Vừng ơi mở ra!" thì cánh cửa sẽ mở ra.

Bây giờ là thế kỉ $21,$ mọi thiết bị cần được nâng cấp hiện đại hơn nữa, cánh cửa cũng vậy. Bây giờ, muốn vô được cửa thì phải giải được mật khẩu mà cửa tự động đưa ra (cướp ngày nay khá thông minh, nếu chỉ giữ mãi một câu thần chú thì không thể bảo vệ kho báu được).

Mật khẩu được gợi ý là dãy $a$ gồm $n$ số nguyên dương. Bạn thực hiện các thao tác sau để biến đổi dãy: Chọn vị trí $i$ sao cho $1 \le i < n$ và $a_i \ne a_{i + 1},$ xóa hai phần tử $a_i$ và $a_{i+1}$, thay thế nơi vừa bị xóa bởi số nguyên $b = a_i + a_{i + 1}$.

Ví dụ, cho dãy $a = [7, 4, 3, 7]$, chọn $i = 2$ và dãy sẽ trở thành $a = [7, 7, 7]$. Đến đây ta không thể biến đổi dãy $a$ nữa.

***Yêu cầu:*** Cứ mỗi lần biến đổi dãy thì kích thước sẽ bị giảm đi một đơn vị, dãy có kích thước nhỏ nhất chính là mật khẩu. Hỏi kích thước nhỏ nhất của dãy sau một vài (hoặc không) lần biến đổi là bao nhiêu?

## Input

- Dòng thứ nhất chứa số nguyên $n$.
- Trên $n$ dòng tiếp theo, dòng thứ $i$ chứa duy nhất số nguyên $a_i$.

## Constraints

- $1 \le n \le 10^6$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Output

- In ra độ dài ngắn nhất của dãy $a$ (độ dài của mật khẩu) sau khi biến đổi.

## Sample input 1

```
4
2 
1 
3
1
```

## Sample output 1

```
1
```

## Explanation 1

Bạn đọc có thể làm như sau để thu được mật khẩu có độ dài $1$: 

- Chọn i=2, $a = [2,4,1]$.
- Chọn i=1, $a = [6,1]$.
- Chọn i=1, $a = [7]$.
