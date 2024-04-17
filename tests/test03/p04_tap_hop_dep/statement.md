# Tập Hợp Đẹp

Cho một cây có $n$ đỉnh đánh số từ $1$ đến $n$ và đỉnh $1$ là gốc. Mỗi đỉnh trên đều được tô màu, đỉnh thứ $i$ được tô bởi màu $a_i$.

Một tập hợp các đỉnh trên được gọi là đẹp nếu có hơn một nửa số đỉnh trong tập được tô bởi cùng một màu.

Có $q$ truy vấn, mỗi truy vấn thuộc một trong các dạng sau:
- Truy vấn dạng: $1 \ u,$ truy vấn này kiểm tra xem tập đỉnh gồm các đỉnh nằm trong cây con gốc $u$ có phải là một tập đẹp hay không;
- Truy vấn dạng: $2 \ u,$ truy vấn này kiểm tra xem tập đỉnh gồm các đỉnh nằm ngoài cây con gốc $u$ có phải là một tập đẹp hay không;
- Truy vấn dạng $3 \ u \ v,$ truy vấn này kiểm tra xem tập đỉnh gồm các đỉnh nằm trên đường đi đơn từ $u$ tới $v$ (tính cả $u$ và $v$) có phải là một tập đẹp hay không.

***Yêu cầu:*** Hãy trả lời tất cả các truy vấn trên?

## Input

- Dòng đầu tiên chứa số nguyên dương $n, q$ là số đỉnh của cây và số lượng truy vấn.
- Dòng thứ hai chứa $n$ số, số thứ $i$ là $a_i$ mô tả màu sắc của đỉnh $i \ (1 \le a_i \le n)$.
- Trên $n − 1$ dòng tiếp theo, mối dòng chứa hai số nguyên dương $u, v \ (1 \le u, v \le n)$ mô tả cạnh nối hai đỉnh $u$ và $v$.
- Tiếp theo gồm có $q$ dòng mô tả các truy vấn. Các truy vấn thuộc một trong ba dạng $1 \ u, 2 \ u$ hoặc $3 \ u \ v$.

## Constraints

- $1 \le n,q \le 50000$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $1 ≤ n, q ≤ 2 000$.
- Subtask $2$ ($20\%$ số điểm): $1 ≤ n, q ≤ 50 000$ và mỗi đỉnh có tối đa $2$ cạnh nối trực tiếp.
- Subtask $3$ ($20\%$ số điểm): $1 ≤ n, q ≤ 50 000$ và $1 ≤ ai ≤ 2$
- Subtask $4$ ($20\%$ số điểm): $1 ≤ n, q ≤ 50 000$ và không có truy vấn loại $3$.
- Subtask $5$ ($20\%$ số điểm): không có ràng buộc nào thêm.

## Output

- Đưa ra câu trả lời cho mỗi truy vấn trên một dòng.

## Sample Input 1

```
8 5
2 3 3 1 2 1 3 1
1 2
1 3
2 4
2 5
3 7
5 6
6 8
1 2
3 4 6
2 6
2 5
3 1 5
```

## Sample Output 1
```
1
-1
-1
3
2
```

## Explanation 1

Dưới đây là hình vẽ của ví dụ thứ nhất với màu $1$ được tô màu xám, màu $2$ được tô màu đỏ và màu $3$ được tô màu xanh.

<center>

![Imgur](https://imgur.com/SoxFuNF.png)
</center>

- Truy vấn $1$: xét các đỉnh trong cây con gốc $2$ là $\{2, 4, 5, 6, 8\},$ màu $1$ xuất hiện $3$ lần.
- Truy vấn $2$: xét các đỉnh trên đường đi từ $4$ đến $6$ là $\{2, 4, 5, 6\},$ không có màu nào xuất hiện quá $2$ lần.
- Truy vấn $3$: xét các đỉnh nằm ngoài cây con gốc $6$ là $\{11, 2, 3, 4, 5, 7\}$, không có màu nào xuất hiện quá $13$ lần.
- Truy vấn $4$: xét các đỉnh nằm ngoài cây con gốc $5$ là $\{1, 2, 3, 4, 7\},$ màu $3$ xuất hiện $3$ lần.
- Truy vấn $5$: xét các đỉnh nằm trên đường đi từ $1$ đến $5$ là $\{1, 2, 5\},$ màu $2$ xuất hiện $2$ lần.