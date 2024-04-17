# Bài Phép Thuật

Trò chơi bài phép thuật Yu-gi-oh chắc hẳn đã quá quen thuộc với tuổi thơ của mỗi người. Nhân ngày cuối tuần, An sang nhà Bình chơi, và hai người quyết định ôn lại tuổi thơ bằng cách lấy ra hai bộ bài phép thuật để thi đấu với nhau. 

Tới lượt chơi hiện tại, An đang giành được lượt tấn công, và An đang sở hữu $m$ lá bài ở vị trí sẵn sàng chiến đấu. Ở phía bên kia chiến tuyến, Bình cũng có sẵn $n$ lá bài, nhưng ở một trong hai vị trí **tấn công (ATK)** hoặc **phòng thủ (DEF)**. Mỗi quân bài đều có điểm tấn công và điểm phòng thủ xác định.

An có thể thực hiện một trong hai lựa chọn sau với số lần tùy ý:

1. Chọn một lá bài $x$ của bản thân. Lá bài này phải là lá bài chưa từng được chọn trước đó.
2. Tấn công Bình bằng lá bài $x$. Lúc này, nếu như Bình không còn lá bài nào trên bàn, thì Bình sẽ nhận sát thương bằng đúng với điểm tấn công của quân bài $x$. Còn ngược lại, An phải chọn một lá bài $y$ của Bình để tấn công, khi đó xảy ra hai trường hợp sau:
    
    - Nếu như $y$ là lá bài đang ở tư thế phòng thủ và **DEF** của $y$ nhỏ hơn **ATK** của $x$ thì lá bài $y$ sẽ biến mất, nhưng Bình không phải nhận sát thương. 
    - Nếu $y$ là lá bài đang ở tư thế tấn công và **ATK** của $y$ nhỏ hơn hoặc bằng **ATK** của $x,$ thì lá bài $y$ sẽ biến mất và Bình nhận một lượng sát thương bằng hiệu giữa **ATK** của lá bài $x$ và **ATK** của lá bài $y$.

An có thể kết thúc lượt của mình bất kỳ lúc nào cậu ta thích, tức là không cần thiết phải sử dụng hết các lá bài của mình.

***Yêu cầu:*** Hãy tìm chiến lược tấn công cho An để Bình phải nhận nhiều sát thương nhất có thể ở lượt chơi này?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $m$ - số lá bài mà Bình và An đang sở hữu.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa một chuỗi kí tự $\text{state}_i$ và giá trị $a_i$ - là vị trí và sức mạnh của lá bài thứ $i$ trên sân đấu của Bình. Nếu như $\text{state} = $`ATK` thì lá bài đó đang ở vị trí tấn công và $a_i$ là số điểm tấn công, còn nếu $\text{state} = $`DEF` thì lá bài đó đang ở vị trí phòng thủ và $a_i$ là số điểm phòng thủ.
- $m$ dòng cuối cùng, dòng thứ $i$ ghi một số nguyên $a_i$ là sức mạnh tấn công của lá bài thứ $i$ trên phần sân của An. Tất cả $m$ quân bài của An đều đang ở vị trí tấn công.

## Constraints

- $1 \le n, m \le 100$.
- $0 \le a_i \le 8000; \forall i: 1 \le i \le n$.
- $0 \le b_i \le 8000; \forall i: 1 \le i \le m$.

## Output

- Số nguyên duy nhất là tổng sát thương tối đa mà An có thể gây ra cho Bình trong lượt chơi của mình.

## Sample Input 1

```
2 3
ATK 2000
DEF 1700
2500
2500
2500
```

## Sample Output 1

```
3000
```

## Explanation 1

Đầu tiên An sử dụng lá bài thứ $3$ để tấn công lá bài thứ $1$ của Bình, rồi dùng lá bài thứ $2$ tấn công lá bài thứ $2$ của Bình, cuối cùng dùng nốt lá bài còn lại tấn công trực tiếp vào Bình. Tổng sát thương Bình phải nhận là $(2500 - 2000) + 2500 = 3000$.

## Sample Input 1

```
3 4
ATK 10
ATK 100
ATK 1000
1
11
101
1001
```

## Sample Output 1

```
992
```

## Explanation 2

Đầu tiên An sử dụng lá bài thứ $4$ của mình để tấn công lá bài thứ $2$ của Bình, rồi dùng lá bài thứ $3$ của mình tấn công lá bài thứ $1$ của Bình. Hai lá còn lại An sẽ không dùng tới. Tổng sát thương mà Bình phải nhận là: $(1001 - 100) + (101 - 10) = 992$.

## Sample Input 3

```
2 4
DEF 0
ATK 0
0
0
1
1
```

## Sample Output 3

```
1
```

## Explanation 3

An chỉ cần sử dụng lá bài thứ $3$ hoặc thứ $4$ của mình để tấn công vào lá bài thứ $2$ của Bình, như vậy sát thương Bình nhận được sẽ là: $1 - 0 = 0$.
