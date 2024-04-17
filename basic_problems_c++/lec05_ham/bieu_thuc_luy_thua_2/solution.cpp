#include <bits/stdc++.h>

using namespace std;

long long power(long long x, long long p)
{
    long long ans = 1;
    for (int i = 1; i <= 2 * p + 1; ++i)
        ans *= x;

    if (p % 2 == 0)
        return ans;
    else 
        return -ans;
}

main()
{
    long long x, n;
    cin >> x >> n;

    long long res = 0;
    for (int i = 0; i <= n; ++i)
        res += power(x, i);

    cout << res;

    return 0;
}