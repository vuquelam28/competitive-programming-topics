# Treo Tranh

Bạn Sơn Tùng mua được hai bức tranh trong chương trình đấu giá gây quỹ tham dự Trại hè Hùng Vương và muốn treo chúng tại phòng học. Để thực hiện việc này, cậu mua thêm một cái khung tranh, treo khung lên tường và sau đó dán hai bức tranh vào khung đó. Khung tranh có dạng hình chữ nhật kích thước $a_1×b_1,$ hai bức tranh cũng có dạng hình chữ nhật và có kích thước lần lượt là $a_2×b_2$ và $a_3×b_3$.

Hai bức tranh được vẽ theo trường phái nghệ thuật trừu tượng nên dù có xoay ngang hoặc xoay dọc bức tranh thì cũng không ảnh hưởng đến giá trị nghệ thuật. Hai bức tranh có thể được đặt cạnh nhau, cho dù ở vị trí nào thì mỗi cạnh của bức tranh đều song song với cạnh của khung tranh, không cho phép bất kỳ bức tranh nào đặt chồng lên bức tranh kia hoặc vượt quá khung.

***Yêu cầu:*** Hãy giúp Sơn Tùng xác định xem cậu bạn có thể đặt hai bức tranh vào trong khung hay không, hay là khung của cậu mua quá bé?

## Input

- Gồm ba dòng, dòng đầu tiên ghi hai số nguyên $a_1,b_1;$ dòng thứ hai ghi hai số nguyên $a_2,b_2;$ dòng cuối cùng ghi hai số nguyên $a_3,b_3$. Các số nguyên trên cùng một dòng phân tách nhau bởi dấu cách.

## Constraints

- $1≤a_1,b_1,a_2,b_2,a_3,b_3≤1000$.

## Output

- Nếu có thể đặt hai bức tranh vào khung, ghi `YES`, ngược lại ghi `NO`.

## Sample Input 1

```
3 2
1 3
2 1
```

## Sample Output 1

```
YES
```

## Explanation 1

Bạn Sơn Tùng có thể đặt hai bức tranh vào khung theo cách sau:

<center>

![](https://cdn.ucode.vn/uploads/2247/upload/yYqfnEKR.png)
</center>

