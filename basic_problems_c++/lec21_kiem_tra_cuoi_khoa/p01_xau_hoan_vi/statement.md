# Xâu Hoán Vị

Cho trước hai xâu $s$ và $t$ chỉ bao gồm các chữ cái latin in thường. Xâu $s$ được gọi là một hoán vị của xâu $t$ nếu như có thể thu được xâu $s$ từ xâu $t$ bằng cách đổi chỗ một số cặp kí tự trong xâu $t,$ và ngược lại.

***Yêu cầu:*** Hãy kiểm tra xem hai xâu $s$ và $t$ có phải là hoán vị của nhau hay không?

## Input

- Dòng đầu tiên chứa số nguyên dương $T$ - số lượng testcases.
- $T$ dòng tiếp theo, mỗi dòng chứa hai xâu kí tự $s$ và $t$ phân tách nhau bởi một dấu cách.

## Constraints

- $1 \le T \le 10$.
- $1 \le |s|, |t| \le 10^4;$ với $|s|, |t|$ lần lượt là độ dài của hai xâu $s$ và $t$.

## Output

- Với mỗi test case, in ra `yes` nếu hai xâu là hoán vị của nhau, ngược lại in ra `no`. Mỗi kết quả in ra trên một dòng phân biệt.

## Sample Input 1

```
2
abc bac
aab bba
```

## Sample Output 1

```
yes
no
```


