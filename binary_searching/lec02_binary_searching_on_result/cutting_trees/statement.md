# Chặt Cây

Một người tiều phu vào rừng đốn củi về để xây nhà. Rừng cây có $n$ cái cây với độ cao lần lượt là $h_1, h_2,\dots, h_n$. Để tiết kiệm công sức, người tiều phu đã chế tạo một chiếc máy cưa cho phép cắt một nhát duy nhất với độ cao cố định là $h$ (so với mặt đất), cắt qua tất cả $n$ cây. Khi đó, lượng gỗ thu được sẽ là tổng chiều dài của các đoạn cây gỗ bị cắt đổ xuống (phần màu vàng):

<center>

![](https://cdn.ucode.vn/uploads/2247/images/OVRhmjWQ.png)
</center>

Để xây được ngôi nhà như ý muốn, người tiều phu cần thu được lượng gỗ tối thiểu là $m$. Tuy nhiên, anh ta cũng không muốn cắt thừa quá nhiều gỗ, bởi vì những cây gỗ bị cắt mà không dùng đến thì cái cây đó sẽ bị chết và anh ta không nỡ làm như vậy. Do đó, người tiều phu sẽ cố gắng thực hiện nhát cắt ở một độ cao càng lớn càng tốt, khi đó số gỗ cắt được sẽ giảm đi.

***Yêu cầu:*** Hãy xác định độ cao $h$ lớn nhất mà người tiều phu có thể thực hiện nhát cắt sao cho tổng lượng gỗ thu được không nhỏ hơn $m?$

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n, m$ - số lượng cây gỗ và số gỗ tối thiểu cần chặt.
- Dòng thứ hai chứa $n$ số nguyên $h_1, h_2, \dots, h_n$ phân tách nhau bởi dấu cách.

## Constraints

- $1 \le n, m \le 10^6$.
- $1 \le h_i \le 10^5; \forall i: 1 \le i \le n$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $1 \le n, m, h_i \le 100$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Ghi một số nguyên là độ cao $h$ lớn nhất tìm được. Trong trường hợp không thể thu được số gỗ như mong muốn, in ra $0$.

## Sample Input 1

```
4 7
20 15 10 17
```

## Sample Output 1

```
15
```

## Explanation 1

Với chiều cao là $15,$ lượng gỗ cắt được ở các cây sẽ là $5 + 0 + 0 + 2 = 7,$ vừa đủ thỏa mãn yêu cầu. Nếu cắt với độ cao lớn hơn $15$ thì sẽ không thể thu được đủ lượng gỗ là $7$.