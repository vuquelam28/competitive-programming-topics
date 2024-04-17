#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
    int n, m;
    cin >> n >> m;

    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    sort(a.begin() + 1, a.end());

    int res = 0;
    for (int i = 1; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
        {
            int l = j + 1, r = n;
            while (l <= r)
            {
                int mid = (l + r) >> 1;

                if (a[i] + a[j] + a[mid] <= m)
                {
                    res = max(a[i] + a[j] + a[mid], res);
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
        }

    cout << res;

    return 0;
}
