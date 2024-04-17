# Mua đồ chơi

Hôm nay bạn Lan được mẹ dẫn đi mua đồ chơi. Cửa hàng đồ chơi có $n$ món đồ chơi khác nhau, món thứ $i$ có giá $i$ đồng.

**Yêu cầu:** Lan muốn chọn hai món đồ chơi để mua sao cho tổng giá tiền của hai món bằng $k$. Hỏi có bao nhiêu cách mà Lan có thể chọn. Hai cặp $(a, b)$ và $(b, a)$ là giống nhau ($a \ne b$).  

## Input

- Dòng đầu tiên chứa số nguyên $n$.
- Dòng thứ hai chứa số nguyên $k$.

## Constraints

- $1 \le n, k \le 10^{14}$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Dòng duy nhất chứa kết quả — số cách mà Lan có thể chọn.

## Sample input 1

```
8
5
```

## Sample output 1

```
2
```

## Explanation 1

Lan có thể chọn hai cặp ($1, 4$) và ($2, 3$).

## Sample input 2

```
8
15
```

## Sample output 2

```
1
```

## Explanation 2

Lan có thể chọn cặp $(7, 8)$.

## Sample input 3

```
7
20
```

## Sample output 3

```
0
```

## Explanation 3

Không có cách chọn nào.

