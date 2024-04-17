# Biểu Thức Cộng - Trừ

Cho một số nguyên không âm $M$ và một biểu thức $S$ chứa toàn các kí tự số từ `0` tới `9`. 

***Yêu cầu:*** Hãy tìm một cách chèn các dấu `+` và `-` vào trước mỗi kí tự của $S$ sao cho kết quả biểu thức thu được chính bằng số nguyên dương $M$ cho trước.

## Input

- Dòng đầu là số nguyên không âm $M$.
- Dòng tiếp theo là xâu kí tự $S$.

## Constraints

- $0≤M≤50$.
- $|S|≤10,$ với $|S|$ là độ dài của chuỗi $S$.

## Output

- In ra một cách chèn thỏa mãn. Nếu không có cách nào, in ra số $-1$ (không cần in ra các dấu cách phân tách toán hạng và toán tử).

## Sample Input

```
5
123456789
```

## Sample Output

```
-1-2-3+4-5+6+7+8-9
```