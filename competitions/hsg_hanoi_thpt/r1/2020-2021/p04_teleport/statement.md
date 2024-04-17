# Dịch Chuyển Tức Thời

Cho trước một bảng số kích thước $m \times n$. Các hàng của bảng được đánh số từ $1$ tới $m,$ từ trên xuống dưới; các cột của bảng được đánh số từ $1$ tới $n,$ từ trái qua phải. Ô nằm trên giao của hàng $i$ và cột $j$ gọi là ô $(i, j);$ trên đó có ghi một số nguyên $a_{i, j}$ không âm. Trên bảng số này, bạn chơi một trò chơi di chuyển theo quy tắc như sau:
- Xuất phát tại ô $(x, y),$ tìm cách di chuyển tới ô đích $(z, t)$.
- Khi đang đứng tại một ô $(u, v);$ bạn có thể di chuyển sang một trong bốn ô chung cạnh: $(u - 1, v), (u + 1, v), (u, v - 1), (u, v + 1)$ nếu như ô đó nằm trong bảng. Ngoài ra, bạn cũng có thể di chuyển thẳng tới một ô có cùng giá trị trong bảng (nhưng không được phép đi tới ô có số $0$). Mỗi lần di chuyển tốn một đơn vị thời gian.

***Yêu cầu:*** Cho trước bảng số và ô xuất phát, ô đích. Hãy tìm thời gian nhỏ nhất để di chuyển từ ô xuất phát tới ô đích theo đúng quy tắc đã đề ra?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m$ và $n$ - số hàng và số cột của bảng.
- Dòng thứ hai chứa bốn số nguyên dương $x, y, z, t$.
- $m$ dòng tiếp theo, mỗi dòng chứa $n$ số nguyên không âm $a_{i, j}$ phân tách nhau bởi dấu cách - thể hiện một hàng của bảng số.

## Constraints

- $1 \le m, n \le 1000$.
- $0 \le a_{i, j} < 10^9; \forall i, j: 1 \le i \le m, 1 \le j \le n$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le m, n \le 100; a_{i, j} < 100$ và các số nguyên trong bảng phân biệt.
- Subtask $2$ ($20\%$ số điểm): $1 \le m, n \le 1000; a_{i, j} < 10^9$ và các số nguyên trong bảng phân biệt.
- Subtask $3$ ($20\%$ số điểm): $1 \le m, n \le 1000; a_{i, j} \le 1000$ và các số nguyên trong bảng lặp lại không quá hai lần.  
- Subtask $4$ ($20\%$ số điểm): $1 \le m, n \le 1000; a_{i, j} < 10^9$ và các số nguyên trong bảng có thể lặp lại nhiều lần.

## Output

- In ra thời gian nhỏ nhất để di chuyển từ ô xuất phát tới ô đích.

## Sample Input 1

```
5 4
1 1 5 4
1 2 3 4
5 0 0 6
7 0 8 9
0 0 10 0
11 12 13 14
```

## Sample Output 1

```
9
```

## Explanation 1

Đường đi tối ưu có thể theo thứ tự các ô in đậm trên hình: $1, 2, 3, 4, 6, 9, 8, 10, 13, 14$.

