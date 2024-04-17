# Pha Hóa Chất

Trước mặt Harry Potter có $N$ lọ hóa chất xếp thành một hàng. Mỗi lọ hóa chất có một màu trong số $100$ màu đánh số từ $0$ đến $99$.

Harry muốn pha $N$ lọ hóa chất trên thành một lọ hóa chất duy nhất bằng cách trộn hai lọ đứng cạnh nhau trong dãy các lọ thành một lọ mới, sau đó đặt lọ mới này vào vị trí mà hai lọ trước kia để lại. Số lọ hóa chất lúc này giảm đi một.

Biết rằng, khi trộn hai lọ hóa chất có màu $a$ và $b$ sẽ được một lọ hóa chất mới có màu $(a + b) \text{ mod } 100$. Đồng thời, lượng khói bay ra là $a \times b$.

***Yêu cầu:** Hãy giúp Harry tìm cách trộn các lọ hóa chất làm một sao cho lượng khói bay ra là ít nhất?

## Input

- Dòng đầu tiên chứa số nguyên dương $T$ - số lượng testcases
- $T$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một testcase có cấu trúc:
    - Dòng đầu tiên chứa số nguyên dương $N$ - số lọ hóa chất cần trộn.
    - Dòng thứ hai ghi $N$ số nguyên $a_1, a_2,..., a_N$ là mã số màu của các lọ hóa chất, hai số liên tiếp phân tách nhau bởi một dấu cách.

## Constraints

- $1 \le T \le 100$.
- $1 \le N \le 100$.
- $0 \le a_i \le 99; \forall i: 1 \le i \le 10^9$.

## Output

- Gồm $T$ dòng, mỗi dòng ghi kết quả của test tương ứng theo thứ tự.

## Sample Input

```
2
2
18 19
3
40 60 20
```

## Sample Output

```
342
2400
```