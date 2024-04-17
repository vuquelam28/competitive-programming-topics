#include <bits/stdc++.h>

using namespace std;

typedef vector < int > vi;

// Nạp chồng toán tử trích luồng, dùng để nhập vào số lớn.
istream &operator >> (istream &cin, vi &number)
{
    string s;
    cin >> s;

    number.clear();
    for (int i = 0; i < (int) s.size(); ++i)
        number.push_back(s[i] - '0');

    return cin;
}

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

// Cân bằng độ dài hai số a và b bằng cách thêm các số 0 vào đầu.
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

bool operator < (vi a, vi b)
{
    change(a, b);

    for (int i = 0; i < (int) a.size(); ++i)
        if (a[i] < b[i])
            return true;
        else if (a[i] > b[i])
            return false;

    return false;
}

bool operator <= (vi a, vi b)
{
    change(a, b);

    for (int i = 0; i < (int) a.size(); ++i)
        if (a[i] < b[i])
            return true;
        else if (a[i] > b[i])
            return false;

    return true;
}

vi int_to_vi(int n)
{
    vi c;
    if (n == 0)
    {
        c.push_back(n);
        return c;
    }

    while (n)
    {
        c.push_back(n%10);
        n /= 10;
    }
    reverse(c.begin(),c.end());

    return c;
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

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vi a, b;
    cin >> a >> b;

    vi f0 = int_to_vi(0), f1 = int_to_vi(1);
    vi fn = int_to_vi(0);

    while (fn < a)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }

    int res = 0;
    while (fn <= b)
    {
        ++res;
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }

    cout << res;

	return 0;
}
