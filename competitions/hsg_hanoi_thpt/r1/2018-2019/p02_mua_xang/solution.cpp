#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(int n, vector < int >& a, vector < int >& p)
{
    int res = 0, min_cost = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        min_cost = min(min_cost, p[i]);
        res += a[i] * min_cost;
    }

    cout << res;
}

signed main()
{
    int n;
    cin >> n;

    vector < int > a(n + 1), p(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> p[i];

    solution(n, a, p);

    return 0;
}