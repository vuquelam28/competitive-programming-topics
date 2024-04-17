# Tổng Power

Cho hai số nguyên $x$ và $n$. 

***Yêu cầu:*** Hãy cho biết có bao nhiêu cách biểu diễn $x$ bằng tổng lũy thừa bậc $n$ của các số tự nhiên khác nhau và khác $0$?

Ví dụ: $x = 13$, $n = 2$. Chỉ có một cách biểu diễn là $2^2 + 3^2$.

## Input

- Dòng đầu tiên chứa số nguyên $n$.
- Dòng thứ hai chứa số nguyên $k$.

## Constraints

- $1 \leq x \leq 1000$.
- $1 \le n \leq 10$.

## Output

- Một số nguyên duy nhất thỏa mãn bài toán.

## Sample Input 1

```
100
2
```

## Sample Output 1

```
3
```

## Explaination 1

Có ba cách biểu diễn: $100 = 10^2 = 6^2 + 8^2 = 1^2 + 3^2 + 4^2 + 5^2 + 7^2$.

## Sample input 2

```
100
3
```

## Sample output 2

```
1
```

## Explaination 2

Chỉ có một cách duy nhất: $100 = 1^3 + 2^3 + 3^3 + 4^3$.