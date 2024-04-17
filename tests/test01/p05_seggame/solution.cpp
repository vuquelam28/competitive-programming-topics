#include <bits/stdc++.h>

#define rep(i, l, r) for (int i = (l); i <= (r); ++i)
#define Rep(i, r, l) for (int i = (r); i >= (l); --i)

using ll = long long;
using namespace std;
const int N = 2002;
const ll INF = 1e18 + 7;
int n, m, a[N][N], b[N];
ll dp[N][N][3];
void upd(ll &x, ll y)
{
    x = min(x, y);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> m;
    rep(i, 1, n) 
        cin >> b[i];

    rep(i, 1, m)
    {
        int c;
        cin >> c;
        rep(j, 1, n) a[j][i] = (b[j] - 1) * (c - 1);
    }
    
    rep(i, 1, n) 
        rep(j, 1, m) 
            rep(k, 0, 2) 
                dp[i][j][k] = INF;
    dp[1][1][0] = a[1][1];

    rep(i, 1, n) 
        rep(j, 1, m) 
            rep(k, 0, 2) 
                if (dp[i][j][k] < INF)
                {
                    if ((k == 0 || k == 1) && j < m) 
                        upd(dp[i][j + 1][1], dp[i][j][k] + a[i][j + 1]);
                    if ((k == 0 || k == 2) && i < n) 
                        upd(dp[i + 1][j][2], dp[i][j][k] + a[i + 1][j]);
                    if (i < n && j < m) 
                        upd(dp[i + 1][j + 1][0], dp[i][j][k] + a[i + 1][j + 1]);
                }
    cout << min({dp[n][m][0], dp[n][m][1], dp[n][m][2]});
    return 0;
}