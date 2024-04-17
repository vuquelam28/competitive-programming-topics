#include <bits/stdc++.h>
#define task "RSPIRAL."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1001;
int m, n, a[maxn][maxn];

void enter()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
}

void solve()
{
    int i = 1, j = 1;
    while (true)
    {
        if (a[i][j] == 0) break;
        while (a[i][j] != 0)
            cout << a[i][j] << ' ', a[i][j] = 0, ++j;
        ++i; --j;
        while (a[i][j] != 0)
            cout << a[i][j] << ' ', a[i][j] = 0, ++i;
        --i; --j;
        while (a[i][j] != 0)
            cout << a[i][j] << ' ', a[i][j] = 0, --j;
        --i; ++j;
        while (a[i][j] != 0)
            cout << a[i][j] << ' ', a[i][j] = 0, --i;
        ++i; ++j;
    }
}

int main()
{
    enter();
    solve();
    return 0;
}


