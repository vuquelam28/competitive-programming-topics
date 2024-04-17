# Di Chuyển Cây

Thành phố XYZ có một vườn bách thảo được mô tả dưới dạng bản đồ hình chữ nhật gồm $m$ dòng và $n$ cột. Trong vườn có $k$ loại cây khác nhau, đánh số từ $1$ tới $k \ (k≤100)$. Mỗi ô của bản đồ chứa duy nhất số nguyên dương $i \ (i≤k)$ nếu tại ô này có trồng một cây loại $i,$ hoặc số $0$ nếu ô này không có cây. Chính quyền thành phố muốn chỉnh trang khu vườn cho đẹp hơn bằng cách giữ lại những hàng cây có ít nhất $t$ cây liền nhau, thuộc cùng một loại cây, nằm trên cùng một dòng hoặc cùng một cột. Những cây không thuộc hàng cây nào đó sẽ được di chuyển đến vị trí khác phù hợp hơn. 

***Yêu cầu:*** Cho trước bản đồ vườn cây, hãy đếm số lượng cây cần được di chuyển?

## Input

- Dòng đầu chứa ba số nguyên dương $m,n,t$.
- Trên $m$ dòng tiếp theo, mỗi dòng chứa $n$ số tự nhiên mô tả bản đồ vườn bách thảo.

## Constraints

- $1≤m,n≤1000$.
- $1≤t≤100$.

## Output

- Đưa ra số nguyên duy nhất là số lượng cây cần được di chuyển.

## Sample Input 1

```
5 6 3
1 3 3 3 3 4
1 2 3 2 0 4
3 2 2 2 4 4
1 0 0 2 4 0
1 2 3 0 4 4
```

## Sample Output 1

```
10
```

## Explanation 1

Những số in màu biểu thị các cây cần di chuyển:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/EDLuogSQ.png)
</center>

Tổng số cây cần di chuyển là $10$.

