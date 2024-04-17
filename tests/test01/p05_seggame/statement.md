# Trò Chơi Đoạn Vui Vẻ

Cuội rất thích chơi một mình trong thời gian rảnh rỗi. Đây là trò chơi mà Cuội mới nghĩ ra. 

Bạn được cho hai dãy số nguyên dương. Bạn cần thực hiện lần lượt các nước đi. Bạn chỉ được thực hiện nước đi theo qui tắc sau. Bạn loại $K1\ (K1 \ge 1)$ số cuối cùng từ dãy thứ nhất (có thể toàn bộ dãy) và tính tổng của chúng $S1$ và $K2$ số cuối cùng trong dãy thứ hai (có thể toàn bộ dãy) và tính tổng của chúng $S2$. 

Sau đó tính chi phí của nước đi là $(S1 - K1) \times (S2 - K2)$. Bạn tiếp tục thực hiện nước đi cho đến khi loại bỏ mọi số trong cả hai dãy. Tổng chi phí của trò chơi là tổng chi phí của tất cả các nước đi. Bạn không được phép để cho một dãy vẫn còn số hạng còn dãy kia thì rỗng.

***Yêu cầu:***  Tìm cách chơi với tổng chi phí là nhỏ nhất?

## Input

- Dòng đầu tiên chứa hai số nguyên $L1, L2$ là độ dài của hai dãy số.
- Dòng thứ hai chứa $L1$ số hạng của dãy số thứ nhất.
- Dòng thứ ba chứa $L2$ số hạng của dãy số thứ hai.

## Constraints

- $1 \le  L1, L2 \le  2000$.
- Các số hạng của các dãy số là các số nguyên không vượt quá $1000$. 

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le L1,L2 \le 100$.
- Subtask $2$ ($40\%$ số điểm): $1 \le L1,L2 \le 500$.
- Subtask $3$ ($30\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Tổng chi phí nhỏ nhất của trò chơi.

## Sample input 1

```
3 2
1 2 3
1 2
```

## Sample output 1

```
2
```

