# Chuẩn Bị Bàn

Kì thi Tin học trẻ năm nay có $N$ thí sinh tham gia. Ban tổ chức đang cần chuẩn bị bàn cho các thí sinh ngồi dự thi. Biết mỗi bàn có thể ngồi được tối đa $K$ thí sinh.

***Yêu cầu:*** Xác định xem Ban tổ chức cần chuẩn bị tối thiểu bao nhiêu bàn?

## Input

- Dòng thứ nhất chứa một số tự nhiên $N$ là số lượng thí sinh tham gia kỳ thi.
- Dòng thứ hai chứa một số tự nhiên $K$ là số lượng tối đa thí sinh có thể ngồi một bàn.

## Constraints

- $K \le N \le 10^9$.

## Output

- Số nguyên duy nhất là số lượng bàn tối thiểu cần phải chuẩn bị.

## Sample Input 1

```
8
2
```

## Sample Output 1

```
4
```

## Sample Input 2

```
103
5
```

## Sample Output 2

```
21
```

## Explanation

- Ở ví dụ $1,$ cần chuẩn bị tối thiểu $4$ bàn, mỗi bàn có $2$ thí sinh.
- Ở ví dụ $2,$ cần chuẩn bị tối thiểu $21$ bàn, khi đó có thể xếp như sau: Có $20$ bàn có $5$ thí sinh và $1$ bàn có $3$ thí sinh.


