# Mèo Đổi Chỗ

Có $n$ con mèo trên cùng một hàng, được đánh số từ $1$ đến $n$, con mèo thứ $i$ đứng ở vị trí $i$. Những con mèo muốn đổi chỗ cho nhau sao cho sau khi đổi chỗ không có con mèo nào ở vị trí ban đầu của mình.

***Yêu cầu:*** Hãy tính xem sau khi đổi chỗ tổng khoảng cách ít nhất mà các con mèo phải di chuyển là bao nhiêu?

Ví dụ: nếu có $3$ con mèo, đây là thứ tự hợp lệ sau khi đổi chỗ: $[3, 1, 2]$. Không có con mèo nào ở vị trí ban đầu. Tổng khoảng cách di chuyển là $1 + 1 + 2 = 4$ do con mèo số $1$ di chuyển một bước sang phải, con mèo số $2$ di chuyển một bước sang phải và con mèo số $3$ di chuyển hai bước sang trái.

## Input

- Dòng duy nhất chứa số tự nhiên $n$ - số con mèo.
- Đề bài đảm bảo rằng luôn có đáp án.

## Constraints

- $2 \leq n \leq 100$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $2 \le n \le 10$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra một dòng duy nhất chứa một số tự nhiên là tổng khoảng cách ít nhất mà các con mèo phải di chuyển.

## Sample input 1

```
2
```

## Sample output 1

```
2
```

## Explanation 1

Có duy nhất một thứ tự các con mèo hợp lệ là: $[2, 1]$.

## Sample input 2

```
3
```

## Sample output 2

```
4
```

## Explanation 2

Một thứ tự các con mèo hợp lệ đã được nêu ở ví dụ trong đề bài.
