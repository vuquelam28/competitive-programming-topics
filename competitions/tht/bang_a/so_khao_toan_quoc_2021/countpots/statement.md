# Đếm Đĩa

Ta có một hệ thống đĩa được xếp trên một cọc như hình vẽ dưới đây:

<center>
<img src = "https://cdn.ucode.vn/uploads/2247/images/NqxHpjAf.png">
</center>

Các đĩa được đánh số từ trên xuống dưới, bắt đầu từ $1$. Trong đó, đĩa $1$ đựng được $a$ lít nước, đĩa sau đựng được nhiều hơn đĩa bên trên $b$ lít nước. Khi rót nước từ trên xuống, nếu đĩa thứ $i$ đầy, nước sẽ chảy xuống đĩa thứ $i + 1$.

***Yêu cầu:*** Hãy đếm số lượng đĩa có nước khi rót $N$ lít nước từ đĩa thứ $1$ xuống. Giả sử nước rót không bị rơi ra ngoài và lượng đĩa đủ để đựng hết nước.

## Input

- Dòng thứ nhất chứa một số tự nhiên $N$ là số lượng lít nước sẽ rót xuống.
- Dòng thứ hai chứa một số tự nhiên $a$ là dung tích nước của đĩa $1$.
- Dòng thứ ba chứa một số tự nhiên $b$ là dung tích nước đĩa sau đựng được nhiều hơn đĩa trước.

## Constraints

- $N \le 10^{16}$.
- $a \le 1000$.
- $b \le 10$.

## Output

- Số nguyên duy nhất là số lượng đĩa có nước.

## Sample Input 1

```
8
1
1
```

## Sample Output 1

```
4
```

## Sample Input 2

```
10
2
3
```

## Sample Output 2

```
3
```

## Explanation

- Khi $a = 1, b = 1$ thì dung tích các đĩa lần lượt là $1, 2, 3, 4, 5,...$Vậy với $N=8$ thì kết quả là $4$. Các đĩa có nước lần lượt là: Đĩa $1$ có $1$ lít, đĩa $2$ có $2$ lít, đĩa $3$ có $3$ lít và đĩa $4$ có $2$ lít nước.
- Khi $a = 2, b = 3$ thì dung tích các đĩa lần lượt là $2, 5, 8, 11, 14,...$Vậy với $N=10$ thì kết quả là $3$. Các đĩa có nước lần lượt là: Đĩa $1$ có $2$ lít, đĩa $2$ có $5$ lít và đĩa $3$ có $3$ lít nước.
