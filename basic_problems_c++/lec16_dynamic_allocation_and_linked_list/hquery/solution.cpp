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

    void add_to_front(int value)
    {
        Node* new_node = new Node();
        new_node -> create_node(value);

        if (head == NULL)
            head = new_node;
        else
        {
            new_node -> next = head;
            head = new_node;
        }
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

            p -> next = new_node;
        }
    }

    void add_to_position(int value, int x)
    {
        // Danh sách đang rỗng hoặc x = 1 thì coi như là chèn vào đầu danh sách.
        if (x == 1 || head == NULL) // Có thể đổi thành x = 0 tùy vào cách đánh số danh sách.
        {
            add_to_front(value);
            return;
        }

        // Đi tìm node ở vị trí x - 1.
        Node* p = new Node();
        p = head;
        int k = 1;
        while (p != NULL && k + 1 != x)
        {
            p = p -> next;
            ++k;
        }

        // Không tìm được node ở vị trí x - 1 thì xử lý riêng.
        if (k + 1 != x)
        {
            // Thông báo vị trí không hợp lệ, hoặc có thể coi như chèn vào cuối danh sách.
            // add_to_last(value);
            cout << "Invalid position\n";
            return;
        }

        // Chèn node mới vào sau vị trí k = x - 1, chính là vị trí x.
        Node* new_node = new Node();
        new_node -> create_node(value);

        new_node -> next = p -> next;
        p -> next = new_node;
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

        // Đặt p -> next trỏ tới phần tử liền sau phần tử cần xóa.
        if (p -> next -> next == NULL) // Xóa ở cuối.
            p -> next = NULL;
        else // Xóa ở giữa.
            p -> next = p -> next -> next;
    }

    int value_at_index(int x)
    {
        int k = 1;
        Node* p = head;
        while (p -> next != NULL && k != x)
        {
            p = p -> next;
            ++k;
        }

        return p -> value;
    }

    void increase_at_index(int k, int x)
    {
        Node* p = head;
        int cnt = 1;
        while (cnt != k)
        {
            p = p -> next;
            ++cnt;
        }

        p -> value = (p -> value) + x;
    }
};

int main()
{
    int q;
    cin >> q;

    LinkedList* ptr = new LinkedList();
    while (q--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int k, x;
            cin >> k >> x;

            ptr -> add_to_position(x, k + 1);
        }
        else if (t == 2)
        {
            int k;
            cin >> k;

            ptr -> del_at_position(k);
        }
        else if (t == 3)
        {
            int k, x;
            cin >> k >> x;

            ptr -> increase_at_index(k, x);
        }
        else
        {
            int k;
            cin >> k;

            cout << ptr -> value_at_index(k) << endl;
        }
    }

    return 0;
}