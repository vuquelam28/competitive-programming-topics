#include <bits/stdc++.h>

using namespace std;

typedef vector < int > vi;

// Nạp chồng toán tử chèn luồng, dùng để in ra số lớn.
ostream &operator << (ostream &cout, const vi &a)
{
    for (auto d: a)
        cout << d;

    return cout;
}

// Viết thêm các số 0 ở đầu.
void add_zero(vi &a, int sz)
{
    // Đầu tiên đảo ngược hai số để tối ưu thời gian khi thêm phần tử.
    reverse(a.begin(), a.end());

    while ((int) a.size() < sz)
        a.push_back(0);

    reverse(a.begin(), a.end());
}

void change(vi &a, vi &b)
{
    int sz = max(a.size(), b.size());
    add_zero(a, sz);
    add_zero(b, sz);
}

// Xóa các số 0 vô nghĩa ở đầu.
void del_zero(vi &a)
{
    reverse(a.begin(), a.end());

    while (a.size() >= 2)
        if (a.back() == 0)
            a.pop_back();
        else
            break;

    reverse(a.begin(), a.end());
}

// Phép toán cộng.
vi operator + (vi a, vi b)
{
    change(a, b);

    int sz = a.size();
    vi c;

    int rem = 0;
    for (int i = sz - 1; i >= 0; --i)
    {
        int x = a[i] + b[i] + rem;
        rem = x / 10;
        x %= 10;
        c.push_back(x);
    }

    c.push_back(rem);
    reverse(c.begin(), c.end());
    del_zero(c);

    return c;
}

vi int_to_vi(int n)
{
    vi a;
    if (n < 10)
    {
        a.push_back(n);
        return a;
    }
    
    while (n)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    
    return a;
}

vi calc(int n)
{
    vi f0, f1, f2, fn;
    f0 = int_to_vi(0);
    f1 = int_to_vi(1);
    f2 = int_to_vi(2);
    fn = int_to_vi(3);
    
    for (int i = 4; i <= n; ++i)
    {
        f0 = f1;
        f1 = f2;
        f2 = fn;
        fn = f0 + f1 + f2;
    }
    
    return fn;
}

main()
{
    int n;
    cin >> n;
    
    cout << calc(n);
    
    return 0;
}