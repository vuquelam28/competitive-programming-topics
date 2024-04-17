# InsList

Cho danh sách $S$ gồm $n$ phần tử. 

Bạn được nhận $q$ thao tác có dạng: $x \ y$ - nghĩa là đổi chỗ phần tử thứ $y$ hiện tại trong $S$ (các phần tử đánh số bắt đầu từ $1$) ra ngay cạnh bên phải của phần tử thứ $x$. Đảm bảo $1 \le x,y \le n$, $x \neq y$.

***Yêu cầu:*** Hãy in ra danh sách liên kết $S$ sau khi thực hiện $q$ thao tác trên?

## Input

- Dòng đầu chứa số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên miêu tả danh sách $S$.
- Dòng thứ ba chứa số nguyên dương $q$.
- Trên $q$ dòng tiếp theo, mỗi dòng gồm hai số nguyên dương $x,y$ miêu tả thao tác.

## Constraints 

- $1 \le n,q \le 10^4$.
- Các phần tử trong $S$ đều là số nguyên trong khoảng $[0,10^9]$.

## Output

- In ra danh sách $S$ sau khi thực hiện $q$ thao tác.

## Sample Input 1

```
6
1 2 3 4 5 6
4
1 3
2 4
5 2
1 6
```

## Sample Output 1

```
1 6 4 2 5 3
``` 

## Explanation 1

Dãy lần lượt thay đổi như sau qua 4 thao tác:

```
1 3 2 4 5 6
1 3 4 2 5 6
1 4 2 5 3 6
1 6 4 2 5 3
```