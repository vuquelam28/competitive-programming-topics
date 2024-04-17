#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
    int n, k;
    cin >> n >> k;

    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    sort(a.begin() + 1, a.end());

    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (k >= a[i])
            k -= a[i], res = i;
        else 
            break;
    }

    cout << res;
    
    return 0;
}