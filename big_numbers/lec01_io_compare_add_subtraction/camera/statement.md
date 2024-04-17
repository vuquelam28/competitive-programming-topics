# Camera

Có $n$ chiếc máy tính đặt ở một hội trường được biểu diễn trên trục $OX$. Máy tính thứ $i$ được đặt tại vị trí $a_i \ (1 \le i \le n)$. 

Ta cần đặt một chiếc camera ở vị trí $D$ sao cho tổng khoảng cách từ camera tới các máy tính là nhỏ nhất có thể. Biết rằng, khoảng cách của $2$ vị trí $x,y$ được tính theo công thức $|x-y|$.

***Yêu cầu:*** In ra tổng khoảng cách nhỏ nhất có thể từ camera tới các máy tính?

## Input

- Dòng đầu tiên chứa một số nguyên dương $n$ miêu tả số máy tính.
- Dòng thứ $2$ gồm $n$ số, số thứ $i$ miêu tả vị trí của máy thứ $i$. $(1 \le a_i \le 10^{500})$.

## Constraints

- $1 \le n \le 500$.
- $1 \le a_i \le 10^{500}; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le a_i \le 10^6$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra kết quả của bài toán.

## Sample Input 1

```
4
1 6 2 4
```

## Sample Output 1

```
7
``` 

## Explanation 1

Đặt camera ở vị trí $3$, ta có $|3-1| + |3-6| + |3-2| +|3-4| = 7,$ đây là tổng khoảng cách bé nhất có thể đặt.

## Sample Input 2

```
5
1 4 2 8 6
```

## Sample Output 2

```
11
``` 

## Explanation 2

Đặt camera ở vị trí $4,$ ta có $|4-1| + |4-4| + |4-2| +|4-8| + |4-6| = 11,$ đây là tổng khoảng cách bé nhất có thể đặt.