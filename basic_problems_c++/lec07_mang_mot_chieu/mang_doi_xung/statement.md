# Kiểm Tra Mảng Đối Xứng

Cho mảng một chiều các số nguyên $A$ gồm $n$ phần tử $a_1, a_2, \dots, a_n$. Mảng $A$ được gọi là đối xứng nếu như khi ta viết mảng này theo thứ tự ngược lại, ta vẫn thu được một mảng mới giống hệt mảng ban đầu.

***Yêu cầu:*** Viết chương trình kiểm tra mảng $A$ có đối xứng hay không?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Dòng thứ hai chứa $N$ phần tử của mảng $A$, mỗi phần tử cách nhau một khoảng trắng.

## Constraints

- $0 < N < 1000$.
- $|a_i| \le 100; \forall i: 1 \le i \le n$.

## Output

- Dòng duy nhất in ra `YES` nếu mảng $A$ có đối xứng hoặc `NO` mảng $A$ không đối xứng.

## Sample input 1

```
5
4 7 0 7 4
```

## Sample output 1

```
YES
```

## Sample input 2

```
7
5 8 1 3 5 8 1
```

## Sample output 2

```
NO
```