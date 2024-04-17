# Kiểm Tra Tam Giác

Viết chương trình nhập vào $3$ số nguyên dương $A$, $B$ và $C$. Hãy kiểm tra $3$ số nguyên đó có tạo thành tam giác hay không? Nếu có, cho biết đó là tam giác gì?

## Input

- Dòng đầu tiên chứa số nguyên dương $A$.
- Dòng thứ hai chứa số nguyên dương $B$.
- Dòng thứ ba chứa số nguyên dương $C$.

## Constraints

- $0 < A, B, C \leq 100$.

## Output

- Dòng đầu tiên in ra `YES` nếu $A$, $B$, $C$ tạo thành tam giác hoặc in ra `NO` nếu $A$, $B$, $C$ không tạo thành tam giác.
- Dòng thứ hai in ra loại tam giác mà $A$, $B$, $C$ tạo thành (nếu có):
    - In ra `Tam gia deu` nếu là tam giác đều.
    - In ra `Tam gia can` nếu là tam giác cân.
    - In ra `Tam giac vuong` nếu là tam giác vuông.
    - In ra `Tam giac thuong` nếu là tam giác thường.

# Sample input 1

```
4
6
5
```

## Sample output 1

```
YES
Tam giac vuong
```

# Sample input 2

```
1
3
6
```

## Sample output 2

```
NO
```