# Thao Tác Vòng Lặp 1

Viết chương trình nhập vào từ bàn phím một số nguyên dương $N$. 

***Yêu cầu:*** Hãy thực hiện các công việc sau đây:
- Kiểm tra xem $N$ có phải là số nguyên tố hay không?
- Đếm số lượng số nguyên dương chia hết cho $5$ nhỏ hơn hoặc bằng $N?$
- Tính tổng các số lẻ và tích các số chẵn trong các số nguyên dương nhỏ hơn hoặc bằng $N?$

## Input

- Một dòng duy nhất chứa số nguyên dương $N$.

## Constraints

- $1 \le N \le 30$.

## Output

- Dòng đầu tiên đưa ra thông báo `YES` hoặc `NO` tương ứng với $N$ là số nguyên tố hay không.
- Dòng thứ hai chứa một số nguyên $D$ là số lượng số nguyên dương không vượt quá $N$ và chia hết cho $5$.
- Dòng cuối cùng chứa hai số nguyên $A$ và $B$ lần lượt là tổng các số nguyên dương lẻ và tích các số nguyên dương chẵn không vượt quá $N$.

## Sample Input 1

```
9
```

## Sample Output 1

```
NO
1
25 384
```

## Explanation 1

$9$ không phải là số nguyên tố.

Có $1$ số không vượt quá $9$ và chia hết cho $5$ là $5$.

Tổng các số lẻ là: $1 + 3 + 5 + 7 + 9 = 25$. Tích các số chẵn là: $2 \times 4 \times 6 \times 8 = 284$.

