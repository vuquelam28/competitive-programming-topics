#include <bits/stdc++.h>

#define rep(i, l, r) for (int i = (l); i <= (r); ++i)
#define Rep(i, r, l) for (int i = (r); i >= (l); --i)
#define SZ(x) ((int)(x).size())
#define eb emplace_back
#define F first
#define S second

using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
const int N = 3e5 + 2;
int n, dp[2][N], dp1[2][N];
vi g[N];
void dfs(int u, int p)
{
    int mx = 1, mx1 = 1;
    for (int v : g[u]) if (v != p)
    {
        dfs(v, u);
        if (mx < dp1[0][v] + 1) mx1 = mx, mx = dp1[0][v] + 1;
        else if (mx1 < dp1[0][v] + 1) mx1 = dp1[0][v] + 1;
        dp[0][u] = max(dp[0][u], dp[0][v]);
    }
    dp1[0][u] = mx;
    dp[0][u] = max(dp[0][u], mx + mx1 - 1);
}
void upd(ii &p, int v)
{
    if (v > p.F) p.S = p.F, p.F = v;
    else if (v > p.S) p.S = v;
}
void dfs1(int u, int p)
{
    vii pre(SZ(g[u]), {1, 1}), suf(SZ(g[u]), {1, 1});
    vi pre1(SZ(g[u]), 1), suf1(SZ(g[u]), 1);
    rep(i, 0, SZ(g[u]) - 1)
    {
        int v = g[u][i];
        if (i) pre[i] = pre[i - 1], pre1[i] = pre1[i - 1];
        if (v != p) upd(pre[i], dp1[0][v] + 1), pre1[i] = max(pre1[i], dp[0][v]);
    }
    Rep(i, SZ(g[u]) - 1, 0)
    {
        int v = g[u][i];
        if (i < SZ(g[u]) - 1) suf[i] = suf[i + 1], suf1[i] = suf1[i + 1];
        if (v != p) upd(suf[i], dp1[0][v] + 1), suf1[i] = max(suf1[i], dp[0][v]);
    }
    rep(i, 0, SZ(g[u]) - 1)
    {
        int v = g[u][i];
        if (v != p)
        {
            int mx = max((i ? pre[i - 1].F : 1), ((i < SZ(g[u]) - 1) ? suf[i + 1].F : 1));
            dp1[1][v] = max(dp1[1][u], mx) + 1;
            ii mx1 = {1, 1};
            upd(mx1, (i ? pre[i - 1].F : 1));
            upd(mx1, (i ? pre[i - 1].S : 1));
            upd(mx1, ((i < SZ(g[u]) - 1) ? suf[i + 1].F : 1));
            upd(mx1, ((i < SZ(g[u]) - 1) ? suf[i + 1].S : 1));
            upd(mx1, dp1[1][u]);
            int mx2 = max((i ? pre1[i - 1] : 1), ((i < SZ(g[u]) - 1) ? suf1[i + 1] : 1));
            dp[1][v] = max({dp[1][u], mx2, mx1.F + mx1.S - 1});
        }
    }
    for (int v : g[u]) if (v != p) dfs1(v, u);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    rep(i, 2, n)
    {
        int u, v;
        cin >> u >> v;
        g[u].eb(v);
        g[v].eb(u);
    }
    dfs(1, 0);
    dp1[1][1] = 1;
    dfs1(1, 0);
    int ans = 1e9;
    rep(i, 2, n) ans = min(ans, max({dp[0][i] - 1, dp[1][i] - 1, (dp[0][i] / 2) + (dp[1][i] / 2) + 1}));
    cout << ans;
    return 0;
}