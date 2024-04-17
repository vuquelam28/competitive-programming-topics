# Minimize Distance

Hoàng là một du học sinh tại Nhật. Cũng như bao du học sinh khác, Hoàng cũng có công việc làm thêm để duy trì thu nhập cho bản thân, đó là phát báo thuê. Có $n$ ngôi nhà mà Hoàng phải phát báo tới, rất may rằng chúng đều nằm trên một đường thẳng, ngôi nhà thứ $i$ nằm ở tọa độ $x_i$. Hoàng cũng có tổng cộng $n$ tờ báo phải phát, mỗi nhà một tờ. Tuy nhiên, do di chuyển bằng xe đạp nên mỗi lần cậu chỉ có thể mang theo tối đa $k$ tờ báo, phát hết chúng rồi lại quay về cửa hàng, lấy tiếp báo mang đi. 

Coi rằng cửa hàng nằm ở vị trí $0,$ và Hoàng bắt đầu xuất phát từ vị trí này. Sau khi đã phát báo xong tới nhà cuối cùng thì Hoàng không cần quay về cửa hàng nữa.

***Yêu cầu:*** Hãy tính tổng quãng đường nhỏ nhất Hoàng phải di chuyển để phát hết $n$ tờ báo?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $k$.
- Dòng thứ hai chứa $n$ số nguyên $x_1, x_2, \dots, x_n$ - tọa độ của các ngôi nhà mà Hoàng cần phát báo. Tuy nhiên, có thể có hai ngôi nhà nằm cùng một vị trí.

## Constraints

- $2 \le n \le 2 \times 10^5$.
- $1 \le k \le n$.
- $-10^9 \le x_i \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $2 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra tổng khoảng cách nhỏ nhất Hoàng cần di chuyển để phát hết $n$ tờ báo.

## Sample input 1

```
5 1
1 2 3 4 5
```

## Sample output 1

```
25
```

## Explanation 1

Di chuyển theo cách sau để được tổng khoảng cách nhỏ nhất: $0 \to 2 \to 0 \to 4 \to 0 \to 3 \to 0 \to 1 \to 0 \to 5$. Mỗi lần di chuyển tới địa điểm $0$ nghĩa là một lần Hoàng phải đi từ cửa hàng và mang theo $1$ tờ báo.

## Sample Input 2

```
9 3
-5 -10 -15 6 5 8 3 7 4
```

## Sample Output 2

```
41
```

## Sample Input 3

```
5 3
2 2 3 3 3
```

## Sample Output 3

```
7
```

