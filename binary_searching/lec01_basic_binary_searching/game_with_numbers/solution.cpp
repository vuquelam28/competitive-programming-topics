#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(int n, vector < int > &a, vector < int > &b)
{
    sort(a.begin() + 1, a.end());

    int res = LLONG_MAX;
    for (int i = 1; i <= n; ++i)
    {
        int value = -b[i];

        auto p = lower_bound(a.begin() + 1, a.end(), value);
        if (p != a.end())
            res = min(res, abs(*p + b[i]));
        if (p > a.begin() + 1)
            res = min(res, abs(*(p - 1) + b[i]));
    }

    cout << res;
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