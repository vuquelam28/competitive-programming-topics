#include <bits/stdc++.h>
#define task "POLE."
#define int long long
#define ff(i, a, b) for (int i = a; i <= (int) b; ++i)
#define fd(i, a, b) for (int i = a; i >= (int) b; --i)
#define rep(i, a, b) for (int i = a; i < (int) b; ++i)
#define inf 1e9 + 7
#define pb push_back
#define x first
#define y second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair < int, int > II;
typedef pair < ll, ll > PLL;
typedef pair < double, int > DI;

const int maxn = 10005, maxh = 1005;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, c, hmax, h[maxn], dp[maxn][maxh], low[maxn][maxh], high[maxn][maxh];

void enter()
{
    ios_base::sync_with_stdio(false);
    scanf("%lld%lld", &n, &c);
    ff(i, 1, n)
    {
        scanf("%lld", &h[i]);
        hmax = max(hmax, h[i]);
    }
}

int sqr(int A) { return A * A; }

void solve()
{
    //dp[i][j]: Minimum cost to connect from 1 to i and the height of pole i is j
    memset(dp, inf, sizeof dp);
    ff(i, h[1], hmax) 
	    dp[1][i] = sqr(i - h[1]);

    ff(i, 2, n)
    {
        low[i - 1][0] = high[i - 1][hmax + 1] = 1e18;
        ff(j, 1, hmax)
            low[i - 1][j] = min(low[i - 1][j - 1], dp[i - 1][j] - c * j);
        fd(j, hmax, 0)
            high[i - 1][j] = min(high[i - 1][j + 1], dp[i - 1][j] + c * j);

        ff(j, h[i], hmax)
            dp[i][j] = min(low[i - 1][j] + c * j, high[i - 1][j] - c * j) + sqr(j - h[i]);
    }

    int res = *min_element(dp[n], dp[n] + hmax + 1);
    printf("%lld", res);
}

main()
{
    enter();
    solve();
    return 0;
}