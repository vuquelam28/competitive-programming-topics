# Biểu Thức Cộng Trừ 2

Cho một xâu kí tự $S$ chỉ gồm toàn các kí tự chữ số từ `0` tới `9` và một số nguyên $M$.

***Yêu cầu:*** Hãy chèn vào xâu $S$ các dấu `+` và `-` (có thể không cần chèn vào mọi vị trí) sao cho thu được một biểu thức có tổng đúng bằng $M?$ 

## Input

- Dòng đầu tiên chứa xâu kí tự $S$ chỉ gồm toàn các kí tự chữ số.
- Dòng thứ hai chứa số nguyên $M$.

## Constraints

- $|S| \le 10;$ với $|S|$ là độ dài xâu $S$.

## Output

- Đưa ra một số nguyên là tổng số cách chèn thỏa mãn. Nếu như không tồn tại cách chèn nào thì in ra $-1$. Lưu ý, những cách chèn có chứa dấu `+` ở đầu biểu thức không tính là một cách, ví dụ: `+4-5` và `4-5` thì chỉ tính một cách `4-5` thôi.

## Sample Input 1

```
123456789
8
```

## Sample Output 1

```
18
```

## Sample Input 2

```
917
```

## Sample Output 2

```
1
```
