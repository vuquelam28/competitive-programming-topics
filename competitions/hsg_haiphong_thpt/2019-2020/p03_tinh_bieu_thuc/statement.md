# Tính Biểu Thức

Cho hai số nguyên dương $a$ và $b \ (b \le a)$. 

***Yêu cầu:*** Em hãy viết chương trình thực hiện các phép tính $a+b,a-b$ và $a$ chia $b$ lấy phần nguyên. Kết quả của các phép tính được đưa ra dưới dạng biểu diễn nhị phân.

## Input

- Dòng đầu tiên chứa số nguyên dương $a$.
- Dòng thứ hai là tên của một trong các phép toán `cong`, `tru`, `chia`, với ý nghĩa: `cong` - phép cộng, `tru` - phép trừ, `chia` - phép chia lấy phần nguyên.
- Dòng thứ ba chứa số nguyên dương $b$.

## Constraints

- $1 \le b \le a \le 10^{250}$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $a, b \le 10^9$ và kết quả các phép tính nhỏ hơn $10^9$.
- Subtask $2$ ($30\%$ số điểm): Các phép cộng, trừ cho kết quả lớn hơn $10^9$.
- Subtask $3$ ($15\%$ số điểm): Phép chia có $b \le 10^6$.
- Subtask $4$ ($15\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- In ra dãy số nhị phân biểu diễn kết quả của phép tính.

## Sample Input 1

```
15
cong
10
```

## Sample Output 1

```
11001
```

## Explanation 1

Ta có $15+10=25$.
Biểu diễn nhị phân của $25$ là $11001$.

## Sample Input 2

```
17
chia
4
```

## Sample Output 2

```
100
```

## Explanation 2

Ta có $17$ chia nguyên cho $4$ bằng $4$.
Biểu diễn nhị phân của $4$ là $100$.