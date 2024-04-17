# Tìm Đường

Một chú robot nằm trên một ô của bảng gồm $m$ hàng, $n$ cột (chỉ số dòng được đánh thứ tự từ trên xuống dưới, chỉ số cột được đánh thứ tự từ trái sang phải), mỗi ô ghi một số nguyên chỉ độ cao thấp của ô đó. Robot cần di chuyển từ ô $(x_1,y_1)$ đến vị trí ô $(x_2,y_2)$ liên tiếp qua các ô chung cạnh. Để giảm thiểu nhiên liệu tiêu hao, robot cần tìm một hành trình sao cho độ chênh độ cao thấp giữa hai ô liên tiếp trên đường đi là bé nhất.

***Yêu cầu:*** Cho trước $m, n$ cùng chỉ số độ cao của các ô; hãy tìm đường đi cho robot từ ô $(x_1,y_1)$ tới ô $(x_2,y_2)$ sao cho độ chênh lệch chiều cao lớn nhất giữa hai ô liên tiếp trên hành trình là bé nhất?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m, n$ – kích thước bảng.
- Dòng thứ hai chứa bốn số nguyên dương $x_1,y_1,x_2,y_2$.
- Trên $m$ dòng tiếp theo, mỗi dòng chứa $n$ số nguyên $a_{i,j}$ – thể hiện độ cao thấp của các ô trong bảng.

## Constraints

- $1 \le m, n \le 100$.
- $-10^9 \le a_{i,j} \le 10^9; \forall i, j: 1 \le i \le m, 1 \le j \le n$.

## Output

- Một số nguyên duy nhất là độ chênh lệch lớn nhất là bé nhất tìm được.

## Sample Input 1

```
3 4
1 1 3 3
1 9 3 4
4 5 6 4
8 9 9 10
```

## Sample Output 1

```
3
```

## Explantion 1

Cách di chuyển tốt nhất là: $(1, 1) \to (2, 1) \to (2, 2) \to (3, 3)$.

