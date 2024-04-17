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

    void add_to_front(int value)
    {
        Node* new_node = new Node();
        new_node -> create_node(value);

        if (head == NULL)
            head = last = new_node;
        else
        {
            new_node -> next = head;
            head -> prev = new_node;
            head = new_node;
        }
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

        // Xử lý node mới chèn vào.
        new_node -> next = p -> next;
        new_node -> prev = p;

        // Xử lý hai node trước và sau node mới chèn vào.
        if (p -> next != NULL)
            p -> next -> prev = new_node;
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
        head -> prev = NULL;
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
        // Đặt prev của phần tử liền sau phần tử cần xóa trỏ vào p.
        if (p -> next -> next == NULL) // Xóa ở cuối.
            p -> next = NULL;
        else // Xóa ở giữa.
        {
            p -> next -> next -> prev = p;
            p -> next = p -> next -> next;
        }
    }

    void print_list()
    {
        for (Node* p = head; p != NULL; p = p -> next)
            cout << p -> value << ' ';
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

    void input_linked_list(int n)
    {
        for (int i = 1; i <= n; ++i)
        {
            int value;
            cin >> value;

            add_to_last(value);
        }
    }
};

int main()
{
    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);

    int n;
    cin >> n;

    LinkedList* ptr = new LinkedList();
    ptr -> input_linked_list(n);

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        int val = ptr -> value_at_index(y);
        ptr -> del_at_position(y);

        if (x < y)
            ptr -> add_to_position(val, x + 1);
        else
            ptr -> add_to_position(val, x);
    }

    ptr -> print_list();

    return 0;
}