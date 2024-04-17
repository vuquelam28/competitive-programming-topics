#include <bits/stdc++.h>
#define int long long
#define task "Bai4_1718."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxn = 1e6 + 10, mod = 1e9 + 7;
int N, dp[maxn];
vector < int > adj[maxn];

void enter()
{
    cin >> N;

    for (int u = 1; u < N; ++u)
    {
        int v;
        cin >> v;

        adj[v].push_back(u);
    }
}

void dfs(int u, int par)
{
    dp[u] = 1;

    for (int v: adj[u])
    {
        if (v == par)
            continue;

        dfs(v, u);

        int cnt_subtree = (1 + dp[v]) % mod;
        dp[u] = ((dp[u] % mod) * cnt_subtree) % mod;
    }
}

void solution()
{
    dfs(N, 0);

    cout << dp[N];
}

main()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}