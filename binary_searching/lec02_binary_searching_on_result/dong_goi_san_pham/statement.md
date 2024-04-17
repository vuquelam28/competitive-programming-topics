# Đóng Gói Sản Phẩm

Ở đầu ra của một dây chuyền sản xuất trong nhà máy XYZ có một máy sắp xếp tự động. Sau khi kết thúc việc gia công trên dây chuyền, các sản phẩm sẽ được xếp vào các hộp có cùng dung lượng $M$. Sản phẩm rời khỏi dây chuyên được xếp vào hộp đang mở (khi bắt đầu ca làm việc có một hộp rỗng được mở sẵn) nếu như dung lượng của hộp còn đủ để chứa sản phẩm. Trong trường hợp ngược lại máy sẽ tự đóng nắp hộp hiện tại, cho xuất xưởng rồi mở một hộp rỗng mới để xếp sản phẩm vào.

Trong một ca làm việc có $N$ sản phẩm đánh số từ $1$ đến $N$ theo đúng thứ tự mà chúng rời khỏi dây chuyền. Sản phẩm thứ $i$ có trọng lượng là $a_i \ (1 \le i \le N) $. Ban giám đốc nhà máy quy định rằng sản phẩm xuất xưởng của một ca làm việc phải được xếp vào trong không quá $K$ hộp.

***Yêu cầu:*** Hãy giúp người quản đốc ca làm việc xác định giá trị $M$ nhỏ nhất sao cho số hộp mà máy tự động cần sử dụng để xếp dẫy $N$ sản phẩm xuất xưởng của ca không vượt quá $K$ số cho trước.

## Input

- Dòng đầu tiên chứa hai số nguyên dương $N$ và $K$.
- $N$ dòng tiếp theo, mỗi dòng một số nguyên dương $a_i \ (1 \le i \le N)$.
- Các số trên cùng một dòng phân tách nhau bởi dấu cách.

## Constraints

- $1 \le K \le N \le 30000$.
- $1 \le a_i \le 30000; \forall i: 1 \le i \le N$.

## Subtasks

- Subtask $1$ ($60\%$ số điểm): $1 \le N \le 1000$.
- Subtask $2$ ($40\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là dung lượng tối thiểu của mỗi hộp.

## Sample Input

```
9 4
1 
1 
1 
3 
2
2
1
3
1 
```

## Sample Output

```
5
```


