# Xếp Hậu

Trong trò chơi cờ vua, quân hậu là quân mạnh nhất khi nó kiểm soát được bàn cờ cả trên hàng ngang, hàng dọc và hàng chéo. Bài toán $8$ quân hậu là một bài toán rất nổi tiếng, theo đó, người giải phải tìm cách đặt $8$ quân hậu trên bàn cờ sao cho không có quân hậu nào ăn được nhau, tức là không có bất kỳ $2$ quân hậu nào đứng cùng hàng, cùng cột hoặc cùng đường chéo. Dưới đây là $1$ cách đặt $8$ quân hậu:

<center>
<img src="https://cdn.ucode.vn/uploads/2247/images/huBUYVbp.png">
</center>

***Yêu cầu:*** Cho trước một bàn cờ vua kích thước $N \times N,$ hãy in ra tất cả các cách đặt $N$ quân hậu trên bàn cờ sao cho không có bất kỳ $2$ quân hậu nào ăn được nhau?

## Input

- Chứa duy nhất số nguyên dương $N$.

## Constraints

- $1 \le N \le 8$.

## Output

- In ra tất cả các nghiệm của bài toán trên các dòng khác nhau, mỗi nghiệm gồm số thứ tự của nghiệm và $N$ số nguyên dương, số thứ $i$ thể hiện số hiệu cột của quân hậu xếp ở hàng thứ $i;$ mỗi số cách nhau một dấu cách. Các nghiệm được in ra theo thứ tự từ điển tăng dần. Nếu không tồn tại cách đặt, in ra số $0$.

## Sample Input

```
5
```

## Sample Output

```
1. 1 3 5 2 4 
2. 1 4 2 5 3 
3. 2 4 1 3 5 
4. 2 5 3 1 4 
5. 3 1 4 2 5 
6. 3 5 2 4 1 
7. 4 1 3 5 2 
8. 4 2 5 3 1 
9. 5 2 4 1 3 
10. 5 3 1 4 2
```
