# Tèo và Chocolate

Tèo chuẩn bị tổ chức một bữa tiệc và anh ấy có nhiều thanh chocolate, trong đó có một số thanh chocolate cùng loại. Anh ấy muốn tặng chocolate cho bạn bè của mình một cách hoàn hảo, tức là mỗi người bạn của Tèo chỉ nhận được một thanh chocolate, và không có hai người bạn nào nhận được cùng một loại chocolate.

***Yêu cầu:*** Hãy cho biết Tèo có thể tặng chocolate cho tối đa bao nhiêu người bạn?

## Input

- Dòng đầu tiên là số nguyên $t$ chỉ số lượng truy vấn.
- Các truy vấn có dạng như sau:
    - Dòng đầu tiên là số nguyên $n$ chỉ số lượng thanh chocolate mà Tèo đang có.
    - Dòng thứ hai gồm $n$ số nguyên $a_1, a_2, ..., a_n$ với $a_i$ là loại của thanh chocolate thứ $i$.

## Constraints

- $1 \le t \le 10$.
- $1 \le n \le 10^4$.
- $0 \le a_i \le 10^9; \forall i: 1 \le i \le n$.

## Output

- Với mỗi truy vấn in ra trên một dòng một số nguyên duy nhất là số lượng quà tặng hoàn hảo lớn nhất có thể.

## Sample Input 1

```
1
3
1 2 2
```

## Sample Output 1

```
2
```