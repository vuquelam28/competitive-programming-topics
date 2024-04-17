# Vá sàn nhà

Một ngôi nhà có mặt sàn hình vuông gồm $n \times n$ ô. Ví dụ với $n = 5$ thì sàn nhà sẽ có dạng sau:

<center>

![](https://cdn.ucode.vn/uploads/24444/upload/jvIJRiei.png)
</center>

Có một số ô sàn nhà đã bị thủng lỗ, bạn có thể mua một tấm ván dạng $1 \times n$ để vá tất cả các ô trên cùng một hàng hoặc $n \times 1$ để vá các ô trên cùng một cột.

***Yêu cầu:*** Hãy tính số lượng miếng ván ít nhất cần mua để vá các ô bị thủng?

## Input

- Dòng thứ nhất chứa số nguyên $n$.
- $n$ dòng tiếp theo, mỗi dòng chứa $n$ số nguyên. $c_{i, j} = 1$ có nghĩa sàn nhà bị thủng, ngược lại bằng $0$.

## Constraints

- $1 \le n, m \le 10$.
- $0 \le c_{i, j} \le 1$.

## Output

- Số lượng miếng ván cần mua để vá các ô bị thủng.

## Sample Input 1

```
5
0 1 0 1 0
0 1 0 1 0
1 1 1 1 1
0 1 0 1 0
0 1 0 1 0
```

## Sample Output 1

```
3
```

## Explanation 1

Mua $3$ tấm ván, vá các ô ở hàng $3$, cột $2$ và $4$.