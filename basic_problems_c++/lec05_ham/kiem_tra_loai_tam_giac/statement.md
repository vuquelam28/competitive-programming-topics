# Kiểm Tra Loại Tam Giác

Cho trước ba số nguyên dương $a, b, c$.

***Yêu cầu:*** Hãy kiểm tra ba số này có tạo thành một bộ ba cạnh của tam giác hay không? Nếu có thì đó là tam giác vuông, đều, cân hay tam giác thường? (trường hợp tam giác vuông cân vẫn coi là tam giác vuông).

## Input

- Dòng đầu tiên chứa số nguyên dương $t$ - số lượng bộ ba cần kiểm tra.
- Trên $t$ dòng tiếp theo, mỗi dòng chứa ba số nguyên dương $a, b, c$.

## Constraints

- $1 \le t \le 100$.
- $1 \le a, b, c \le 100$.

## Output

- Nếu ba số không tạo thành ba cạnh của tam giác, in ra `Invalid`. Ngược lại in ra `Vuong`, `Can`, `Deu` hoặc `Thuong` tương ứng với loại tam giác là vuông, cân, đều hoặc thường. Đáp án của mỗi lần kiểm tra in trên một dòng.

## Sample Input 1

```
3 4 5
```

## Sample Output 1

```
Vuong
```

