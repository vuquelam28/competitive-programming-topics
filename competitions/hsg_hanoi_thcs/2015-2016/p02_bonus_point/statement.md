# Điểm Thưởng

Trong cuộc thi Tin học trẻ, mỗi thí sinh phải trả lời $n$ câu hỏi. Để tăng tính hấp dẫn của cuộc thi, Ban tổ chức quyết định đưa ra $n$ số điểm thưởng $a_1,a_2,\dots,a_n$. Theo thể lệ của cuộc thi, thí sinh trả lời đúng $k \ (1≤k≤n)$ câu hỏi sẽ nhận được số điểm thưởng bằng số lớn nhất trong các số $a_1,a_2,\dots,a_k$.

***Yêu cầu:*** Xác định điểm thưởng của thí sinh tương ứng với mỗi giá trị $k$ từ $1$ tới $n?$

## Input

- Dòng đầu chứa số nguyên dương $n$ – số câu hỏi.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1,a_2,\dots,a_n$ – các giá trị điểm thưởng.

## Constraints

- $1≤n≤10^5$.
- $1≤a_i≤10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le n \le 1000$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Gồm $n$ số nguyên dương là điểm thưởng cho thí sinh khi thí sinh trả lời đúng lần lượt $1,2,\dots,n$ câu hỏi.

## Sample Input 1

```
3
6 1 7
```

## Sample Output 1

```
6 6 7
```

## Explanation 1

Thí sinh trả lời đúng $1$ và $2$ câu hỏi sẽ nhận điểm thưởng là $6;$ trả lời đúng $3$ câu hỏi sẽ nhận điểm thưởng là $7$.
