#include <bits/stdc++.h>
#define task "SUBSTRING."
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

const int maxn = 1e5 + 10;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
string s[maxn];
int n, maxl;

void enter()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    ff(i, 1, n)
    {
        cin >> s[i], s[i] = ' ' + s[i];
        maxl = max(maxl, (int)s[i].size() - 1);
    }
}

void solve()
{
    int l = 1, r = maxl+1, res = 0;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        map < string, bool > mark; bool check = true;
        ff(i, 1, n)
        {
            string st = (mid <= (int)s[i].size() - 1) ? s[i].substr(1, mid) : s[i];
            if (mark[st]) { check = false; break; }
            mark[st] = true;
        }
        if (!check) l = mid + 1;
        else res = mid, r = mid - 1;
    }
    printf("%d", res);
}

int main()
{
    enter();
    solve();
    return 0;
}