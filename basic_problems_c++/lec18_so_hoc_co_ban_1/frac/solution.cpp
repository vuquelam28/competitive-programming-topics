#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(const int& n, const vector < int >& a, const vector < int >& b)
{
    int nume = 1, deno = 1;
    for (int i = 1; i <= n; ++i)
    {
        nume *= a[i];
        deno *= b[i];
    }
    int gcd = __gcd(nume, deno);

    cout << nume / gcd << ' ' << deno / gcd;
}

main()
{
    int n;
    cin >> n;

    vector < int > a(n + 1), b(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> b[i];

    solution(n, a, b);

    return 0;
}