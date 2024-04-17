# Hội Nghị Quốc Tế

Trong một hội nghị quốc tế có $M$ đại biểu tham dự được đánh số từ $1$ tới $M$. Tại hội nghị có sử dụng $N$ ngôn ngữ khác nhau được đánh số từ $1$ tới $N$. Mỗi đại biểu biết một số ngôn ngữ trong $N$ ngôn ngữ đó. Hai đại biểu $u$ và $v$ có thể trao đổi với nhau nếu biết một ngôn ngữ chung hoặc nhờ các đại biểu khác làm phiên dịch.

Khi một đại biểu $u$ muốn chào đại biểu $v,$ đại biểu $u$ sẽ nói to lời chào bằng một ngôn ngữ $i$ mà đại biểu này biết và các đại biểu biết ngôn ngữ $i$ đều hiểu được lời chào này. Nếu đại biểu $v$ không hiểu lời chào đó (tức $v$ không biết ngôn ngữ $i$), sẽ có một số đại biểu khác phiên dịch trung gian để đại biểu $v$ hiểu được lời chào từ đại biểu $u$. Gọi $a_{uv}$ là số đại biểu có thể hiểu được lời chào của đại biểu $u$ dành cho đại biểu $v$ (bao gồm cả hai đại biểu $u$ và $v$). 

***Yêu cầu:*** Với mỗi cặp $(u, v),$ hãy xác định số nguyên $a_{uv}$ nhỏ nhất?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $M$ và $N$.
- Trên $M$ dòng tiếp theo, dòng thứ $i$ chứa số nguyên dương $k_i$ là số lượng ngôn ngữ mà đại biểu thứ $i$ biết, theo sau đó là $k_i$ số nguyên dương $x$ là số hiệu của các ngôn ngữ mà đại biểu này biết theo thứ tự tăng dần $(1\le x\le N)$.

## Constraints

- $2 \le M \le 300$.
- $1 \le N \le 300$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $2\le M\le100,\ 1\le N\le100$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $M$ dòng và $N$ cột. Tại vị trí dòng thứ $u,$ cột thứ $v$ ghi số nguyên $a_{uv}$ tìm được $(1\le u\le M,1\le v\le N)$. Trong đó $a_{uu}=0$. Nếu như hai đại biểu $u$ và $v$ không thể hiểu được nhau thì $a_{uv}=-1$.

## Sample Input 1

```
4 3
2 1 3
2 1 2
2 2 3
1 3
```

## Sample Output 1

```
0 2 3 3
2 0 2 4
3 2 0 3
3 4 3 0
```

## Explanation 1

Nếu đại biểu $1$ chào đại biểu $2$ bằng ngôn ngữ $1,$ có hai đại biểu hiểu lời chào là đại biểu $1$ và đại biểu $2$.

Nếu đại biểu $1$ chào đại biểu $2$ bằng ngôn ngữ $3,$ thì cần thêm đại biểu $3$ phiên dịch sang ngôn ngữ $2$ để đại biểu $2$ hiểu được. Mà đại biểu $4$ cũng hiểu ngôn ngữ $3,$ do đó cả bốn đại biểu đều hiểu được lời chào.

Từ đó ta có $a_{12}=a_{21}=2$ là nhỏ nhất.


