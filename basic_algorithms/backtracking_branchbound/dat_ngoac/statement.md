# Tạo Ngoặc Đúng

Một dãy ngoặc được coi là đúng đắn nếu như nó thỏa mãn những điều kiện sau:
- Số lượng ngoặc mở bằng số lượng ngoặc đóng.
- Tại mọi vị trí của dãy ngoặc, số lượng ngoặc mở luôn luôn lớn hơn hoặc bằng số lượng ngoặc đóng.

***Yêu cầu:*** Cho số nguyên dương $n,$ hãy liệt kê tất cả các cách khác nhau đặt $n$ dấu ngoặc mở và $n$ dấu ngoặc đóng đúng đắn?

## Input

- Chứa duy nhất số nguyên dương $n$.

## Constraints

- $1 \le n \le 10$.
- Thời gian thực thi: $1s$.
- Giới hạn bộ nhớ: $256MB$.

## Output

- Gồm nhiều dòng, mỗi dòng ghi một cách đặt ngoặc đúng đắn tìm được.

## Sample Input

```
3
```

## Sample Output

```
((()))
(()())
(())()
()(())
()()()
```


