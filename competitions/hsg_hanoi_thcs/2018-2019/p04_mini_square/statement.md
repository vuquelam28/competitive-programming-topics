# Hình Vuông Con

Một bảng hình chữ nhật được chia thành lưới ô vuông đơn vị kích thước $m \times n$. Các hàng của bảng được đánh số từ $1$ tới $m,$ từ trên xuống dưới; các cột của bảng được đánh số từ $1$ tới $n,$ từ trái qua phải. Ô nằm trên hàng $i,$ cột $j$ của bảng được gọi là ô $(i,j)$ và có ghi giá trị $a_{i,j} \ (1≤i≤m,1≤j≤n)$. Một hình vuông con của bảng là hình vuông chiếm chọn một số ô của bảng.

***Yêu cầu:*** Với số nguyên dương $k$ cho trước, hãy chọn ra một hình vuông con kích thước $k \times k,$ sao cho giá trị của số nhỏ nhất trong hình vuông con là lớn nhất?

## Input

- Dòng đầu tiên chứa ba số nguyên dương $m,n,k$.
- Trên $m$ dòng tiếp theo, dòng thứ $i$ chứa $n$ số nguyên dương $a_{i,1}, a_{i, 2}, \dots, a_{i, n}$ thể hiện hàng thứ $i$ của bảng số.

## Constraints

- $1 \le m, n \le 1000$.
- $1 \le k \le \text{min}(m, n)$.
- $1 \le a_{i, j} \le 10^6; \forall i: 1 \le i \le m$.

## Subtasks

- Subtask $1$ ($20\%$ số điểm): $1 \le m, n \le 10$.
- Subtask $2$ ($80\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Chứa một số nguyên duy nhất là giá trị của số nhỏ nhất trong hình vuông thỏa mãn yêu cầu của đề bài.

## Sample Input 1

```
5 5 2
1 11 2 3 3
9 9 2 3 3
2 2 2 2 2
1 2 2 5 6
4 10 2 7 8
```

## Sample Output 1

```
5
```

## Explanation 1

Hình vuông con với tọa độ góc trái trên $(4, 4)$ và góc phải dưới $(5, 5)$ là hình vuông thỏa mãn đề bài.
