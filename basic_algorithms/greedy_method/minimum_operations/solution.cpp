#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e5 + 10;
int a[maxn];

main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] > k)
            res += min(a[i] % k, k - a[i] % k);
        else 
            res += (k - a[i]);
    }

    cout << res;

    return 0;
}