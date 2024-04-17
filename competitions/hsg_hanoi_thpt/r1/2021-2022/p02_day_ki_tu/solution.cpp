#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x = n * (n + 1) / 2LL;
    x %= 26;

    cout << (char) ('A' + x);
}
