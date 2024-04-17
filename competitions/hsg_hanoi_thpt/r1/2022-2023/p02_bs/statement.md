# Bảng Số

Cho một bảng ô vuông gồm $n$ hàng và $n$ cột. Các hàng được đánh số từ $1$ đến $n,$ các cột được đánh số từ $1$ đến $n$. Ô ở hàng thứ $i$ và cột thứ $j$ có giá trị là $i \times j \ (1 \le i \le n, \ 1 \le j \le n)$.

***Yêu cầu:*** Cho một số nguyên dương $x$. Hãy đếm số lượng ô trong bảng có giá trị bằng $x?$

## Input

- Gồm hai số nguyên $n$ và $x$ là kích thước của bảng và số nguyên ta cần tìm trong bảng.

## Constraints

- $1 \le n \le 10^6$.
- $1 \le x \le 10^{12}$.

## Subtasks

- Subtask $1$ ($70\%$ số điểm): $1 \le n \le 10^3; 1 \le x \le 10^6$.
- Subtask $2$ ($30\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số lượng ô trong bảng có giá trị bằng $x$.

## Sample Input 1

```
6 5
```

## Sample Output 1

```
2
```

## Explanation 1

Bảng kích thước $6 \times 6$ thể hiện trong hình dưới đây:

<center>

![](https://imgur.com/FFsI9Oo.png)
</center>

## Sample Input 2

```
6 12
```

## Sample Output 2

```
4
```

## Explanation 2

Bảng kích thước $6 \times 6$ thể hiện trong hình dưới đây:

<center>

![](https://imgur.com/FFsI9Oo.png)
</center>

## Sample Input 3

```
5 13
```

## Sample Output 3

```
0
```

## Explanation 3

Bảng kích thước $5 \times 5$ thể hiện trong hình dưới đây:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/weOsxlkX.png)
</center>


