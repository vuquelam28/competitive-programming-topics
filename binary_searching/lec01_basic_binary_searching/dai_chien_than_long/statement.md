# Đại Chiến Thần Long

Hôm nay, Tuấn khám phá ra trò chơi điện  tử có tên "Đại chiến thần long". Đúng với cái tên, người chơi sẽ phải chiến đấu với rồng. Để chiến thắng, bạn phải tiêu diệt rồng và bảo vệ thành. Để làm việc đó, người chơi có $n$ anh hùng, sức mạnh của anh hùng thứ $i$ là $a_i$.

Luật chơi như sau, người chơi sẽ cử duy nhất một anh hùng lên đường diệt rồng, phần còn lại sẽ bảo vệ thành. Nếu sức phòng thủ của rồng bằng $x,$ bạn phải cử anh hùng có sức mạnh tối thiểu bằng $x$ để tiêu diệt. Nếu sức tấn công của rồng là $y$, tổng sức mạnh của các anh hùng phải tối thiểu bằng $y$ để bảo vệ thành.

Người chơi có thể sử dụng $1$ đồng xu để tăng sức mạnh của một người lính lên $1$ đơn vị và có thể làm vậy bao nhiêu lần tùy thích.

***Yêu cầu:*** Có $m$ con rồng trong trò chơi, con rồng thứ $i$ có chỉ số phòng thủ $x_i$, tấn công $y_i$. Với mỗi con rồng, bạn hãy giúp Tuấn tính xem cần ít nhất bao nhiêu xu để có thể đánh bại nó?

***Lưu ý:*** Mỗi con rồng là một trường hợp riêng biệt (chỉ số sức mạnh được tăng của anh hùng khi đấu với rồng hiện tại sẽ không còn khi xét đến con rồng tiếp theo).

## Input

- Dòng đầu tiên chứa số nguyên $n$, số lượng anh hùng.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ với $a_i$ là chỉ số sức mạnh của anh hùng thứ $i$.
- Dòng thứ ba chứa số nguyên $m$, số lượng rồng.
- Trong $m$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên $x_i, y_i$ lần lượt là chỉ số phòng thủ và tấn công của con rồng thứ $i$.

## Constraints

- $1 \leq n \leq 2 \cdot 10^5$.
- $1 \leq a_i \leq 10^{12}$.
- $1 \leq m \leq 2 \cdot 10^5$.
- $1 \leq x_i \leq 10^{12}$.
- $1 \leq y_i \leq 10^{18}$.

## Output

- In ra $m$ dòng, dòng thứ $i$ là số xu tối thiểu cần bỏ ra để tiêu diệt con rồng thứ $i$.

## Sample input 1

```
4
3 6 2 3
5
3 12
7 9
4 14
1 10
8 7
```

## Sample output 1

```
1
2
4
0
2
```
