# Super List - Editorial

Ta có thể chèn $S_i$ vào $T$ rất nhanh chỉ bằng vài thao tác. Tuy nhiên, để thuận tiện hơn thì ta sẽ biến đổi danh sách liên kết, lưu thêm một con trỏ $last$ để trỏ vào phần tử cuối cùng của danh sách. Như vậy, ta sẽ biến đổi thao tác `add_to_last()` đi một chút (do bài này chỉ cần sử dụng thao tác này trong việc thêm phần tử vào danh sách):

```cpp
void add_to_last(int value)
{
    Node* new_node = new Node();
    new_node -> create_node(value);

    // Danh sách rỗng thì gán luôn head và last bằng node mới.
    if (head == NULL)
        head = new_node, last = new_node;
    else
    {
        // Ngược lại, tạo một node p để duyệt tới phần tử cuối của danh sách.
        Node* p = new Node();
        p = head;
        while (p -> next != NULL)
            p = p -> next;

        // Cho next của phần tử cuối trỏ tới node mới.
        // Node cuối cùng của danh sách sẽ là node mới.
        p -> next = new_node;
        last = new_node;
    }
}
```

Để thuận tiện trong việc quản lý các danh sách $S_i,$ ta dùng một ***mảng các con trỏ*** là $\text{ptr\_s}$ - với $\text{ptr\_s}[i]$ là con trỏ kiểm soát danh sách liên kết $S[i]$. Ngoài ra, ta sử dụng con trỏ $\text{ptr\_t}$ để kiểm soát danh sách $T$.

Nếu cần chèn $S_i$ vào đầu $T,$ ta sẽ nối phần tử cuối cùng của $S_i$ với phần tử đầu tiên của $T$. Tức là ta sẽ cho node $last$ của danh sách $S_i$ trỏ tới node $head$ của danh sách $T$ (nhưng nếu $T$ đang rỗng thì gán trực tiếp $T = S_i$), sau đó cập nhật lại node $head$ của $T$ thành node $last$ của $S_i$.

Ngược lại nếu cần chèn $S_i$ vào cuối $T,$ ta nối phần tử cuối cùng của $T$ với phần tử đầu tiên của $S_i$. Tức là ta sẽ cho node $last$ của $T$ trỏ tới node $head$ của $S_i$ (nhưng nếu $T$ đang rỗng thì gán trực tiếp $T = S_i$), sau đó cập nhật lại node $last$ của $T$ thành node $last$ của $S_i$.

Phép nối được thực hiện thông qua các con trỏ kiểm soát các $S_i$ và danh sách $T$.