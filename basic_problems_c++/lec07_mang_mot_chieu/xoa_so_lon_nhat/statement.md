# Xóa Số Lớn Nhất

Cho mảng một chiều $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Gọi $\text{maxv}$ là số lớn nhất trong mảng.

***Yêu cầu:*** Hãy xóa tất cả các phần tử có giá trị bằng $\text{maxv}$ trong mảng?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - kích thước dãy số.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 100$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- Dòng đầu tiên đưa ra kích thước của mảng sau khi xóa. Dữ liệu đảm bảo mảng sẽ không bị xóa toàn bộ.
- Dòng thứ hai đưa ra các phần tử của mảng sau khi xóa theo đúng thứ tự ban đầu, mỗi số cách nhau một dấu cách. 

## Sample Input 1

```
5
6 6 2 4 1
```

## Sample Output 1

```
3
2 4 1
```


