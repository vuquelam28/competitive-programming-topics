#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        if (__gcd(x, y) == __gcd(a, b))
            cout << 1 << '\n';
        else 
            cout << 0 << '\n';
    }

    return 0;
}