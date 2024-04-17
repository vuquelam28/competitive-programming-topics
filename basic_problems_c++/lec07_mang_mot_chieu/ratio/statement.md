# Tỉ Lệ

Cho một mảng gồm $n$ số nguyên $a_1, a_2,\dots, a_n$.

***Yêu cầu:*** Hãy tính tỉ lệ số âm, tỉ lệ số dương và tỉ lệ số $0$ trong mảng?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2,\dots, a_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n \le 100$.
- $-100 \le a_i \le 100; \forall i: 1 \le i \le n$.

## Output

- Đưa ra trên ba dòng, mỗi dòng là một số thập phân thể hiện tỉ lệ số dương, tỉ lệ số âm và tỉ lệ số $0$ trong mảng. Các giá trị thập phân được làm tròn tới $6$ chữ số sau dấu chấm thập phân.

## Sample Input 1

```
7 
1 -2 -7 9 1 -8 -5
```

## Sample Output 1

```
0.428571 
0.571429 
0.000000
```

## Sample Input 2

```
5 
0 0 -1 1 1
```

## Sample Output 2

```
0.400000 
0.200000 
0.400000
```
