# HQuery

Cho một *Linked List* $S$ ban đầu rỗng. Các phần tử trong $S$ sẽ được đánh số thứ tự từ $1$. 

Bạn cần thực hiện $q$ truy vấn có dạng như sau:
- $1 \ k \ x$: Thêm giá trị $x$ vào ngay sau vị trí $k$ của $S$ (nếu $k = 0$ nghĩa là thêm vào đầu dãy). Đảm bảo $0 \le k \le |S|$.
- $2 \ k$: Xóa giá trị thứ $k$ của $S$. Đảm bảo lúc này $S$ khác rỗng.
- $3 \ k \ x$: Tăng vị trí $k$ của $S$ lên $x$ đơn vị. Đảm bảo $k \le |S|$.
- $4 \ k$: In ra giá trị thứ $k$ của $S$. Đảm bảo $k \le |S|$.

***Yêu cầu:*** Hãy thực hiện tất cả các truy vấn cho trước?

## Input

- Dòng đầu chứa một số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng sau, mỗi dòng biểu diễn một truy vấn.

## Constraints 

- Các số trong Input đều là số nguyên.
- $1 \le x,q \le 1000$.

## Output

- In ra kết quả theo thứ tự xuất hiện của các truy vấn loại $4$.

## Sample Input 1

```
8
1 0 3
3 1 3
4 1
1 0 1
2 2
4 1
1 1 2
4 2
```

## Sample Output 1

```
6
1
2
``` 