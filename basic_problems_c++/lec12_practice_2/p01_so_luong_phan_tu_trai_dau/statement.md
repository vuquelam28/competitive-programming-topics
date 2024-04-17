# Số Lượng Phần Tử Trái Dấu

Cho mảng một chiều các số nguyên $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. 

***Yêu cầu:*** Viết chương trình đếm số lượng phần tử trái dấu với phần tử đằng sau nó trong mảng $A?$

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $N$ phần tử của mảng $A,$ mỗi phần tử cách nhau một khoảng trắng.

## Constraints

- $0 < n < 1000$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- Dòng duy nhất in ra số nguyên $K$ là số lượng phần tử trái dấu với phần tử đằng sau nó trong mảng $A$. Riêng phần tử $a_1$ thì ta coi như không tính vào kết quả, do nó là phần tử mở đầu dãy số.

# Sample input 1

```
5
-5 8 1 -4 9
```

## Sample output 1

```
3
```

## Explanation 1

Các vị trí tìm được là: $2, 4, 5$.
