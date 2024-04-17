# Sản Phẩm Trùng Lặp

Tèo gần đây đã được một công ty thuê để chuyển hóa đơn trên giấy của họ sang hóa đơn trực tuyến. Tèo đánh máy giỏi, và đây cũng chính là niềm đam mê của anh ấy.

Tuy anh ấy giỏi nhưng việc gặp phải sai lầm khi làm việc là điều khó tránh khỏi. Đưa ra danh sách gồm $n$ phần tử chứa mã sản phẩm mà Tèo đã nhập vào máy tính, trong đó có một sản phẩm bị trùng lặp. 

***Yêu cầu:*** Hãy giúp Tèo tìm ra mã sản phẩm trùng lặp này?

## Input

- Dòng đầu tiên là số nguyên $t$ chỉ số lượng truy vấn.
- Các truy vấn có dạng như sau:
    - Dòng đầu tiên là số nguyên $n$ chỉ số lượng các sản phẩm mà Tèo đã nhập vào.
    - Trên $n$ dòng tiếp theo là chuỗi $a_1, a_2, ..., a_n$ với $a_i$ là mã sản phẩm thứ $i$.    

## Constraints

- $1 \le t \le 100$.
- $2 \le n \le 10^4$.
- Mã sản phẩm chỉ gồm các kí tự in thường trong bảng chữ cái tiếng Anh, và độ dài của mã không vượt quá $10$.

## Subktasks

- Subtask $1$ ($40\%$ sô điểm): $2 \le n \le 100$.
- Subtask $2$ ($60\%$ sô điểm còn lại) không có ràng buộc gì thêm.

## Output

- Với mỗi truy vấn in ra trên một dòng mã sản phẩm bị trùng trong danh sách.

## Sample Input 1

```
2
2
bat
bat
4
bat
ball
glove
glove
```

## Sample Output 1

```
bat
glove
```


