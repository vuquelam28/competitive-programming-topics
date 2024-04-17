# Cặp Bạn Bè

Cặp số nguyên không âm $(a,b)$ được gọi là cặp số bạn bè cùng nhóm nếu chúng thỏa mãn các tính chất sau:

- $UCLN(a,b)=1$.
- Số đảo của $a$ là số $b$ và ngược lại.
- Hai số $a$ và $b$ là các số gồm đúng K chữ số trong tập $n$ chữ số cho trước của hệ thập phân, mỗi chữ số trong tập chỉ được sử dụng một lần.

***Yêu cầu:*** Hãy đếm số lượng cặp số bạn bè tạo thành từ tập $n$ chữ số đã cho?

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n, k$.
- Dòng thứ hai chứa $n$ số nguyên $d_1,d_2,\dots,d_N$ – các chữ số của tập hợp.

## Constraints

- $2 \le n \le 9$.
- $2 \le k \le n$.
- $0 \le d_i \le 9; \forall i: 1 \le i \le n$.

## Output

- Số nguyên duy nhất là số cặp bạn bè tìm được. Các cặp số là hoán vị của nhau chỉ tính là một cặp.

## Sample Input 1

```
4 2
4 6 5 3
```

## Sample Output 1

```
3
```

## Explanation 1

Các cặp số bạn bè tạo được là: $(43,34); (35,53); (56,65)$.
