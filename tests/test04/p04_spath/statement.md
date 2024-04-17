# SPath

Cho bảng số $A$ kích thước $m\times n$, các hàng được đánh số từ trên xuống dưới, các cột được đánh số từ trái sang phải. Ô giao giữa hàng $i$ cột $j$ là ô $(i,j)$ và có giá trị $a(i,j)$. Hai ô có thể di chuyển tới nhau nếu chúng chung cạnh. Một đường đi sẽ bao gồm các ô sao cho hai ô liên tiếp chung cạnh, và nó có giá trị bằng tổng giá trị các ô trên đường đi. 

***Yêu cầu:*** Cho $q$ truy vấn, truy vấn thứ $i$ sẽ cho bạn hai ô $(x,y)$ và $(u,v)$ trong bảng. Kết quả của một truy vấn chính là giá trị của đường đi có trọng số nhỏ nhất giữa hai ô đã cho. Hãy in ra kết quả của từng truy vấn?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m,n$.
- Tiếp theo là $m$ dòng, mỗi dòng gồm $n$ số nguyên không âm miêu tả bảng $A$.
- Dòng tiếp theo là số nguyên dương $q$.
- Ở $q$ dòng tiếp theo mỗi dòng miêu tả một truy vấn, truy vấn thứ $i$ có dạng $x_i, y_i, u_i, v_i$ miêu tả ô $(x_i,y_i)$ và $(u_i,v_i)$. (Các ô đều nằm trong bảng).

## Constraints

- $1 \le n \le 7; 1 \le m \le 5000$.
- $0 \le a_{i,j} \le 10^5$. 
- $q \le 30000$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $n,q \le 500$.
- Subtask $2$ ($20\%$ số điểm): $m = 2$.
- Subtask $3$ ($20\%$ số điểm): $n \le 500$.
- Subtask $4$ ($20\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra $q$ dòng là kết quả của $q$ truy vấn.

## Sample Input 1

```
2 3
1 2 3
4 1 1
2
1 1 2 3
1 3 2 1
```

## Sample Output 1

```
5
9
```