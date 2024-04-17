#include <bits/stdc++.h>

using namespace std;

// Struct thể hiện một node trên danh sách liên kết.
struct Node
{
    int value;
    struct Node *next;

    Node()
    {
        this -> value = 0;
        this -> next = NULL;
    }

    void create_node(int _value)
    {
        value = _value;
        next = NULL;
    }
};

// Struct thể hiện 1 danh sách liên kết, với head là node đại diện.
struct LinkedList
{
    Node* head;

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

            // Cho next của phần tử cuối trỏ tới node mới.
            p -> next = new_node;
        }
    }

    void del_front()
    {
        if (head == NULL)
            cout << "The linked-list is empty!";

        head = head -> next;
    }

    void del_last()
    {
        // Nếu danh sách chỉ có 1 node thì xóa chính node đó.
        if (head == NULL || head -> next == NULL)
        {
            del_front();
            return;
        }

        Node* p = head;
        while (p -> next -> next != NULL)
            p = p -> next;

        p -> next = NULL;
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

    int get_size()
    {
        int _size = 0;
        for (Node* p = head; p != NULL; p = p -> next)
            ++_size;

        return _size;
    }
};

int main()
{
    // Tạo một con trỏ đại diện cho Danh sách liên kết.
    LinkedList* ptr_list1 = new LinkedList();

    int q;
    cin >> q;

    while (q--)
    {
        int type, x;
        cin >> type;

        switch (type)
        {
            case 1:
                cin >> x;

                ptr_list1 -> add_to_front(x);
                break;

            case 2:
                cin >> x;

                ptr_list1 -> add_to_last(x);
                break;

            case 3:
                ptr_list1 -> del_front();
                break;

            case 4:
                ptr_list1 -> del_last();
                break;

            case 5:
                cin >> x;

                if (ptr_list1 -> get_size() < x)
                    cout << "Can't find the kth element\n";
                else
                    cout << ptr_list1 -> value_at_index(x) << '\n';
                break;
        }
    }

    return 0;
}