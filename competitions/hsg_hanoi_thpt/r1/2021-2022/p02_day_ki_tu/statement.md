# Dãy Kí Tự

Cho một robot được lập trình di chuyển trên một hàng ngang gồm các ô vuông. Mỗi ô được đặt tên bằng các kí tự theo thứ tự từ `A` tới `Z` và được lặp lại vô hạn. Ban đầu robot xuất phát từ ô thứ $1$ có tên là `A` và nhảy đến các ô tiếp theo theo quy luật: lần $1$ nhảy $1$ ô, lần $2$ nhảy $2$ ô, lần $3$ nhảy $3$ ô,...lần $n$ nhảy $n$ ô. 

***Yêu cầu:*** Xác định xem sau $n$ lần nhảy thì robot đang ở ô nào?

<center>

![Imgur](https://i.imgur.com/H5fG1ss.png)
</center>

## Input

- Gồm một số nguyên dương $n$ là số lần nhảy của robot.

## Constraints

- $1 \le n \le 10^9$.

## Output

- Gồm một kí tự duy nhất là tên của ô sau $n$ lần robot nhảy.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $n \le 10^3$.
- Subtask $2$ ($20\%$ số điểm): $n \le 10^6$.
- Subtask $3$ ($20\%$ số điểm): $n \le 10^9$.

## Sample Input 1

```
1
```

## Sample Output 1

```
B
```

## Sample Input 2

```
4
```

## Sample Output 2

```
K
```

## Sample Input 3

```
7
```

## Sample Output 3

```
C
```