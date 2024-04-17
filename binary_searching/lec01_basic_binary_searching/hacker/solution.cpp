#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
    int n, k;
    cin >> n >> k;

    vector < int > a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    int res = 0;
    for (int i = 1; i < n; ++i)
        res += binary_search(a.begin(), a.begin() + i, a[i] - k);

    cout << res;

    return 0;
}