# Hệ Thống Tưới Nước Tự Động

Hoàng muốn tưới hoa trong vườn bằng hệ thống tưới nước tự động. Nhưng vì mới vào nghề và chi phí làm ra thấp nên hệ thống nhìn rất đơn sơ, chỉ là một đường ống với $n$ cái lỗ đặt trên $n$ bông hoa.

Hoàng có thể bịt một vài lỗ, sau đó đổ $A$ lít nước vào đường ống. Sau đó, số nước chảy khỏi mỗi lỗ không bị bịt sẽ tỉ lệ thuận với kích thước của nó $s_1, s_2, \dots, s_n$. Nói cách khác, nếu $S$ là tổng kích thước của những lỗ không bị bịt, và lỗ thứ $i$ có kích thước là $s_i$ thì số nước chảy ra sẽ bằng $\frac{s_i \cdot A}{S}$  lít.

***Yêu cầu:*** Hỏi cần phải bịt **ít nhất** bao nhiêu lỗ để có ít nhất $B$ lít nước chảy khỏi lỗ **thứ nhất?**

## Input

- Dòng thứ nhất chứa số nguyên $n$ — số lỗ trên ống nước.
- Dòng thứ hai chứa số nguyên $A$ — số lít nước Hoàng sẽ đổ vào.
- Dòng thứ ba chứa số nguyên $B$ — số lít nước Hoàng muốn ống đầu tiên chảy ra.
- Trên $n$ dòng tiếp theo chứa $n$ số nguyên $s_1, s_2, \dots, s_n$ — $s_i$ là kích thước của lỗ thứ $i$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le B \le A \le 10^4$.
- $1 \le s_i \le 10^4$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 10$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số nguyên duy nhất — số lượng lỗ ít nhất Hoàng cần bịt.

## Sample input 1

```
4
10
3
2
2
2
2
```

## Sample output 1

```
1
```

## Explanation 1

Hoàng cần bịt ít nhất một lỗ, khi đó số lít nước chảy ra lỗ thứ nhất sẽ bằng  $\frac{10 \cdot 2}{6} \approx 3.333 > 3$.

## Sample input 2

```
4
80
20
3
2
1
4
```

## Sample output 2

```
0
```

## Explanation 2

Không cần bịt lỗ nào, số lít nước chảy ra sẽ bằng $\frac{80 \cdot 3}{10} = 24 > 20$. 


## Sample input 3

```
5
10
10
1000
1
1
1
1
```

## Sample output 3

```
4
```

## Explanation 3

Hoàng bịt hết trừ ống đầu tiên.
