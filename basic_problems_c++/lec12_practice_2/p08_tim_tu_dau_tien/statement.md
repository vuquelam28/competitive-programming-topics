# Tìm Từ Đầu Tiên

Cho xâu kí tự $S$ chỉ gồm các chữ cái latin in thường và một từ khóa $x$ bất kì. Các kí tự trong xâu $S$ được đánh số từ $0$.

***Yêu cầu:*** Hãy tìm ra vị trí xuất hiện đầu tiên của từ khóa $x$ trong xâu $S?$ Vị trí xuất hiện đầu tiên được tính là vị trí của kí tự đầu tiên của từ đó trong xâu $S$.

## Input

- Dòng đầu tiên chứa xâu kí tự $S$.
- Dòng thứ hai chứa từ khóa $x$.

## Constraints

- $|S| \le 1000;$ với $|S|$ là độ dài xâu $S$.
- $|x| \le |S|;$ với $|x|$ là độ dài từ khóa $x$.

## Output

- In ra vị trí xuất hiện đầu tiên của từ khóa $x$ trong xâu $S$. Nếu không tồn tại từ $x$ trong xâu $S$ thì in ra $-1$.

## Sample Input 1

```
naymaynay
nay
```

## Sample Output 1

```
0
```

## Explanation 1

Có hai từ `nay` xuất hiện trong xâu $S$ ở vị trí $0$ và vị trí $7,$ vậy kết quả là $0$.

