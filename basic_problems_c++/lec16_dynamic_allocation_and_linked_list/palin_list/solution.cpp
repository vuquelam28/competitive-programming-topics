#include <bits/stdc++.h>

using namespace std;

// Struct thể hiện một node trên danh sách liên kết.
struct Node
{
    int value;
    struct Node* next;
    struct Node* prev;

    Node()
    {
        value = 0;
        next = NULL;
        prev = NULL;
    }

    void create_node(int _value)
    {
        value = _value;
        next = NULL;
        prev = NULL;
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
            head = last = new_node;
        else
        {
            // Ngược lại, tạo một node p để duyệt tới phần tử cuối của danh sách.
            Node* p = new Node();
            p = head;
            while (p -> next != NULL)
                p = p -> next;

            // Cho next của phần tử cuối trỏ tới node mới và prev của node mới trỏ vào phần tử cuối.
            // Cập nhật lại node cuối cùng của danh sách sẽ là node mới.
            p -> next = new_node;
            new_node -> prev = p;
            last = new_node;
        }
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

    int is_palin(int n)
    {
        Node* l = head;
        Node* r = last;

        while (n > 0)
        {
            if (l -> value != r -> value)
                return 0;

            l = l -> next;
            r = r -> prev;
            n -= 2;
        }

        return 1;
    }
};

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        LinkedList* ptr = new LinkedList();
        ptr -> input_linked_list(n);

        cout << ptr -> is_palin(n) << endl;
    }

    return 0;
}