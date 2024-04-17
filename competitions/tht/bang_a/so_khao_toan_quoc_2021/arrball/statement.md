# Đặt Sỏi

Trên một đoạn thẳng, đầu tiên người ta đặt hai viên sỏi cách xa nhau. Sau đó lặp đi lặp lại thao tác sau: Xác định trung điểm giữa hai viên sỏi liên tiếp trên đoạn thẳng, đặt thêm một viên sỏi vào vị trí đó.

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/ehyvAYtt.png">
</center>

Ví dụ với hình vẽ trên, ta thấy:
- Ban đầu chỉ có hai viên sỏi đặt trên một đường thẳng.
- Lượt đặt thứ nhất $(N = 1),$ thêm một viên sỏi vào trung điểm của hai viên ban đầu.
- Ở lượt đặt thứ hai $(N = 2),$ đã có ba viên sỏi của lượt trước và đặt thêm hai viên sỏi (được đánh số $2$) vào vị trí trung điểm của hai đoạn thẳng như hình mô tả.

Giả sử luôn luôn có khoảng cách để có thể đặt một viên sỏi vào giữa hai viên sỏi.

***Yêu cầu:*** Xác định số viên sỏi sau lượt đặt thứ $N?$ Vì kết quả có thể rất lớn nên chỉ cần đưa ra chữ số cuối cùng của đáp án.

## Input

- Một dòng duy nhất chứa số tự nhiên $N$.

## Constraints

- $N \le 10^9$.

## Output

- Chữ số duy nhất là chữ số cuối cùng của số lượng sỏi đã đặt.

## Sample Input 1

```
2
```

## Sample Output 1

```
5
```

## Sample Input 2

```
4
```

## Sample Output 2

```
17
```

## Explanation

- Khi $N = 2$ thì số sỏi là $5$ viên.
- Khi $N = 4$ thì số sỏi là $17$ viên, vậy đáp án in ra là $7$.