# Tạo Mảng

Cho mảng $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$.

***Yêu cầu:*** Sử dụng các kĩ thuật truyền mảng vào hàm và trả về mảng cho hàm bằng con trỏ, hãy tạo ra mảng $B$ thỏa mãn: $b_i$ bằng giá trị nhỏ hơn giữa $a_{i - 1}$ và $a_{i + 1}?$ Coi rằng $b_1 = a_2$ và $b_n = a_{n - 1}$.

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

- Với mỗi test case, in ra mảng $B$ trên một dòng, các phần tử phân tách nhau bởi dấu cách.

## Sample Input 1

```
1
5 
-3 5 4 6 2
```

## Sample Output 1

```
5 -3 5 2 6
```

