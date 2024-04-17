# Tích Ba Số

Cho số nguyên dương $n$.

***Yêu cầu:*** Tìm số nguyên lớn nhất không vượt quá $n$ và là tích của ba số nguyên tố liên tiếp?

## Input

- Dòng đầu tiên chứa số nguyên dương $t$ tương ứng là số bộ tests.
- Trên $t$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $n$.

## Constraints

- $1 \le t \le 15$.
- $1 \le n \le 10^{18}$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le n \le 10^6$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $t$ dòng là kết quả của $t$ bộ test tương ứng, nếu không tìm thấy số thỏa mãn thì ghi $-1$.

## Sample Input 1

```
1
36
```

## Sample Output 1

```
30
```

## Explanation 1

$30 = 2 \times 3 \times 5 < 36$.