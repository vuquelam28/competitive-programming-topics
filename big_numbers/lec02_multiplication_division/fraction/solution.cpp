#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
#define int long long

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

bool operator == (vi a, vi b)
{
    change(a, b);

    for (int i = 0; i < (int) a.size(); ++i)
        if (a[i] != b[i]) return false;

    return true;
}

// Nhân hai số lớn.
vi operator * (vi a, vi b)
{
    // Đảo ngược hai số trước để tiện tính toán.
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    // Resize trước mảng kết quả. Kết quả của tích có thể đạt tới số chữ số
    // bằng tổng độ dài của hai số ban đầu cộng lại và cộng thêm 1.
    vi c(a.size() + b.size() + 1);
    for (int i = 0; i < (int) a.size(); ++i)
        for (int j = 0; j < (int) b.size(); ++j)
        {
            c[i + j] += (a[i] * b[j]);
            c[i + j + 1] += (c[i + j] / 10);
            c[i + j] %= 10;
        }

    // Xử lý nốt phần giá trị nhớ chưa được cộng hết.
    // Mảng c hiện tại đang là mảng kết quả bị đảo ngược.
    c.push_back(0);
    for (int i = 0; i < (int) c.size() - 1; ++i)
    {
    	c[i + 1] += (c[i] / 10);
    	c[i] %= 10;
    }

    // Đảo ngược mảng c và xóa các chữ số 0 vô nghĩa ở đầu, ta sẽ thu được tích a * b.
    reverse(c.begin(), c.end());
    del_zero(c);

    return c;
}

bool cmp(pair < vi, vi > &x, pair < vi, vi > &y)
{
    vi t1 = x.first * y.second;
    vi t2 = x.second * y.first;
    
    if (t1 == t2)
        return x.first < y.first;
    else
        return t1 < t2;
}

main()
{
    int n;
    cin >> n;
    
    vector < pair < vi, vi > > f(n);
    for (int i = 0; i < n; ++i)
        cin >> f[i].first >> f[i].second;

    sort(f.begin(), f.end(), cmp);

    for(int i = 0; i < n; ++i)
        cout << f[i].first << " " <<  f[i].second << '\n';

    return 0;
}
