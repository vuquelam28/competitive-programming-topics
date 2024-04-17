# Tưới Hoa

Ucoder mua về một cây hoa rất đẹp, và dự định chăm sóc nó trong $n$ ngày. Tuy nhiên, Ucoder lại là một người khá hậu đậu, nên cậu ta thường xuyên quên mất việc tưới hoa. Cây hoa của Ucoder có đặc điểm rất kì lạ:

- Nếu hai ngày liên tiếp không được tưới nước, nó sẽ chết.
- Nếu được tưới nước ở ngày thứ $i,$ nó sẽ cao thêm $1$ cm.
- Nếu được tưới nước ở cả ngày thứ $i$ và ngày thứ $i - 1,$ thì nó sẽ cao thêm $5$ cm thay vì $1$ cm.
- Nếu không được tưới nước ở ngày thứ $i,$ nó sẽ không cao thêm.

Ở ngày đầu tiên, cây hoa đang có chiều cao $1$ cm. 

***Yêu cầu:*** Hãy xác định chiều cao của cây hoa sau $n$ ngày chăm sóc của Ucoder?

## Input

- Dòng đầu tiên chứa số nguyên dương $T$ - số lượng test cases.
- $T$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một test case theo cấu trúc:

    - Dòng đầu tiên của test case chứa số nguyên dương $n$.
    - Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$. Nếu $a_i = 0$ thì ngày đó Ucoder quên không tưới cây, còn ngược lại thì ngày đó Ucoder có tưới cây.

## Constraints

- $1 \le T \le 100$.
- $1 \le n \le 100$.

## Output

- Với mỗi test case, in ra số nguyên duy nhất là chiều cao của cái cây sau $n$ ngày, hoặc in ra $-1$ nếu như cái cây bị chết.

## Sample Input 1

```
4
3
1 0 1
3
0 1 1
4
1 0 0 1
1
0
```

## Sample Output 1

```
3
7
-1
1
```

