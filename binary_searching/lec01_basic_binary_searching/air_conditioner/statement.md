# Mua Điều Hòa

Một trường THPT có $N$ lớp học được đánh số thứ tự từ $1$ tới $N$ cần trang bị điều hòa, mỗi lớp lắp một chiếc với công suất tùy thuộc vào diện tích của từng lớp. Theo khảo sát, lớp thứ $i$ cần lắp điều hòa với công suất không nhỏ hơn $a_i$. Nhà trường đã tham khảo các cửa hàng điện lạnh và lập được bảng danh mục các loại điều hòa kèm theo công suất và giá của chúng.

***Yêu cầu:*** Cho trước yêu cầu về công suất điều hòa của từng lớp học cũng như bảng danh mục các loại điều hòa, hãy giúp nhà trường tính số tiền nhỏ nhất cần bỏ ra để trang bị điều hòa cho tất cả các lớp học?

## Input

- Dòng đầu tiên chứa số nguyên dương $N$ – số lớp học.
- Dòng thứ hai chứa $N$ số nguyên dương $a_1,a_2,…a_N$ – yêu cầu về công suất tối thiểu của điều hòa ở $N$ lớp học.
- Dòng thứ ba chứa số nguyên dương $M$ – số lượng model điều hòa khác nhau (mỗi model điều hòa có số lượng không hạn chế).
- $M$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $b_j,c_j$ – công suất và giá của model điều hòa thứ $j$.

## Constraints

- $1≤N≤50000$.
- $1≤a_i≤1000;∀i:1≤i≤N$.
- $1≤M≤50000$.
- $1≤b_j,c_j≤1000;1≤i≤M$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): $1 \le N \le 100; 1 \le M \le 200$.
- Subtask $2$ ($50\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là tổng chi phí nhỏ nhất nhà trường cần bỏ ra để trang bị điều hòa cho cả $N$ lớp học.

## Sample Input

```
3
1 2 3
4
1 10
1 5
10 7
2 3
```

## Sample Output

```
13
```

## Explanation

Lớp học một mua điều hòa công suất $2,$ giá $3$.

Lớp học hai mua điều hòa công suất $2,$ giá $3$.

Lớp học ba mua điều hòa công suất $10,$ giá $7$.
