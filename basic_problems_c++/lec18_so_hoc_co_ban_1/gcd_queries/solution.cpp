#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 2e5 + 10;

// Nhập dữ liệu ban đầu.
void enter(int& n, vector < int >& a)
{
    cin >> n;

    a.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

// Khởi tạo ước chung lớn nhất tiền tố và hậu tố của mảng.
void pre_computation(int n, vector < int >& a, vector < int >& prefix_gcd,
                     vector < int >& postfix_gcd)
{
    prefix_gcd.resize(n + 1);
    postfix_gcd.resize(n + 1);
    prefix_gcd[1] = a[1];
    postfix_gcd[n] = a[n];

    for (int i = 2; i <= n; ++i)
        prefix_gcd[i] = __gcd(prefix_gcd[i - 1], a[i]);
    for (int i = n - 1; i >= 1; --i)
        postfix_gcd[i] = __gcd(postfix_gcd[i + 1], a[i]);
}

// Trả lời các truy vấn.
void queries(int& t, int n, vector < int >& prefix_gcd, vector < int >& postfix_gcd)
{
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (l == 1)
            cout << postfix_gcd[r + 1] << endl;
        else if (r == n)
            cout << prefix_gcd[l - 1] << endl;
        else
            cout << __gcd(prefix_gcd[l - 1], postfix_gcd[r + 1]) << endl;
    }
}

main()
{
    int n, t;
    vector < int > a, prefix_gcd, postfix_gcd;

    enter(n, a);
    pre_computation(n, a, prefix_gcd, postfix_gcd);
    queries(t, n, prefix_gcd, postfix_gcd);

    return 0;
}