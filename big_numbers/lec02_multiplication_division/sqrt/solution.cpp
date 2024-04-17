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

    int rem = 0;
    vi c;
    for (int i = a.size() - 1; i >= 0; --i)
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

// Phép toán trừ.
vi operator - (vi a, vi b)
{
    change(a, b);

    int rem = 0;
    vi c;
    for (int i = a.size() - 1; i >= 0; --i)
    {
        int x = a[i] - b[i] - rem;
        if (x < 0)
        {
            x += 10;
            rem = 1;
        }
        else
            rem = 0;

        c.push_back(x);
    }

    reverse(c.begin(), c.end());
    del_zero(c);

    return c;
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

// Nạp chồng toán tử / cho một số lớn và một số nhỏ.
// Có thể đổi kiểu số nhỏ thành int tùy ý.
vi operator / (vi a, long long b)
{
    long long cur = 0;
    vi c;
    for (int d: a)
    {
        cur = cur * 10 + d;
        c.push_back (cur / b);
        cur %= b;
    }

    del_zero(c);

    return c;
}

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vi n;
	cin >> n;

    vi res;
    vi l = int_to_vi(1), r = n, one = int_to_vi(1);
    while (l <= r)
    {
        vi mid = (l + r) / 2;
        if (mid * mid <= n)
        {
            res = mid;
            l = mid + one;
        }
        else
            r = mid - one;
    }

    cout << res;

	return 0;
}
