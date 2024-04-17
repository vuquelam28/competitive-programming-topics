# Phép Tính

Cho trước hai số nguyên $a, b$ và một phép toán bất kỳ trong tập các phép toán $\text\{$`+, -, *, /, %`$\}$.

***Yêu cầu:*** Hãy tính giá trị biểu thức khi áp dụng phép toán đó với hai số $a$ và $b?$

## Input

- Dòng đầu tiên chứa hai số nguyên $a$ và $b$ phân tách nhau bởi dấu cách.
- Dòng thứ hai chứa kí tự $x$ là một trong các phép toán nói trên.

## Constraints

- $1 \le a, b \le 1000$.

## Output

- Đưa ra giá trị biểu thức sau khi áp dụng phép toán đó với $a$ và $b$. Lưu ý phép toán `/` chỉ cần in ra thương nguyên của phép chia.

## Sample Input 1

```
5 6
-
```

## Sample Output 1

```
-1
```

## Explanation 1

$5 - 6 = -1$.

## Sample Input 2

```
5 3
/
```

## Sample Output 2

```
1
```

## Explanation 2

$5/3=1,$ dư $2$. Ở đây chỉ cần in ra thương nguyên của phép chia nên ta in ra $1$.

