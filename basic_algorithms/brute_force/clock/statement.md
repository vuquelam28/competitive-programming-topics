# Điều Chỉnh Đồng Hồ

Có $9$ chiếc đồng hồ được xếp thành ma trận $3×3$ như sau:

<center>
<img src="https://cdn.ucode.vn/uploads/1/images/QBNkpVKb.png">
</center>

Mỗi chiếc đồng hồ lại đang ở một trong bốn trạng thái sau:
<center>
<img src="https://cdn.ucode.vn/uploads/1/images/gVefvOKR.png">
</center>

Bạn được cung cấp 9 phép biến đổi, mỗi phép biến đổi sẽ tác dụng lên một số chiếc đồng hồ nhất định. Một lần biến đổi sẽ khiến cho kim của những chiếc đồng hồ bị tác động quay một góc 90° theo chiều từ trái qua phải. Các thao tác và danh sách đồng hồ nó tác động lên được mô tả như dưới đây:
<center>
<img src="https://cdn.ucode.vn/uploads/1/images/YOkXJmau.png">
</center>

***Yêu cầu:*** Cho trước trạng thái của $9$ chiếc đồng hồ. Hãy đếm số thao tác ít nhất cần thực hiện để đưa tất cả các đồng hồ về trạng thái $0$? 

## Input

- Gồm ba dòng, mỗi dòng chứa ba số nguyên có giá trị từ $0$ tới $3$ thể hiện trạng thái của các đồng hồ.

## Output

- Số nguyên duy nhất là số thao tác ít nhất cần sử dụng để đưa cả $9$ đồng hồ về trạng thái $0$.

## Sample Input 1

```
0 2 3 
2 1 2 
3 2 0
```

## Sample Output 1

```
3
3 5 7
```

