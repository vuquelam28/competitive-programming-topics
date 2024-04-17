# Ước Chung Lớn Nhất Trên Đoạn

Bài toán tìm ước chung lớn nhất của dãy số chắc hẳn đã quá quen thuộc với tất cả các bạn học sinh. Bờm cũng vừa được học về ước chung lớn nhất ở lớp, tất nhiên cậu cũng biết về tìm ước chung lớn nhất của một dãy số bằng giải thuật Euclid. Tuy nhiên, thầy giáo hỏi một câu hỏi nâng cao hơn: Nếu như bỏ đi một đoạn phần tử từ vị trí $l$ tới vị trí $r$ của dãy, thì ước chung lớn nhất của các số còn lại là bao nhiêu?

***Yêu cầu:*** Hãy giúp Bờm trả lời câu hỏi của thầy giáo!

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số lượng phần tử của dãy số.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách - các phần tử của dãy.
- Dòng thứ ba chứa số nguyên dương $t$ - số lượng câu hỏi của thầy giáo.
- $t$ dòng tiếp theo, mỗi dòng chứa một cặp số nguyên $[l, r] \ (l \le r)$ - thể hiện một câu hỏi.

## Constraints

- $2 \le n \le 2 \times 10^5$.
- $1 \le a_i \le 10^9; \forall i: 1 \le i \le n$.
- $1 \le t \le 10^5$.
- Không tồn tại truy vấn yêu cầu xóa toàn bộ dãy.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $n, a_i \le 100; t = 1$.
- Subtask $2$ ($30\%$ số điểm): $n \le 2 \times 10^5; a_i \le 10^9; t \le 10$.
- Subtask $3$ ($40\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Trên $t$ dòng, mỗi dòng ghi một số nguyên là ước chung lớn nhất của dãy số sau khi bỏ đi đoạn $[l, r]$ tương ứng.

## Sample Input 1

```
3
2 6 9
3
1 1
2 2
2 3
```

## Sample Output 1

```
3
1
2
```

