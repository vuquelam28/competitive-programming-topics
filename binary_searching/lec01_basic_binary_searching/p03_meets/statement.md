# Gặp gỡ

Có $n$ thành phố (đánh số từ $1$ đến $n$) nằm dọc theo một đường cao tốc. 

Thành phố $i$ có khoảng cách đến vị trí bắt đầu con đường cao tốc là $d_i$ $(i=1,2,\dots,n)$. 

An đang sống ở thành phố $x$, Bình đang sống ở thành phố $y$. Hai bạn muốn tìm thành phố $z$ để gặp nhau sao cho $max⁡(|d_x-d_z |,|d_y-d_z |)$ là nhỏ nhất.

***Yêu cầu***: Cho $d_1,d_2,\dots,d_n$ và $x,y$, hãy tìm $z$ để $max(|d_x-d_z |,|d_y-d_z |)$ là nhỏ nhất.


## Input

- Dòng đầu chứa hai số nguyên dương $n,Q$.
- Dòng thứ hai chứa $n$ số nguyên dương $d_1,d_2,\dots,d_n$. 
- $Q$ dòng tiếp theo, mỗi dòng chứa hai số $x,y$ mô tả một câu hỏi.

## Constraints

- $1 \le n,Q \le 10^5$.
- $1 \le d_i \le10^9$.
- Subtask $1$ ($80\%$ số điểm): $1 \le n,Q \le 100$.
- Subtask $2$ ($20\%$ số điểm): Không có ràng buộc gì thêm.


## Output

- Gồm $Q$ dòng (mỗi dòng một câu hỏi), dòng $i$ là giá trị $max⁡(|d_x-d_z |,|d_y-d_z |)$ nhỏ nhất tìm được.

## Sample input 1

```
5 2
1 2 3 4 5
1 5
2 3
```

## Sample output 1

```
2
1
```


