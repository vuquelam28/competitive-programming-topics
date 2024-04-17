# Xâu Đối Xứng

Một xâu được gọi là xâu đối xứng nếu nó có tính chất sau: Nếu đọc nó từ trái qua phải cũng thu được kết quả giống như đọc từ phải qua trái.   

***Yêu cầu:*** Cho $n$ xâu, mỗi xâu gồm các ký tự chữ cái tiếng Anh in thường. Viết chương trình kiểm tra các xâu đã cho có phải là xâu đối xứng hay không?

## Input

- Dòng đầu tiên chứa số nguyên dương $n$.
- Trên $n$ dòng tiếp theo, mỗi dòng chứa một xâu ký tự.

## Constraints

- $1 \le n \le 10^5$.
- Độ dài các xâu kí tự không vượt quá $255$.

# Output

- In ra $n$ dòng, mỗi dòng ghi `CO` nếu xâu tương ứng là xâu đối xứng, ghi `KHONG` nếu xâu tương ứng không phải xâu đối xứng.

## Sample Input 1

```
3
abbb
bbabb
bca
```

## Sample Output 1

```
KHONG
CO
KHONG
```