# Tích Giá Trị Đặc Biệt

Cho mảng $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Một giá trị $a_i$ được gọi là ***giá trị đặc biệt*** nếu như nó lớn hơn phần tử đứng trước nó trong mảng, tức là $a_i > a_{i - 1}$.

***Yêu cầu:*** Hãy viết chương trình đệ quy để tính tích các giá trị đặc biệt trong mảng $A?$ Phần tử $a_1$ sẽ không được tính vào kết quả do nó là phần tử đầu tiên của mảng.

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách. 

## Constraints

- $1 \le n \le 100$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- In ra tích tìm được.

## Sample Input 1

```
5
1 4 2 3 6
```

## Sample Output 1

```
72
```

## Explanation 1

Các phần tử thỏa mãn là $a_2, a_4$ và $a_5$.

