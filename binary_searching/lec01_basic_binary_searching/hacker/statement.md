# Hacker

Một hacker người Ukraine đang nghiên cứu tấn công vào trang web của chính phủ Nga. Anh ta nhận ra rằng, hệ thống bảo mật của trang web có thể bị xâm nhập nếu như liên tục nhập vào hệ thống những bộ số nguyên có giá trị tuyệt đối của chênh lệch giữa chúng đúng bằng $k$. Nói cách khác, anh ta cần tấn công hệ thống bằng các bộ số nguyên $(a, b)$ thỏa mãn:

$$|a - b| = k$$

Để tiết kiệm công sức, hacker đã viết một chương trình tự động tạo ra $n$ số nguyên khác nhau. Sau đó, anh ta sẽ đếm số lượng cặp số $(a, b)$ trong dãy vừa tạo ra thỏa mãn điều kiện trên, rồi tính toán khả năng xâm nhập được trang web.

***Yêu cầu:*** Giúp hacker đếm số cặp $(a, b)$ thỏa mãn $|a - b| = k$ trong dãy số cho trước?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n, k$.
- Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ đôi một phân biệt - là dãy số mà hacker đã tạo ra.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le k \le 10^9$.
- $|a_i| \le 10^9; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le n \le 100$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra số lượng cặp thỏa mãn.

## Sample Input 1

```
5 2
1 5 3 4 2
```

## Sample Output 1

```
3
```

## Explanation 1

Các cặp số tìm được là: $(1, 3); (2, 4); (3, 5)$.

