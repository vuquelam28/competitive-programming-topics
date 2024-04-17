# Tích Lớn Nhất

Cho dãy $a_1, a_2, \ldots, a_n$.

***Yêu cầu:*** Tìm giá trị $max(a_l, a_{l + 1}, \ldots, a_r) \cdot min(a_l, a_{l + 1}, \ldots, a_r)$ lớn nhất với tất cả các cặp $(l, r)$ thỏa mãn: $l,r$ là số tự nhiên và $1 \le l < r \le n$.

## Input

- Dòng đầu tiên chứa số tự nhiên $n$ - số phần tử của dãy.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa số tự nhiên $a_i$.

## Constraints

- $2 \le n \le 10^5$.
- $1 \le a_1, a_2, \ldots, a_n \le 10^6$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $2 \le n \le 10^3$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra một dòng duy nhất chứa giá trị lớn nhất của tích được cho trong đề bài.

## Sample input 1

```
3
2
4
3
```

## Sample output 1

```
12
```

## Explanation 1

Đặt $f(l, r) = max(a_l, a_{l + 1}, \ldots, a_r) \cdot min(a_l, a_{l + 1}, \ldots, a_r)$.

Test thứ nhất,

- $f(1, 2) = max(a_1, a_2) \cdot min(a_1, a_2) = max(2, 4) \cdot min(2, 4) = 4 \cdot 2 = 8$.
- $f(1, 3) = max(a_1, a_2, a_3) \cdot min(a_1, a_2, a_3) = max(2, 4, 3) \cdot min(2, 4, 3) = 4 \cdot 2 = 8$.
- $f(2, 3) = max(a_2, a_3) \cdot min(a_2, a_3) = max(4, 3) \cdot min(4, 3) = 4 \cdot 3 = 12$.

Nên giá trị lớn nhất là $f(2,3) = 12$.

## Sample input 2

```
4
3
2
3
1
```

## Sample output 2

```
6
```

## Explanation 2

Test thứ hai, giá trị lớn nhất là $f(1,2) = f(1,3) = f(2,3) = 6$.
