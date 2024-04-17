# TMatrix

Một hang động được biểu thị dưới dạng một lưới ô vuông $n \times m$ vừa được tìm thấy. Do không rõ hang động chứa những gì, các nhà thám hiểm muốn cử những con robot xuống để do thám trước.

Xét lưới ô vuông thước $n \times m,$ các dòng được đánh số từ $1$ đến $n$ từ trên xuống, các cột được đánh số từ $1$ đến $m$ từ trái sang phải. Ô nằm trên giao của dòng $i,$ cột $j$ được gọi là ô $(i, j)$ và ô này chứa một số nguyên dương $a_{i, j}$. Nếu một robot đang ở ô $(x, y),$ nó có thể thực hiện bước di chuyển sau:
- Robot di chuyển sang ô kề cạnh với ô $(𝑥, 𝑦)$ nằm trong lưới, việc di chuyển này mất $1$ đơn vị thời gian.
- Robot di chuyển sang ô $(𝑢, 𝑣)$ nằm trong lưới nếu $𝑢 \times 𝑣 = 𝑎(𝑥, 𝑦),$ việc di chuyển này mất $3$ đơn vị thời gian.

Bài toán yêu cầu tính thời gian nhỏ nhất để robot di chuyển từ ô $(𝑝, 𝑞)$ đến ô $(𝑟, 𝑠)$.

***Yêu cầu***: Cho lưới kích thước $n \times m$ và các số trên lưới. Có $h$ câu hỏi, với câu hỏi thứ $k \ (k = 1, 2,..., h)$ cần phải trả lời thời gian nhỏ nhất để virus di chuyển từ ô $(p_k, q_k)$ đến ô $(r_k, s_k)$ là bao nhiêu?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n,m,h$.
- Tiếp theo là $n$ dòng, mỗi dòng gồm $m$ số nguyên dương miêu tả bảng $a$.
- $k$ dòng tiếp theo, mỗi dòng chứa bốn số nguyên $p_k,q_k,r_k,s_k$ miêu tả truy vấn.

## Constraints

- $1 \le n \times m \le 10^6$.
- $1 \le h \le 5$.
- $1 \le a_{i,j} \le 10^6$.
- Time Limit: 2.5 giây.

## Subtasks

- Subtask $1$ $(20\% số điểm)$: $n \times m \le 10^2$.
- Subtask $2$ $(20\% số điểm)$: $n \times m \le 10^3$.
- Subtask $3$ $(20\% số điểm)$: $n \times m \le 10^4$.
- Subtask $4$ $(20\% số điểm)$: $n \times m \le 10^5$.
- Subtask $5$ $(20\% số điểm)$: $n \times m \le 10^6$.

## Output

- In ra $h$ dòng là kết quả của $h$ truy vấn.

## Sample Input 1

```
2 5 2
8 6 4 1 1
1 1 1 1 1
1 1 2 5
2 5 1 1
```

## Sample Output 1

```
4
3
```