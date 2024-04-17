# Phần Tử Yên Ngựa

Nhập vào một bảng số nguyên gồm $m$ hàng và $n$ cột, các hàng được đánh số từ $1$ tới $m,$ từ trên xuống dưới; các cột được đánh số từ $1$ tới $n,$ từ trái qua phải. Một phần tử được gọi là ***phần tử yên ngựa*** nếu như nó vừa là giá trị lớn nhất của hàng, vừa là giá trị nhỏ nhất của cột chứa nó.

***Yêu cầu:*** Hãy xác định số lượng phần tử yên ngựa trong bảng số?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $m, n$ - kích thước bảng số.
- $m$ dòng tiếp theo, dòng thứ $i$ chứa $N$ số nguyên là các số thuộc hàng $i$ của bảng số, phân tách nhau bởi dấu cách.

## Constraints

- $1 \le m, n \le 1000$.
- $1 \le a_{i, j} \le 1000; \forall i, j: 1 \le i \le m, 1 \le j \le n$.

## Subtasks

- Subtask $1$ ($30\%$ số điểm): $1 \le m, n \le 50$.
- Subtask $2$ ($70\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số lượng phần tử yên ngựa trong dãy.

## Sample Input 1

```
4 4
1 2 3 4
1 2 3 5
2 5 4 5
2 5 6 8
```

## Sample Output 1

```
1
```

## Explanation 1

Phần tử ở hàng $1,$ cột $4$ là phần tử yên ngựa.
