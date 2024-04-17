# Dominoes

Bé Bi có một hộp chứa các quân cờ dominoes gồm $n$ quân, mỗi quân domino được chia làm hai nửa trên và dưới, mỗi nửa có ghi một số chấm từ $1$ tới $6$.

<center>

![](https://cdn.ucode.vn/uploads/2247/images/fzsAZufJ.png)
</center>

Bi quyết định xếp các quân domino này thành một hàng liền kề nhau như hình vẽ. Định nghĩa ***độ chênh lệch của cách sắp xếp*** là chênh lệch giữa tổng số chấm ở phần trên và tổng số chấm ở phần dưới của $n$ quân dominoes. Chẳng hạn, trong cách sắp xếp ở hình vẽ trên, thì độ chênh lệch đó là: $|(6 + 1 + 1 + 1) - (1 + 5 + 3 + 2)| = 2$. 

Bé Bi có thể xoay một số quân Domino $180$ độ để phần trên thành phần dưới, phần dưới thành phần trên. Ví dụ, nếu như quay quân domino cuối cùng trong hình vẽ trên, thì độ chênh lệch của cách sắp xếp sẽ trở thành $0$.

***Yêu cầu:*** Hãy tính toán xem bé Bi cần xoay tối thiểu bao nhiêu quân dominoes để đạt được cách sắp xếp có độ chênh lệch nhỏ nhất?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$ - số quân dominoes.
- $n$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên dương $a_i, b_i$ lần lượt là số chấm ở nửa trên và nửa dưới của quân domino thứ $i$.

## Constraints

- $1 \le n \le 20$.
- $1 \le a_i, b_i \le 6; \forall i: 1 \le i \le n$.

## Output

- Đưa ra hai số nguyên trên cùng một dòng: Độ chênh lệch nhỏ nhất tìm được và số quân dominoes tối thiểu cần xoay để đạt được độ chênh lệch đó.

## Sample Input 1

```
4
6 1
1 5
1 3
1 2
```

## Sample Output 1

```
0 1
```

