# Tín Hiệu Tình Yêu

Romeo và Juliet yêu nhau rất sâu đậm, nhưng vì gia đình ngăn cấm nên họ không thể gặp nhau một cách công khai. Vì cảm thông cho tình yêu của họ, những thiên thần đã ban cho mỗi người một chiếc máy thu/phát tín hiệu – là phát minh mới nhất của những thiên thần. Chiếc máy này có thể giúp cho Juliet gửi cho Romeo định vị của Juliet, từ đó Romeo sẽ tới điểm hẹn bí mật khi họ muốn gặp nhau.

Quy tắc của chiếc máy rất đơn giản: Coi rằng con đường giữa hai bên gia đình là một trục số thẳng, và Romeo đang đứng ở vị trí $0$. Juliet sẽ gửi cho Romeo một dãy tín hiệu gồm các kí tự `+` và `-`, `+` nghĩa là Romeo cần tiến thêm một bước về phía chiều dương của trục số, `-` nghĩa là Romeo cần lùi lại một bước về phía chiều âm của trục số.

Tuy nhiên, do chiếc máy là đồ mới sản xuất nên đôi khi gặp trục trặc, nó khiến cho có một số tín hiệu bị nhiễu và chiếc máy của Romeo không thể thu nhận được tín hiệu đó. Những tín hiệu không xác định sẽ bị hiển thị là dấu `?`. Vì không thể để ai phát hiện, cho nên Romeo đành tự mình thử tất cả các cách đi có thể dựa vào dãy tín hiệu nhận được.

***Yêu cầu:*** Hãy tính xác suất mà Romeo có thể đi tới chính xác điểm hẹn mà Juliet mong muốn?

## Input

- Dòng đầu là chuỗi kí tự S_1 chỉ gồm các kí tự $\{$`+,-`$\}$ – là tín hiệu mà Juliet gửi tới cho Romeo.
- Dòng thứ hai là chuỗi kí tự $S_2$ chỉ gồm các kí tự $\{$`+,-,?`$\}$ – là chuỗi tín hiệu mà Romeo nhận được.

## Constraints

- Độ dài hai chuỗi tín hiệu bằng nhau và không vượt quá $10$.

## Output

- Ghi một số thực duy nhất là xác suất mà Romeo có thể tới chính xác điểm hẹn mà Juliet gửi tới, làm tròn tới $10$ chữ số sau dấu phẩy.

## Sample Input 1

```
++-+-
+-+-+
```

## Sample Output 1

```
1.0000000000
```

## Sample Input 2

```
+-+-
+-??
```

## Sample Output 2

```
0.5000000000
```