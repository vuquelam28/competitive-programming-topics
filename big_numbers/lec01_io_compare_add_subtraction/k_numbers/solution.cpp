#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>

using namespace std;

typedef vector < int > vi;

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

vi int_to_vi(int n)
{
    vi res;
    if (n == 0)
    {
        res.push_back(n);
        return res;
    }

    while (n)
    {
        res.push_back(n % 10);
        n /= 10;
    }

    return res;
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

void solution(int k, vi n)
{
    vi res;
    res.push_back(0);

    for (int i = 0; i < (int) n.size(); ++i)
    {
        vi temp = res;
        for (int j = 1; j < k; ++j)
            res = res + temp;

        res = res + int_to_vi(n[i]);
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    vi n;
    cin >> n;

    solution(k, n);

    return 0;
}


