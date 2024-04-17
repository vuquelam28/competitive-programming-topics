# Khuyến Mại

Mai là khách hàng thân thiết của Điện Máy Xanh, cô gái thường xuyên mua rất nhiều hàng hóa của siêu thị điện máy này. Chính vì thế, Mai thường xuyên nhận được những chương trình khuyến mại đặc biệt của Điện Máy Xanh vào những dịp đặc biệt. Lần này, nhân dịp Quốc khách 02/09, Mai được hưởng chế độ khuyến mại như sau: Siêu thị có $n$ chương trình khuyến mại khác nhau, mỗi chương trình được phép sử dụng không giới hạn. Để sử dụng chương trình thứ $i,$ Mai cần đưa ra $k_i$ loại coupon khác nhau thuộc các loại $t_{i_1}, t_{i_2}, \dots, t_{i_k})$ mà Mai đã tích lũy trong quá trình mua hàng trước đó. Với mỗi lần sử dụng chương trình thứ $i,$ Mai sẽ tiết kiệm được số tiền $x_i$.	

***Yêu cầu:*** Mai hiện đang có $m$ loại coupon thuộc các loại $\{1, 2, 3, \dots, m\},$ loại thứ $i$ có $a_i$ cái. Hãy xác định Mai có thể tiết kiệm được tối đa bao nhiêu tiền khi sử dụng các chương trình khuyến mại của Điện Máy Xanh? Biết rằng, không có bất kì hai chương trình khuyến mại nào sử dụng chung loại coupon với nhau. 

## Input

- Dòng đầu là số nguyên dương $P$ – số lượng test cases.
- Trên $P$ nhóm dòng tiếp theo, mỗi nhóm dòng chứa một test case, cấu trúc như sau:
    - Dòng đầu tiên chứa hai số nguyên dương $n$ và $m$ – số chương trình khuyến mại và số lượng coupon Mai đang có.
    - $n$ dòng tiếp theo, dòng thứ $i$ ghi một số nguyên dương $k_i$ ở đầu – số loại coupon cần dùng cho chương trình thứ $i$. Theo sau đó là $k_i$ số nguyên dương thể hiện số thứ tự của loại coupon cần sử dụng cho chương trình này. Số nguyên dương cuối cùng của dòng đó là $x_i$ – số tiền tiết kiệm được nếu sử dụng chương trình.
    - Dòng cuối cùng chứa $m$ số nguyên dương, số thứ $i$ là số lượng coupon loại thứ $i$ mà Mai đang có. Biết rằng Mai không có nhiều hơn $100$ coupon mỗi loại.

## Constraints

- $1≤P≤1000$.
- $1≤n, m≤30$.
- $1≤k_i≤m;∀i:1≤i≤n$.
- $0≤x_i≤10^6;∀i:1≤i≤n$.

## Output

- Trên $P$ dòng, mỗi dòng chứa số nguyên dương duy nhất là tổng số tiền tiết kiệm được của Mai khi tham gia các chương trình khuyến mại ở test case tương ứng.

## Sample Input 1

```
1
3 6
2 1 2 100
3 3 4 5 200
1 6 300
1 2 3 4 5 6
```

## Sample Output 1

```
2500
```

## Explanation 1

Mai tham gia chương trình đầu tiên $1$ lần, chương trình thứ hai $3$ lần và chương trình thứ ba $6$ lần. Tổng số tiền tiết kiệm được là $100×1+200×3+300×6=2500$.
