#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
    int n;
    cin >> n;

    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int res = 0;

    int cur_sum = 0;
    for (int i = 2; i <= n; ++i)
        if (a[i] == a[i - 1] + 1)
        {
            if (cur_sum == 0)
                cur_sum += a[i - 1] + a[i];
            else 
                cur_sum += a[i];

            res = max(res, cur_sum);
        }
        else 
        {
            cur_sum = 0;
            continue;
        }

    cout << res;
}