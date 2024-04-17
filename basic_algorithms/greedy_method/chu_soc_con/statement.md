# Chú Sóc Con

Sóc con rất thích ăn hạt dẻ. Trong rừng có $n$ cây được đánh số từ $1$ đến $n$ từ trái sang phải, độ cao của cây thứ $i$ là $h_i$. Có một hạt dẻ trên đỉnh của mỗi cây, sóc muốn ăn tất cả hạt dẻ của $n$ cây.

Hiện tại cậu ấy đang đứng ở dưới gốc của cây đầu tiên, trong một giây, sóc có thể thực hiện một trong các thao tác sau:

- Trèo lên hoặc xuống một đơn vị trên cây hiện tại.
- Ăn hạt dẻ ở trên đỉnh của cây hiện tại.
- Nhảy từ cây này qua cây khác với chiều cao sau khi nhảy không đổi. Cụ thể nếu sóc đang ở độ cao $h$ của cây $i$ thì khi nhảy qua cây $i + 1$ sóc vẫn ở độ cao $h$. Thế nên sóc không thể nhảy nếu như $h > h_{i + 1}$.

***Yêu cầu:*** Cho biết độ cao của $n$ cây và ban đầu sóc đang đứng ở gốc của cây đầu tiên, hỏi thời gian tối thiểu để sóc ăn hết $n$ hạt dẻ là bao nhiêu?

## Input

- Dòng đầu tiên chứa số nguyên $n$ — số lượng cây.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa số nguyên $h_i$ — độ cao của cây thứ $i$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le h_i \le 10^4; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100; 1 \le h_i \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số nguyên duy nhất là kết quả của bài toán — thời gian tối thiểu để sóc ăn hết $n$ hạt dẻ.

## Sample input 1

```
2
1
2
```

## Sample output 1

```
5
```


## Sample input 2

```
5
2
1
2
1
1
```

## Sample output 2

```
14
```

