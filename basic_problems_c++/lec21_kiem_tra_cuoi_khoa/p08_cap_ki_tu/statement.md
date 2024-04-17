# Cặp Kí Tự

Cho một xâu gồm $n$ cặp kí tự, mỗi cặp có hai kí tự `A` và `B`. Các cặp kí tự này đặt trong xâu theo quy tắc:

- Các cặp lồng vào nhau hoặc rời nhau, và không có trường hợp nào hai cặp kí tự giao nhau. 
- Trong mỗi cặp, kí tự `A` luôn luôn đặt bên trái kí tự `B`.

Lấy ví dụ, xâu dưới đây có $6$ cặp kí tự `AB`: 

<center>

$S=$ `AAABAABABBBB`
</center>

Để ghi nhận thông tin của xâu, người ta ghi lại số lượng kí tự nằm trong mỗi cặp kí tự `AB` theo thứ tự từ trái qua phải. Với ví dụ xâu $S=$ `AAABAABABBBB` như trên, thì bản ghi chép sẽ như sau:

$$10 \ 8 \ 0 \ 4 \ 0 \ 0$$

Theo đó, lần lượt từ trái sang phải, có $10$ kí tự nằm trong cặp thứ nhất, có $8$ kí tự nằm trong cặp thứ $2,$ không có kí tự nào nằm trong cặp kí tự thứ $3,$ có $4$ kí tự nằm trong cặp thứ $4,$ không có kí tự nào nằm trong cặp thứ $5$ và cặp thứ $6$.

***Yêu cầu:*** Từ dãy số ghi chép thông tin của xâu, hãy khôi phục lại xâu ký tự ban đầu?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số lượng số trong bản ghi chép.
- Dòng thứ hai chứa $n$ số nguyên không âm $a_1, a_2, \dots, a_n$ phân tách nhau bởi dấu cách - thể hiện bản ghi chép.

## Constraints

- $1 \le n \le 5000$.

## Output

- In ra xâu ban đầu.

## Sample Input 1

```
6
10 8 0 4 0 0
```

## Sample Output 1

```
AAABAABABBBB
```

