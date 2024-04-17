# Nhặt sỏi

Hôm nay UcoderA và UcoderB chơi trò nhặt sỏi. Có $n$ viên sỏi được đánh số từ $1$ đến $n$ từ trái qua phải, viên thứ $i$ có số điểm $a_i$. Hai bạn sẽ chơi lần lượt và UcoderA chơi trước. Ở mỗi lượt, người chơi sẽ chọn lấy viên sỏi nằm ở bên trái nhất hoặc bên phải nhất. Khi không còn viên sỏi nào, mỗi bạn sẽ tính tổng điểm các viên sỏi mình đã lấy được.

***Yêu cầu:*** Giả sử hai bạn đều chơi thông minh, hãy cho biết số điểm của mỗi bạn.

## Input

- Dòng đầu tiên chứa số nguyên $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$.

## Constraints

- $1 \le n \le 20$
- $1 \le a_i \le 100$.

## Output

- Dòng đầu tiên in ra tên của người thắng cuộc là `UcoderA` hoặc `Ucoder B`, nếu hai bạn hòa nhau thì in ra `Draw`.
- Dòng thứ hai in ra hai số nguyên lần lượt là điểm của UcoderA và UcoderB.


## Sample input 1

```
5
3 5 2 8 1
```

## Sample output 1

```
UcoderB
6 13
```

## Explanation 1

Các lượt chơi sẽ diễn ra như sau:

- UcoderA lấy viên bên trái, được 3 điểm, dãy sỏi còn lại: $[5, 2, 8, 1]$. 
- UcoderB lấy viên bên trái, được $5$ điểm, dãy sỏi còn lại: $[2, 8, 1]$.
- UcoderA lấy viên bên phải, được $1$ điểm, dãy sỏi còn lại: $[2, 8]$.
- UcoderB lấy viên bên phải, được $8$ điểm, dãy sỏi còn lại: $[2]$
- UcoderA lấy viên cuối cùng, được $2$ điểm.

Sau các lượt chơi, UcoderA có tổng cộng $3 + 1 + 2 = 6$ điểm, UcoderB có tổng cộng $5 + 8 = 13 > 6$ điểm. Vậy UcoderB thắng.

