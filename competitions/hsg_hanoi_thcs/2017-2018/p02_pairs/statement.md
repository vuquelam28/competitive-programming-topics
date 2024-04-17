# Cặp Quà Đặc Biệt

Để động viên khích lệ học sinh tham gia dự thi học sinh giỏi năm nay, trường ITS có chuẩn bị $n$ phần quà cho $n$ thí sinh dự thi. Trên hộp quà thứ $i$ có ghi số nguyên $a_i \ (1 \le i \le n)$. Sau khi tặng quà cho các thí sinh, trường sẽ có thêm những cặp quà đặc biệt cho những cặp thí sinh có cặp số trên hai hộp quà tương ứng là $(a_i, a_j) \ (1 \le i \ne j \le n)$ thỏa mãn $a_i + a_j = 0$.

***Yêu cầu:*** Hãy cho biết nhà trường phải chuẩn bị thêm bao nhiêu cặp quà đặc biệt?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 10^6$.
- $|a_i| \le 10^5; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 1000$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số lượng cặp quà mà nhà trường cần chuẩn bị.

## Sample Input 1

```
7
6 -3 0 1 -1 3 2
```

## Sample Output 1

```
2
```

## Explanation 1

Có hai cặp số có tổng bằng $0$ là $-3 + 3 = 0$ và $-1 + 1 = 0$. Vì thế nhà trường cần chuẩn bị thêm $2$ cặp quà.

