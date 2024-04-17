# Dance

Alice đang tập một điệu nhảy, điệu nhảy này được biểu diễn bởi xâu $S$ bao gồm cái kí tự $U,D,L,R$. Vị trí các kí tự được đánh số từ $1$ thể hiện từng bước nhảy của Alice.

Điệu nhảy được gọi là *dễ* nếu như:

- Các vị trí $i$ lẻ thì $S_i$ thuộc tập kí tự $\{$`R`, `U`, `D`$\}$.
- Các vị trí $i$ chẵn thì $S_i$ thuộc $\{$`L`, `U`, `D`$\}$.

***Yêu cầu:*** Kiểm tra xem điệu nhảy của Alice có phải là *dễ* hay không?

## Input

- Một dòng duy nhất chứa xâu $S$.

## Constraints

- Độ dài của $S$ không vượt quá $100$.
- Các kí tự của $S$ là `R`, `L`, `U` hoặc `D`.

## Output

- In ra `Yes` hoặc `No` tương ứng với việc điệu nhảy của Alice là dễ hoặc không.

## Sample Input 1

```
RUDLUDR
```

## Sample Output 2

```
Yes
```

