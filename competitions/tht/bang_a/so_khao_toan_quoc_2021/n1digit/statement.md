# Số Một Số

***Số một số*** là số tự nhiên mà các chữ số của số đó giống nhau. Ví dụ: $1, 8, 555, 99999,...$

***Yêu cầu:*** Cho một số tự nhiên $N$. Hãy đếm số lượng ***số một số*** bé hơn hoặc bằng $N?$

## Input

- Một dòng duy nhất chứa số tự nhiên $N$.

## Constraints

- $N \le 10^9$.

## Output

- Số nguyên duy nhất là số lượng ***số một số*** bé hơn hoặc bằng $N$.

## Sample Input 1

```
10
```

## Sample Output 1

```
15
```

## Sample Input 2

```
111
```

## Sample Output 2

```
19
```

## Explanation

- Ở ví dụ $1,$ có $10$ số một số bé hơn hoặc bằng $15$ là: $1, 2, 3, 4, 5, 6, 7, 8, 9, 11$.
- Ở ví dụ $2,$ có $19$ số một số bé hơn hoặc bằng $111$ là: 
    - Có $9$ số từ $1$ tới $9$.
    - Có $9$ số $11, 22,..., 99$.
    - Có $1$ số $111$.