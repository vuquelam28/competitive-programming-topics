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

bool operator > (vi a, vi b)
{
    change(a, b);

    for (int i = 0; i < (int) a.size(); ++i)
        if (a[i] > b[i])
            return true;
        else if (a[i] < b[i])
            return false;

    return false;
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

	int t;
	cin >> t;

    while (t--)
    {
        vi a, b, c;
        cin >> a >> b >> c;

        if (a + b > c && a + c > b && b + c > a)
            cout << "1\n";
        else
            cout << "0\n";
    }

	return 0;
}
