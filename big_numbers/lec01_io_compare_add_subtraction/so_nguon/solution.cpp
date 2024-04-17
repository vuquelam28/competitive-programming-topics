#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
#define int long long

using namespace std;

typedef vector < int > vi;

// Nạp chồng toán tử trích luồng, dùng để nhập vào số lớn.
istream &operator >> (istream &cin, vi &a)
{
    string s;
    cin >> s;

    a.clear();
    for (int i = 0; i < s.size(); ++i)
        a.push_back(s[i] - '0');

    return cin;
}

// Nạp chồng toán tử chèn luồng, dùng để in ra số lớn.
ostream &operator << (ostream &cout, const vi &a)
{
   	for (auto d: a)
        cout << d;

   	return cout;
}

// Viết thêm các số 0 ở đầu một số nguyên lớn a.
void add_zero(vi &a, int sz)
{
    // Đảo ngược vector lại để tối ưu thời gian khi thêm số 0 vào.
    reverse(a.begin(),a.end());

	while (a.size() < sz)
        a.push_back(0);

	reverse(a.begin(), a.end());
}

// Xóa các số 0 vô nghĩa ở đầu một số nguyên lớn a.
void del_zero(vi &a)
{
    reverse(a.begin(), a.end());

    while (a.size() >= 2)
    {
		if (a.back() == 0)
            a.pop_back();
		else
            break;
 	}

 	reverse(a.begin(), a.end());
}

// Cân bằng độ dài hai số a và b bằng cách thêm các số 0 vào đầu.
void change(vi &a, vi &b)
{
	int sz = max(a.size(), b.size());
	add_zero(a, sz);
	add_zero(b, sz);
}

// Phép toán so sánh nhỏ hơn.
bool operator < (vi a, vi b)
{
    change(a, b);

    for (int i = 0; i < a.size(); ++i)
        if (a[i] < b[i])
            return true;
        else if (a[i] > b[i])
            return false;

    return false;
}

// Phép toán trừ.
vi operator - (vi a, vi b)
{
    change(a, b);

    int sz = a.size();
    vi c;

    int rem = 0;
    for (int i = sz - 1; i >= 0; --i)
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

void solution(vi s)
{
    for (int i = 9 * s.size(); i >= 1; --i)
    {
        // Biến i thành kiểu số lớn, lưu vào mảng chữ số b.
        int n = i, temp = 0;
        vi b;
        while (n > 0)
        {
            b.push_back(n % 10);
            n /= 10;
        }
        reverse(b.begin(), b.end());

        // Nếu s < b thì bỏ qua.
        if (s < b)
            continue;

        // Tìm nguồn khả thi của m là s - b, kiểm tra nó có đúng là nguồn không.
        vi diff = s - b;
        for (int j = 0; j < diff.size(); ++j)
            temp += diff[j];

        if (temp == i)
        {
            cout << diff;
            return;
        }
    }

    cout << 0;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vi s;
    cin >> s;

    solution(s);

    return 0;
}
