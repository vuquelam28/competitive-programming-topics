# Trung Tâm Vận Chuyển

Có $N$ hành lí đánh số từ $1$ tới $N$ và $M$ chiếc hộp đánh số từ $1$ tới $M$.

Hành lí thứ $i$ có độ lớn $W_i$ và giá trị $V_i$.

Chiếc hộp thứ $i$ được chứa nhiều nhất $1$ hành lí với độ lớn $\le X_i$.

***Yêu cầu:*** Xử lí $Q$ truy vấn. Mỗi truy vấn gồm $2$ số $L$ và $R$. Hãy cho biết nếu bỏ đi các hộp $L,L+1,\dots R$, thì tổng giá trị lớn nhất của các hành lí bỏ vào được những hộp còn lại là bao nhiêu?

## Input

- Dòng đầu tiên chứa $3$ số $N,M,Q$.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa $2$ số $W_i$ và $V_i$.
- Dòng tiếp theo chứa $M$ số $X_1,X_2,\dots,X_M$.
- $Q$ dòng tiếp theo, mỗi dòng gồm $2$ số $L,R$.

## Constraints

- $1 \le N, M, Q \le 50$.
- $1 \le W_i,V_i,X_i \le 10^6$.
- $1 \le L\le R \le M$.

## Output

- In ra $Q$ dòng tương ứng với đáp án của $Q$ truy vấn.

## Sample Input 1

```
3 4 3
1 9
5 3
7 8
1 8 6 9
4 4
1 4
1 3
```

## Sample Output 1

```
20
0
9
```
