# Kiểm Tra Ngày Tháng Hợp Lệ

Cho ba số nguyên $a, b, c$. Ba số nguyên này tạo thành một bộ ba ngày - tháng - năm hợp lệ nếu như:

- $1 \le a \le 31$.
- $1 \le b \le 12$.
- $1 \le c \le 3000$.
- Phải tồn tại ngày $a$ trong tháng $b$. Ví dụ, không thể tồn tại ngày $31$ trong tháng $4$.

***Yêu cầu:*** Hãy xác định ba số $a, b, c$ có phải một bộ ba ngày - tháng - năm hợp lệ hay không?

## Input

- Một dòng duy nhất chứa ba số nguyên dương $a, b, c$.

## Constraints

- $1 \le a, b, c \le 5000$.

## Output

- In ra `Yes` nếu như bộ ba đã nhập vào là một bộ ba ngày - tháng - năm hợp lệ, ngược lại in ra `No`.


## Sample input 1

```
12 5 2001
```

## Sample output 1

```
Yes
```


## Sample input 2

```
31 4 2000
```

## Sample output 2

```
No
```

