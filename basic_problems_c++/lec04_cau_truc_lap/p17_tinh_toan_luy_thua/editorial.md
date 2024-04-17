# Tính Toán Lũy Thừa - Editorial

Đây là dạng bài multi-testcase. Với dạng này, ta thực hiện vòng lặp bên ngoài để xét từng test case, bên trong thực hiện thuật toán đầy đủ các bước từ nhập dữ liệu tới in kết quả.

```cpp
while (t--) // Hoặc for (int i = 1; i <= t; ++i)
{
    // Thuật toán.
}
```

Phần thuật toán của bài này chỉ đơn giản là tính lũy thừa $a^b,$ tức là nhân giá trị $a$ vào một biến $res$ đủ $b$ lần. Lưu ý để kiểu dữ liệu `long long`.