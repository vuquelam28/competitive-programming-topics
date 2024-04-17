# Unique

Cho một danh sách liên kết $S$ gồm $n$ phần tử và đã được sắp xếp theo thứ tự giá trị không giảm từ đầu tới cuối $S$. Tuy vậy, $S$ lại bao gồm một số phần tử trùng giá trị nhau, nhiệm vụ của bạn là loại bỏ những giá trị trùng lặp trong $S$.

***Yêu cầu:*** Hãy in ra danh sách $S$ mới?

## Input

- Dòng đầu tiên chứa một số nguyên dương $n$ miêu tả độ dài của $S$.
- Dòng thứ hai gồm $n$ số nguyên dương miêu tả $S$. Đảm bảo các số này được nhập vào theo thứ tự không giảm.

## Constraints 

- Các số trong $S$ đều là số nguyên trong khoảng $[0,10^9]$.
- $1 \le n \le 10^4$.

## Output

- Dòng đầu tiên in ra độ dài $m$ của danh sách liên kết $S$ mới.
- Gồm $m$ số nguyên là phần tử của $S$.

## Sample Input 1

```
12
1 1 1 2 2 2 3 4 5 5 6 6
```

## Sample Output 1

```
6
1 2 3 4 5 6
``` 