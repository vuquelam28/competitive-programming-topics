#include <bits/stdc++.h>

using namespace std;

// Struct thể hiện một node trên danh sách liên kết.
struct Node
{
    int value;
    struct Node* next;

    Node()
    {
        value = 0;
        next = NULL;
    }

    void create_node(int _value)
    {
        value = _value;
        next = NULL;
    }
};

// Struct thể hiện 1 danh sách liên kết, với head là node đầu tiên và last là node cuối cùng.
struct LinkedList
{
    Node* head = new Node();

    LinkedList()
    {
        head = NULL;
    }

    void add_to_last(int value)
    {
        Node* new_node = new Node();
        new_node -> create_node(value);

        // Danh sách rỗng thì gán luôn head bằng node mới.
        if (head == NULL)
            head = new_node;
        else
        {
            // Ngược lại, tạo một node p để duyệt tới phần tử cuối của danh sách.
            Node* p = new Node();
            p = head;
            while (p -> next != NULL)
                p = p -> next;

            // Cho next của phần tử cuối trỏ tới node mới.
            p -> next = new_node;
        }
    }

    void del_front()
    {
        if (head == NULL)
        {
            cout << "The linked-list is empty!\n";
            return;
        }

        head = head -> next;
    }

    void del_at_position(int x)
    {
        if (x == 1 || head == NULL || head -> next == NULL) // Hoặc x = 0 tùy vào cách đánh số danh sách.
        {
            del_front();
            return;
        }

        // Tìm phần tử liền trước vị trí cần xóa. Tối đa chỉ tới vị trí áp chót.
        Node* p = head;
        int k = 1;
        while (p -> next -> next != NULL && k != x - 1)
        {
            p = p -> next;
            ++k;
        }

        // Đã duyệt tới phần tử áp chót mà vẫn chưa tới được phần tử liền trước
        // vị trí cần xóa, thì kết luận không tồn tại vị trí cần xóa.
        if (k != x - 1)
        {
            cout << "The position is invalid\n";
            return;
        }

        // Đã duyệt tới phần tử áp chót mà vẫn chưa tới được phần tử liền trước
        // vị trí cần xóa, thì kết luận không tồn tại vị trí cần xóa.
        if (k != x - 1)
            cout << "The position is invalid";
        // Đặt p trỏ tới phần tử liền sau phần tử cần xóa.
        else
            p -> next = p -> next -> next;
    }

    void input_linked_list(int n)
    {
        for (int i = 1; i <= n; ++i)
        {
            int value;
            cin >> value;

            add_to_last(value);
        }
    }

    void print_list()
    {
        for (Node* p = head; p != NULL; p = p -> next)
            cout << p -> value << ' ';
    }
    
    int get_size()
    {
        int _size = 0;
        for (Node* p = head; p != NULL; p = p -> next)
            ++_size;

        return _size;
    }
    
    void unique_list()
    {
        Node* p = head;
        int k = 1;
        while (true)
        {
            // Đã đi tới phần tử cuối cùng của danh sách.
            if (p -> next == NULL)
                break;

            if (p -> next -> value == p -> value)
                del_at_position(k + 1);
            else
            {
                p = p -> next;
                ++k;
            }
        }
    }
};

int main()
{
    int n;
    cin >> n;

    LinkedList* ptr = new LinkedList();
    ptr -> input_linked_list(n);

    ptr -> unique_list();
    
    cout << ptr -> get_size() << endl;
    ptr -> print_list();

    return 0;
}