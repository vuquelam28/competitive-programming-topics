# Số Nguồn

Cho số nguyên dương $N$. Gọi số nguyên $M$ là tổng của $N$ cộng với các chữ số của số $N$. Như vậy, $N$ được gọi là ***số nguồn*** của $M$. Lấy ví dụ, với $N = 245,$ thì $M = 245 + 2 + 4 + 5 = 256$. Ta nói nguồn của $256$ là $245$.

Có những số có nhiều nguồn và cũng có những số không có nguồn. Chẳng hạn, số $216$ có hai nguồn là $198$ và $207$.

***Yêu cầu:*** Cho số nguyên dương $M,$ hãy tìm nguồn nhỏ nhất của nó?

## Input

- Một dòng duy nhất chứa số nguyên dương $M$.

## Constraints

- $1 \le M \le 10^{100}$.

## Output

- Số nguyên duy nhất là nguồn nhỏ nhất tìm được. Trong trường hợp số $M$ đã cho không có nguồn nào, đưa ra $0$.

## Sample Input 1

```
216
```

## Sample Output 1

```
198
```



