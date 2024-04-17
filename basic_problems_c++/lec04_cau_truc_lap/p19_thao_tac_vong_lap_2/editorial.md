# Thao Tác Vòng Lặp 2 - Editorial

Đây là dạng bài multi-testcase nhưng không biết trước số lượng test cases. Ta sẽ sử dụng kĩ thuật nhập dữ liệu tới khi hết, thông qua vòng lặp điều kiện giả, tới khi nào dữ liệu nhập vào bằng $-1$ thì thoát vòng lặp:

```cpp
while (true)
{   
    int p;
    cin >> p;

    if (p == -1)
        break;
}
```

Với dữ liệu nhập vào, cần có một số biến sau để xử lý các yêu cầu của bài toán:

- $\text{student\_number}$: Đếm số lượng học sinh. Với mỗi lần nhập $p$ (tất nhiên trừ trường hợp $p = -1$) ta sẽ tăng biến này $1$ lần.
- $\text{total\_point}$: Tổng điểm của các học sinh, là tổng các giá trị $p \ne -1$.\
- $\text{id}$: Số thứ tự của học sinh hiện tại, mỗi lần nhập $p$ thì biến này tăng thêm $1$.
- $\text{max\_id}$: Chỉ số của học sinh có điểm lớn nhất. Giá trị này được cập nhật ở mỗi lần nhập $p,$ nếu $p > \text{max\_point}$ thì gán $\text{max\_point} = p$ và $\text{max\_id} = id$.
- $\text{max\_point}$: Điểm của học sinh có điểm lớn nhất. Giá trị này được cập nhật ở mỗi lần nhập $p,$ nếu $p > \text{max\_point}$ thì gán $\text{max\_point} = p$.

Cuối cùng in ra các kết quả tương ứng.