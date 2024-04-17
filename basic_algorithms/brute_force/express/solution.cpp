#include <bits/stdc++.h>
#define task "Express."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1001;
int n;
long long sum, res, a[maxn];

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
}

void solve()
{
    for (int i = 1; i <= n - 2; ++i)
        for (int j = i + 1; j < n; ++j)
            if (j == i + 1)
                res = max(res, sum - a[i] - a[j] - a[j + 1] + a[i] * a[j] * a[j + 1]);
            else
                res = max(res, sum - a[i] - a[i + 1] - a[j] - a[j + 1] + a[i] * a[i + 1] + a[j] * a[j + 1]);
    cout << res;
}

int main()
{
    enter();
    solve();
    return 0;
}

