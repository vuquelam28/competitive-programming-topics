# Cọc Rào

Sau $10$ năm làm việc trong ngành công nghệ thông tin, chị Hải Lệ đã có được một khối tài sản kếch sù, kèm theo một ngôi nhà cực lớn, với khu vườn hoa ở phía sau quanh năm cây cối tươi tối. Khu vườn của chị Hải Lệ có một dãy cọc hàng rào sơn màu trắng, mỗi chiếc rào có chiều cao khác nhau lần lượt là $c_1, c_2, \dots, c_m$. Tuy nhiên, chị Lệ rất buồn phiền vì dãy hàng rào này - theo như quan điểm của chị - là chưa hoàn hảo. Dãy hàng rào hoàn hảo theo chị Lệ phải thỏa mãn những điều kiện sau:

- $c_i < c_{i + 1}$ nếu $i$ lẻ và $i < m$.
- $c_i > c_{i + 1}$ nếu $i$ chẵn và $i < m$.

Lấy ví dụ, những dãy hàng rào có chiều cao là $[1, 5], [3, 6, 6]$ hoặc $[2, 7, 5, 9]$ sẽ là hoàn hảo, còn những dãy hàng rào như $[1, 1]$ hay $[8, 9, 10]$ sẽ là không hoàn hảo.

Sau nhiều ngày suy nghĩ, chị Lệ quyết định sẽ tự mình nhổ những cây cọc rào lên và cắm lại để hàng rào trở thành hoàn hảo. Tuy nhiên, do là phụ nữ nên sức khỏe có hạn, chị Lệ chỉ có thể chọn ra hai chiếc cọc rào $i, j \ (i < j)$ bất kỳ và đổi chỗ chúng cho nhau, thực hiện một lần duy nhất mà thôi. 

***Yêu cầu:*** Giúp chị Lệ tính xem có bao nhiêu cách đổi chỗ như vậy?

## Input

- Dòng đầu tiên chứa số nguyên dương $m$ - độ dài hàng rào.
- Dòng thứ hai chứa $m$ số nguyên dương $c_1, c_2, \dots, c_m$ phân tách nhau bởi dấu cách - chiều cao của các cây cọc rào. Dãy cọc rào ban đầu đảm bảo là chưa hoàn hảo.

## Constraints

- $2 \le m \le 150000$.
- $1 \le c_i \le 150000; \forall i: 1 \le i \le m$.

## Subtasks

- Subtask $1$ ($40\%$ số điểm): $2 \le m \le 50$.
- Subtask $2$ ($60\%$ số điểm): Không có ràng buộc gì thêm.

## Output

- Số nguyên duy nhất là số cách hoán đổi chị Lệ có thể thực hiện, hoặc in ra $0$ nếu như không có cách nào.

## Sample Input 1

```
5
2 8 4 7 7
```

## Sample Output 1

```
2
```

## Sample Input 2

```
4
200 150 100 50
```

## Sample Output 2

```
1
```

