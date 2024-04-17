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
    Node* last = new Node();

    LinkedList()
    {
        head = NULL;
        last = NULL;
    }

    void add_to_last(int value)
    {
        Node* new_node = new Node();
        new_node -> create_node(value);

        // Danh sách rỗng thì gán luôn head bằng node mới.
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

    void input_linked_list(int n)
    {
        for (int i = 0; i < n; ++i)
        {
            int value;
            cin >> value;

            add_to_last(value);
        }
    }
};

// Tạo một mảng con trỏ đại diện cho các danh sách S.
LinkedList* ptr_s[101];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;

        ptr_s[i] = new LinkedList(); // Cấp phát bộ nhớ cho danh sách S[i].
        ptr_s[i] -> input_linked_list(a);
    }

    LinkedList* ptr_t = new LinkedList();
    for (int i = 1; i <= n; ++i)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            if (ptr_t -> head == NULL)
                ptr_t = ptr_s[i];
            else
            {
                ptr_s[i] -> last -> next = ptr_t -> head;
                ptr_t -> head = ptr_s[i] -> head;
            }
        }
        else
        {
            if (ptr_t -> head == NULL)
                ptr_t = ptr_s[i];
            else
            {
                ptr_t -> last -> next = ptr_s[i] -> head;
                ptr_t -> last = ptr_s[i] -> last;
            }
        }
    }

    cout << ptr_t -> get_size() << endl;
    ptr_t -> print_list();

    return 0;
}