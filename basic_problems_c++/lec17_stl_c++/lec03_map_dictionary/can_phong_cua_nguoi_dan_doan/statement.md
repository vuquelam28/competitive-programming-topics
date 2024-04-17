# Căn Phòng Của Người Dẫn Đoàn

Ông Gilgamesh là quản lí của khách sạn Vô Cực. Khách sạn này có vô số phòng ngủ. 

Vào một ngày nọ, có một đoàn khách đến trọ tại khách sạn. Đoàn khách gồm:
- Một người dẫn đoàn.
- Một nhóm các gia đình, trong đó với mỗi gia đình có $k$ thành viên, và số thành viên $k \ne 1$.   

Người dẫn đoàn được ở một phòng riêng và mỗi gia đình ở một phòng.

Ông Gilgamesh có một danh sách không có thứ tự các phòng được sắp xếp ngẫu nhiên. Danh sách bao gồm số phòng cho tất cả các vị khách. Số phòng sẽ xuất hiện $k$ lần cho mỗi gia đình ngoại trừ phòng của người dẫn đoàn.

Bạn sẽ không biết tổng số khách du lịch hoặc tổng số nhóm gia đình. Bạn chỉ được cung cấp giá trị $k$ và danh sách số phòng.

***Yêu cầu:*** Hãy giúp ông Gilgamesh tìm ra số phòng của người dẫn đoàn?

## Input

- Dòng thứ nhất chứa một số nguyên $k$, số thành viên của mỗi gia đình.
- Dòng thứ hai chứa các phần tử không có thứ tự của danh sách số phòng.

## Constraints

- $1 < k < 1000$.

## Output

- Một số nguyên duy nhất chỉ ra số phòng của người dẫn đoàn.
- Các số thứ tự không vượt quá $1000$.

## Sample Input 1

```
5
1 2 3 6 5 4 4 2 5 3 6 1 6 5 3 2 4 1 2 5 1 4 3 6 8 4 3 1 5 6 2 
```

## Sample Output 1

```
8
```

## Explanation 1

Danh sách số phòng gồm $31$ phần tử. Khi $k = 5$, phải có $6$ nhóm gia đình. Trong danh sách trên, tất cả các số đều lặp lại chính xác $5$ lần ngoại trừ số $8$.