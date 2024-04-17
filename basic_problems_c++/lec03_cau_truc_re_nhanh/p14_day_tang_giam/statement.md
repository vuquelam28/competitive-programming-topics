# Dãy Tăng Giảm

Nhập vào ba số nguyên $a, b, c$. Ba số này tạo thành dãy tăng nếu như $a \le b < c$ hoặc $a < b \le c;$ còn nếu $a \ge b > c$  hoặc $a > b \ge c$ thì nó tạo thành một dãy giảm. Trường hợp $a = b = c$ thì chúng tạo thành một dãy bằng nhau.

***Yêu cầu:*** Xác định ba số $a, b, c$ tạo thành trường hợp nào trong các trường hợp kể trên?

## Input

- Một dòng duy nhất chứa ba số nguyên $a, b, c$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le a, b, c \le 1000$.

## Output

- In ra `Increasing Sequence` nếu ba số đã cho là dãy tăng, `Decreasing Sequence` nếu ba số đã cho là dãy giảm, `Equal Sequence` nếu cả ba số bằng nhau và `None` nếu không thuộc cả ba trường hợp trên.

## Sample Input 1

```
3 3 3
```

## Sample Output 1

```
Equal Sequence
```

## Sample Input 2

```
5 5 4
```

## Sample Output 2

```
Decreasing Sequence
```