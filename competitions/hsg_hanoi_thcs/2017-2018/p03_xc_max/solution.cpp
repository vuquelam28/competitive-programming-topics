#include <bits/stdc++.h>
#define task "Xcmax."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1000;
string dp[maxn][maxn];
string x, y;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> x;
    cin >> y;
}

int compare(string a, string b)
{
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
    if (a == b) return 0;
    if (a < b) return -1;
    return 1;
}

void solve()
{
    x = ' ' + x; y = ' ' + y;
    int m = x.size() - 1, n = y.size() - 1;
    string res;

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            if ('0' <= x[i] && x[i] <= '9' && x[i] == y[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + x[i];
                if (compare(res, dp[i][j]) == -1)
                    res = dp[i][j];
            }
    
    if (res.empty())
        cout << -1;
    else
        cout << res;
}

int main()
{
    enter();
    solve();
    return 0;
}