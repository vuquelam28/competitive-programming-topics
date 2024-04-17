# Số nguồn gốc

Để tìm được số nguồn gốc của của số nguyên $n$, người ta sẽ biến đổi $n$ bằng cách gán $n$ bằng tổng các chữ số của nó cho đến khi $n$ chỉ còn một chữ số thì đó chính là số nguồn gốc của $n$.

Ví dụ với $n = 6789$ ta sẽ biến đổi như sau để thu được số nguồn gốc của $n$:

$$n = 6789 \to n = 6 + 7 + 8 + 9 = 30 \to n = 3 + 0 = 3$$

Vậy số nguồn gốc của $6789$ là $3$.

***Yêu cầu:*** Cho số nguyên $n$, hãy viết chương trình đệ quy để tính số nguồn gốc của $n$.

## Input

- Dòng duy nhất chứa số nguyên $n$.

## Constraints

- $1 \le n \le 10^{100000}$.

## Output

- Số nguồn gốc của $n$.

## Sample input 1

```
1
```

## Sample output 1

```
1
```

## Sample input 2

```
6789
```

## Sample output 2

```
3
```

