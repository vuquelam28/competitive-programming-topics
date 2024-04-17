# Xóa Dòng (HSG Tin học 9 Hà Nội 2020 - 2021)

Cho một bảng hình chữ nhật có $m$ dòng và $n$ cột gồm các chữ cái latin in thường từ `a` đến `z`. Bảng này có một tính chất: Ở mỗi cột, khi ghép các kí tự từ trên xuống dưới sẽ thu được một xâu đại diện, và trong bảng này các xâu đại diện là đôi một khác nhau.

***Yêu cầu:*** Hãy tìm cách xóa nhiều nhất các dòng (lần lượt từ dòng đầu tiên xuống dưới) của bảng để thu được một bảng mới vẫn đảm bảo tính chất trên (chỉ được xóa tối đa $n – 1$ dòng).

## Input

- Dòng đầu chứa hai số nguyên dương $m$ và $n$ – kích thước của bảng.
- $m$ dòng tiếp theo, mỗi dòng chứa một xâu kí tự có độ dài $n$.

## Constraints

- $1 \le m, n \le 5000$.

## Output

- Một số nguyên duy nhất là số hàng tối đa có thể xóa được.

## Sample Input 1

```
5 4
qwpt
abcf
bvoa
abka
bbhb
```

## Sample Output 1

```
2
```

## Explanation 1

Chỉ xóa tối đa hai dòng đầu tiên. Nếu xóa cả dòng thứ $3$ thì sẽ có hai xâu ở cột đầu tiên và cột cuối cùng giống nhau (không thỏa mãn).

