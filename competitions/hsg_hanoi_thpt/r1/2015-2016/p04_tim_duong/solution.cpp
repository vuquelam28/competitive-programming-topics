#include <bits/stdc++.h>
#define task "Bai4_1516."
#define int long long
#define sz(a) a.size()
#define ff(i, a, b) for (int i = a; i <= (int) b; ++i)
#define fd(i, a, b) for (int i = a; i >= (int) b; --i)
#define rep(i, a, b) for (int i = a; i < (int) b; ++i)
#define inf 1e9 + 7
#define pb push_back
#define x first
#define y second
#define mp make_pair

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair < int, int > II;
typedef pair < ll, ll > PLL;
typedef pair < double, int > DI;

const int maxn = 100 + 10;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int m, n, a[maxn][maxn], pass[maxn][maxn];
II start, finish;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    cin >> start.x >> start.y >> finish.x >> finish.y;
    ff(i, 1, m)
        ff(j, 1, n) cin >> a[i][j];
}

bool valid(II u)
{
    return u.x > 0 && u.x <= m && u.y > 0 && u.y <= n;
}

bool bfs(int val)
{
    queue < II > qu;
    memset(pass, 0, sizeof pass);
    qu.push(start);

    while (!qu.empty())
    {
        II cur = qu.front(); qu.pop();
        ff(i, 0, 3)
        {
            II v = mp(cur.x + dd[i][0], cur.y + dd[i][1]);
            if (!valid(v) || abs(a[cur.x][cur.y] - a[v.x][v.y]) > val || pass[v.x][v.y]) 
		continue;

            if (v == finish) 
		return true;

            qu.push(v); 
	        pass[v.x][v.y] = 1;
        }
    }

    return false;
}

void solve()
{
    int l = 0, r = 1ll * 2 * inf, res = 0;

    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (bfs(mid))
            res = mid, r = mid - 1;
        else l = mid + 1;
    }

    cout << res;
}

main()
{
    enter();
    solve();
    return 0;
}