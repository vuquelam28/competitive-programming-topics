# Mã Di Truyền Học

Con người có $4$ loại ADN: `A`, `X`, `T`, `G`. Giả sử đoạn gien quy định màu da của con người là một chuỗi $N$ ADN kết hợp từ  $4$ loại ADN trên ($1 \le N \le 20$). Ví dụ một đoạn gien có $8$ ADN là: `AATXGGGT`. Các ADN trong đoạn gien được đánh số từ $1$ đến $N$.

Đoạn gien quy định màu da của thế hệ con cũng là một đoạn $N$ ADN kết hợp từ gien của bố và gien của mẹ. Trong đó ADN thứ $i$ ($1 \le i \le N$) được hình thành bằng cách lấy ADN thứ $i$ tương ứng của gien bố hoặc gien mẹ. Ví dụ:

- Gien của bố: `AATX`
- Gien của mệ: `GATT`
- Gien của con chỉ có thể là $4$ trường hợp sau: `AATX`, `AATT`, `GATX`, `GATT`.

***Yêu cầu:*** Cho trước gien của bố và gien của mẹ, bạn hãy viết chương trình liệt kê các khả năng có thể xảy ra của gien thế hệ con?

## Input

- Dòng thứ nhất chứa số nguyên $N$ biểu thị số ADN trong đoạn gien của bố và mẹ.
- Dòng thứ hai đoạn gien của bố.
- Dòng thứ ba đoạn gien của mẹ.

## Constraints

- $1 \le N \le 20$.
- Các đoạn gien của bố và mẹ có độ dài bằng $N$ và chỉ chứa các kí tự `A`, `T`, `G`, `X`.

## Output

- Dòng dầu tiên ghi số $K$ là tổng số khả năng có thể xảy ra của đoạn gien thế hệ con.
- Trong $K$ dòng tiếp theo, mỗi dòng liệt kê một khả năng của gien theo thứ tự từ điển.

## Sample input 1

```
2
AT
GX
```

## Sample output 1

```
4
AT
AX
GT
GX
```

## Sample input 2

```
4
AATX
GATT
```

## Sample output 2

```
4
AATT
AATX
GATT
GATX
```