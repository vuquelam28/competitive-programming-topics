# Đếm Tần Suất

Cho mảng $A$ gồm $n$ phần tử không âm $a_1, a_2, \dots, a_n$. Ta giả định $maxv$ là giá trị lớn nhất trong mảng.

Gọi $f[x]$ là số lần xuất hiện của giá trị $x$ trong mảng $A$. Nhiệm vụ của các bạn là phải tìm ra tất cả các giá trị $f[0], f[1], f[2],\dots, f[maxv]$.

Lấy ví dụ: $A = \{1, 1, 5, 2, 0, 3\}$ thì $f[0] = 1, f[1] = 2, f[2] = 1, f[3] = 1, f[4] = 0$ và $f[5] = 1$.

***Yêu cầu:*** Sử dụng các kĩ thuật truyền mảng vào hàm và trả về mảng cho hàm bằng con trỏ, hãy tạo ra mảng $f$ thỏa mãn $f[x] \ (0 \le x \le maxv)$ là số lần xuất hiện của giá trị $x$ trong mảng $A?$

## Input

- Dòng đầu tiên chứa số nguyên dương $t$ - số lượng test cases.
- Trên $t$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một test case theo cấu trúc:
    - Dòng đầu tiên chứa số nguyên dương $n$ - số lượng phần tử của mảng.
    - Dòng thứ hai chứa $n$ số nguyên dương $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le t \le 50$.
- $1 \le n \le 100$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- Với mỗi test case, in ra mảng $f$ trên một dòng, các phần tử phân tách nhau bởi dấu cách.

## Sample Input 1

```
1
6
1 1 7 2 0 3
```

## Sample Output 1

```
1 2 1 1 0 0 0 1
```


