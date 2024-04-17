# Cặp Số Hoàn Hảo

An và bạn gái của mình cùng nhau tham dự chương trình cặp đôi hoàn hảo. Lí do là vì, năm nay chương trình đổi từ thi khiêu vũ sang thi coding, mà đó chính là lợi thế của An.

Ở vòng loại của chương trình, Ban Giám khảo ra đề bài như sau: Ứng với một cặp số $(a, b),$ ở mỗi thao tác An có thể sinh ra một trong hai cặp số mới là $(a + b, b)$ hoặc $(a, a + b)$. An được cho trước cặp số $(1, 1)$ và một số nguyên dương $N$. Cậu cần phải dùng ít thao tác nhất để từ cặp số $(1, 1)$ ban đầu thu được cặp số có ít nhất một số bằng $N$. Quá hồi hộp vì lần đầu được lên TV, An không thể nghĩ ra gì cả, và dĩ nhiên bạn gái của cậu cũng vậy!

***Yêu cầu:*** Hãy giúp cặp đôi này giải quyết bài toán của Ban Giám khảo đưa ra?

## Input

- Một dòng duy nhất chứa số nguyên dương $N$.

## Constraints

- $1 \le N \le 10^6$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le N \le 100$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số thao tác tối thiểu cần dùng. 

## Sample Input

```
5
```

## Sample Output

```
3
```

## Explanation

Cặp $(1, 1)$ có thể biến đổi để thu được số $5$ trong $3$ bước:
$$(1, 1) \rightarrow (1, 2) \rightarrow (3, 2) \rightarrow (5, 2)$$

