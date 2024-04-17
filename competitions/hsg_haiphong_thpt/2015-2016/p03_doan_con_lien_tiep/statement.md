# Đoạn Con Liên Tiếp

Cho một dãy $n$ số nguyên dương $a_1,a_2,…,a_n$.

***Yêu cầu:*** Đếm số đoạn con gồm các phần tử liên tiếp với số phần tử không nhỏ hơn $2$ và có tổng là một số chính phương thuộc đoạn giá trị $[1,k]?$ Biết rằng, số chính phương là bình phương của một số nguyên dương.

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n,k$.
- Dòng tiếp theo chứa $n$ số nguyên dương $a_1,a_2, \dots,a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le k \le 10^5$.
- $1 \le a_i \le 10^4; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($70\%$ số điểm): $n \le 100, 1 \le a_i \le 10^4, k \le 10^5$.
- Subtask $2$ ($20\%$ số điểm): $n \le 10^4, 1 \le a_i \le 10^3, k \le 10^4$.
- Subtask $3$ ($10\%$ số điểm): $n \le 10^5, 1 \le a_i \le 10^2, k \le 100$.

## Output

- Ghi một số nguyên duy nhất là số lượng đoạn con liên tiếp có tổng là số chính phương nằm trong đoạn $[1, k]$.

## Sample Input 1

```
4 15
2 2 5 9
```

## Sample Output 1

```
2
```

## Explanation 1

Có $2$ đoạn con có tổng là số chính phương: $(2,2);(2,2,5)$ thỏa mãn điệu kiện đề bài.

Riêng đoạn $(2,5,9)$ mặc dù có tổng bằng $16 = 4^2$ nhưng lại không thỏa mãn điều kiện đề bài là thuộc đoạn $[1, k]$ nên ta không tính vào kết quả.