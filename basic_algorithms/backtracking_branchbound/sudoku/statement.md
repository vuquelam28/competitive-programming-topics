# Trò Chơi Sudoku

Sudoku là một trò chơi khá quen thuộc trên điện thoại di động. Trò chơi cung cấp một bảng ô vuông được chia thành $9×9$ ô vuông con, trên mỗi ô vuông con chỉ có thể chứa các giá trị số từ $1$ tới $9$. Ban đầu, một số ô vuông có sẵn số, còn lại là các ô vuông trống. Nhiệm vụ của người chơi là điền số vào các ô vuông trống còn lại sao cho trên mọi hàng ngang, hàng dọc và các khối $3×3$ của hình vuông đều chứa các số khác nhau từ $1$ tới $9$. Dưới đây là một ví dụ về hình vuông ban đầu và cách giải:

<center>

<img src="https://cdn.ucode.vn/uploads/2247/images/noPoIKun.png">
</center>

***Yêu cầu:*** Cho trước bảng ô vuông đề bài, hãy tìm ra một cách giải cho bảng ô vuông đó theo đúng yêu cầu của trò chơi Sudoku?

## Input

- Gồm $9$ dòng, mỗi dòng chứa $9$ số nguyên có giá trị từ $0$ tới $9,$ số $0$ thể hiện cho ô vuông trống, mỗi số cách nhau một dấu cách.

## Constraints

- Thời gian thực thi: $1s$.
- Giới hạn bộ nhớ: $256MB$.

## Output

- In ra bảng ô vuông đã được giải, mỗi số cách nhau một dấu cách.

## Sample Input

```
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```

## Sample Output

```
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6 
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

