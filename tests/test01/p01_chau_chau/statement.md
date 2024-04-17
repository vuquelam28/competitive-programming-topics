# Châu Chấu

Châu chấu đang đứng ở tọa độ $x_0$ trên trục số.

Vì quá chán và không có việc gì làm, cậu ấy quyết định nhảy qua lại ở các tọa độ nguyên. Ở tọa độ $x,$ nếu nhảy $d$ bước sang phải thì châu chấu sẽ đến tọa độ $x + d,$ nếu nhảy sang trái thì sẽ ở tọa độ $x - d$.

Ở phút thứ $i$ kể từ khi bắt đầu, châu chấu sẽ nhảy đúng $i$ bước. Nghĩa là phút thứ nhất nhảy $1$ bước, phút thứ $2$ nhảy $2$ bước,...

Hướng của bước nhảy được xác định như sau: nếu châu chấu đang đứng ở tọa độ **chẵn** thì sẽ nhảy qua **trái,** ngược lại nếu tọa độ **lẻ** thì sẽ nhảy qua **phải.**

Ví dụ, sau $18$ bước nhảy liên tục ($18$ phút) và hiện tại châu chấu đang đứng ở tọa độ $7$ (lẻ), thì bước nhảy tiếp theo châu chấu sẽ nhảy $19$ bước sang trái, chú sẽ nhảy đến toạ độ $19 + 7 = 26$. Ở bước nhảy tiếp theo, châu chấu sẽ nhảy $20$ bước sang trái ($26$ là số chẵn), vậy chú ấy sẽ di chuyển đến tọa độ $26 - 20 = 6$.

***Yêu cầu:*** Cho tọa độ điểm đứng ban đầu $x_0$ của châu chấu, tìm vị trí châu chấu sẽ đứng sau khi thực hiện $n$ lần nhảy?

## Input
    
- Dòng thứ nhất chứa số nguyên $x_0$ - tọa độ ban đầu của châu chấu.
- Dòng thứ hai chứa số nguyên $n$ - số lần nhảy châu chấu sẽ thực hiện.

## Constraints

- $|x_0| \le 10^{14}$.
- $0 \le n \le 10^{14}$.

## Subtask

- Subtask $1$ ($20\%$ số điểm): $0 \le n \le 10^5$.
- Subtask $2$ ($80\%$ số điểm): $10^5 < n \le 10^{14}$.

## Output

- Một dòng chứa số nguyên duy nhất — tọa độ châu chấu đứng sau $n$ lần nhảy.

## Sample input 1

```
5 2
```

## Sample output 1

```
4
```

## Explanation 1

Châu chấu sẽ nhảy $1$ bước sang phải sau đó $2$ bước sang trái.

## Sample input 2

```
5 0
```

## Sample output 2

```
5
```

## Explanation 2

Không cần nhảy nên vẫn giữ nguyên vị trí ban đầu.