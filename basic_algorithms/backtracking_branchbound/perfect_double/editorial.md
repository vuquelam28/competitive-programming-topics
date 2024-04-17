# Cặp Số Hoàn Hảo - Editorial

***Nhận xét:*** Chắc chắn sẽ luôn tồn tại cách biến đổi, vì chúng ta có thể thu được số $N$ sau tối đa $(N - 1)$ bước nếu liên tục biến đổi cặp $(1, 1)$ thành cặp $(1, x + 1)$ với $x = \{1, 2,..., N - 1\}$. Vấn đề đặt ra là, có thể tồn tại cách biến đổi tốt hơn hay không? Ta sẽ thử biến đổi cặp $(1, 1)$ thành các cặp $(x, N) \ (1 \le x < N)$ xem phương án nào là tốt nhất.

Đầu tiên cùng xem xét hướng giải đơn giản: Với mỗi cặp $(a, b),$ số thao tác để tạo ra nó sẽ bằng số thao tác tạo ra cặp $(a, b - a)$ cộng thêm $1$ nếu $a < b,$ ngược lại thì bằng số thao tác tạo ra cặp $(a - b, b)$ cộng thêm $1$. Vậy ta có thể dùng một hàm đệ quy theo dạng giải thuật $\text{DFS}$ để phân tách bài toán $(x, N)$ thành các bài toán con, code như sau:

```cpp
void dfs(int a, int b, int step) // a, b và số bước biến đổi để tạo ra nó.
{
    if (step > res) // Số bước biến đổi lớn hơn kết quả cuối -> không cần tiếp tục nữa.
        return;

    if (a == 1 && b == 1)
    {
        res = min(res, step);
        return;
    }

    // Nếu tạo ra một trong hai số < 1 tức là không tồn tại cách biến đổi cho cặp (a, b) ban đầu.
    if (a < 1 || b < 1) 
        return;

    if (a > b)
        dfs(a - b, b, step + 1);
    else if (b > a)
        dfs(a, b - a, step + 1);   
}
```

Cách làm này mặc dù có thể giải quyết bài toán nhưng sẽ bị vượt quá bộ nhớ máy tính do các thao tác đệ quy có thể rất nhiều. Chúng ta cần một cách làm tốt hơn. Nhận xét thấy, nếu $a < b$ thì số thao tác biến đổi sẽ bằng đúng bài toán $(b \ \text{mod} \ a, a)$ cộng thêm số thao tác $\left \lfloor{\frac{b}{a}} \right \rfloor$ để biến đổi từ $(b \ \text{mod} \ a, a)$ sang $(a, b)$. Vậy ta gọi đệ quy luôn tới bài toán này để giảm số thao tác biến đổi.Thực hiện hàm đệ quy này với tất cả các cặp số $(x, N),$ ta thu được kết quả nhỏ nhất. Chi tiết các bạn xem thêm trong solution nhé!