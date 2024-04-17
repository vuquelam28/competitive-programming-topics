# Chẵn Lẻ

Cho một mảng $A$ gồm $n$ số nguyên dương $a_1, a_2, ..., a_n$. Gọi trọng số của mảng là tổng của các cặp phần tử có tổng là lẻ. Nói cách khác, trọng số của mảng chính là tổng của các cặp số $(a_i, a_j)$ thỏa mãn $a_i + a_j$ lẻ $(1 \le i \le j \le n)$. 

***Yêu cầu:*** Hãy tìm trọng số của mảng $A?$

## Input

- Dòng đầu tiên gồm số nguyên dương $n$.
- Dòng thứ hai gồm $n$ số nguyên dương $a_1, a_2, ..., a_n$.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^5$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le n \le 10^3$.
- Subtask $2$ ($60\%$ số điểm): Không có điều kiện gì thêm.

## Output

- Gồm một số duy nhất là đáp án bài toán.

## Sample Input 1

```
5
3 7 2 1 9
```

## Sample Output 1

```
28
```

## Explanation 1

Các cặp thỏa mãn là $(a_1, a_3), (a_2, a_3), (a_3, a_4), (a_3, a_5)$. Tổng sẽ là $(a_1 + a_3) + (a_2 + a_3) + (a_3 + a_4) + (a_3 + a_5)$ = $3 + 2 + 7 + 2 + 2 + 1 + 2 + 9 = 28$.
