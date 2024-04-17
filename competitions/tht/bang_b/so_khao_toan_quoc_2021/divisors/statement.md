# Ước Số

Một số nguyên dương $n$ được phân tích thành thừa số nguyên tố như sau:
$$n = p_1^{k_1} \times p_2^{k_2} \times \cdots \times p_m^{k_m}$$

***Yêu cầu:*** Cho hai số nguyên không âm $A, B \ (A \le B),$ đếm số lượng ước của $n$ thuộc đoạn $[A, B]?$

## Input

- Dòng đầu tiên chứa số nguyên dương $m$.
- Tiếp theo là $m$ dòng, dòng thứ $i$ chứa hai số nguyên dương $p_i$ và $k_i$ thể hiện phân tích nguyên tố của $n,$ trong đó các giá trị $p_i$ đôi một khác nhau.
- Ba dòng cuối cùng tương ứng với ba câu hỏi, mỗi dòng chứa hai số nguyên không âm $(A, B)$ tương ứng với một câu hỏi.

## Constraints

- $1 \le m \le 25$.
- $1 \le p_i, k_i \le 10^9; \forall i: 1 \le i \le m$.
- $0 \le A \le B \le 10^9$.

## Output

- Trên ba dòng, mỗi dòng ghi một số nguyên là đáp án tương ứng với câu hỏi ở đầu vào.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $m \le 5; 0 \le A \le B \le 10^6$.
- Subtask $2$ ($40\%$ số điểm): $m \le 10; 0 \le A \le B \le 10^9$.
- Subtask $3$ ($20\%$ số điểm): Không có ràng buộc gì thêm.

## Sample Input

```
3
2 4
3 4
5 4
1 5
1 10
1 5 
```

## Sample Output

```
5
9
5
```
