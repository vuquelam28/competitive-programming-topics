# DAQuery

Cho một danh sách liên kết $S$ ban đầu rỗng, các phần tử trong danh sách sẽ được đánh số từ vị trí $1$. Bạn cần thực hiện $q$ truy vấn có dạng như sau:
- $1 \ x$: Thêm giá trị $x$ vào đầu $S$.
- $2 \ x$: Thêm giá trị $x$ vào cuối $S$.
- $3$: Xóa giá trị đầu tiên của $S$. Đảm bảo lúc này dãy $S$ khác rỗng.
- $4$: Xóa giá trị cuối cùng của $S$. Đảm bảo lúc này dãy $S$ khác rỗng.
- $5 \ k$: In ra giá trị thứ $k$ của $S$. Đảm bảo $k \le |S|$.

***Yêu cầu:*** Hãy thực hiện tất cả các truy vấn cho trước?

## Input

- Dòng đầu tiên chứa một số nguyên dương $q$ miêu tả số truy vấn.
- Trên $q$ dòng tiếp theo, mỗi dòng biểu diễn một truy vấn.

## Constraints 

- Các số trong Input đều là số nguyên.
- $1 \le x,q \le 1000$.

## Output

- In ra kết quả theo thứ tự xuất hiện của các truy vấn loại $5$. Nếu như truy vấn loại $5$ nào không tồn tại đáp án thì đưa ra `Can't find the kth element`.

## Sample Input 1

```
8
1 2
2 3
5 1
3
4
1 2
1 3
5 1
```

## Sample Output 1

```
2
3
``` 