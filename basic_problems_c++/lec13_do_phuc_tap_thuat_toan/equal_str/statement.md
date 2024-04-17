# Xâu Con Bằng Nhau

Cho xâu $s$ có độ dài $n$ gồm các chữ cái từ `a` đến `z`. Hai xâu con $s_1$ và $s_2$ bằng nhau nếu chúng có cùng độ dài và $s_{1_i} = s_{2_i}$ với mọi vị trí $i$.

***Yêu cầu:*** Hãy đếm số cặp xâu con bằng nhau trong xâu $s?$

## Input

- Gồm một xâu $s$ có độ dài $n$.

## Constraints

- $1 \le n \le 400$.

## Subtasks

- Subtaks $1$ ($30\%$ số điểm): $1 \le n \le 50$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm một dòng duy nhất là đáp án bài toán.

## Sample Input 1

```
ababa
```

## Sample Output 1

```
7
```

## Explanation 1

Có 7 cặp xâu với vị trí như sau:
- $(1, 1)$ và $(3, 3)$.
- $(1, 2)$ và $(3, 4)$.
- $(1, 3)$ và $(3, 5)$.
- $(1, 1)$ và $(5, 5)$.
- $(2, 2)$ và $(4, 4)$.
- $(2, 3)$ và $(4, 5)$.
- $(3, 3)$ và $(5, 5)$.

