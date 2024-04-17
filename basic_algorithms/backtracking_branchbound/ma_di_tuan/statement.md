# Mã Đi Tuần

Cờ vua là một trò chơi rất phổ biến trên thế giới. Trò chơi này sử dụng một bàn cờ $8 \times 8,$ mô phỏng cuộc chiến giữa hai bên đen và trắng với quân lực như nhau, trong đó mỗi bên có $2$ quân “Mã” (Knight). Cách di chuyển của quân mã trên bàn cờ có hình giống chữ `L`, được mô phỏng theo như hình vẽ dưới đây:

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/jUdoWtFz.png">
</center>

***Yêu cầu:*** Cho một bàn cờ vua $N \times N,$ các hàng đánh số từ $1$ tới $N$ từ trên xuống dưới, các cột đánh số từ $1$ tới $N$ từ trái qua phải; và một quân mã ban đầu ở vị trí ô $(1, 1)$. Hãy tìm một cách di chuyển của quân mã sao cho nó đi qua tất cả các ô trên bàn cờ, mỗi ô đúng một lần.

## Input

- Chứa duy nhất số nguyên dương $N$.

## Constraints

- $1 \le N \le 10$.
- Thời gian thực thi: $1s$.
- Giới hạn bộ nhớ: $256MB$.

## Output

- Chứa một bảng ô vuông $N x N,$ mỗi ô là một số nguyên thể hiện cho thứ tự của bước đi mà quân mã sẽ di chuyển tới ô đó. Ban đầu ô $(1, 1)$ được coi là bước đi thứ nhất.

## Sample Input

```
5
```

## Sample Output

```
1 10 15 20 23 
16 5 22 9 14 
11 2 19 24 21 
6 17 4 13 8 
3 12 7 18 25
```

