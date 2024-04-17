#include <bits/stdc++.h>
#define sqr(x) ((x) * (x))
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

const int maxn = 3e5 + 10;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int a[maxn], minpos[maxn];
string s;
II sum[maxn];

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;
    rep(i, 0, s.size())
        a[i + 1] = (s[i] == '0') ? -1 : 1;
}

bool cmp(II A, II B)
{
    return (A.x < B.x) || (A.x == B.x && A.y < B.y);
}

int bs(int start, int finish, int val)
{
    int l = start, r = finish, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (sum[mid].x < val)
            l = mid + 1, ans = mid;
        else r = mid - 1;
    }
    return ans;
}

void solve()
{
    int n = s.size(), res = 0, cnt = 0;
    ff(i, 1, n) sum[i] = {sum[i - 1].x + a[i], i};
    sort(sum + 1, sum + 1 + n, cmp);
    ff(i, 1, n)
        if (sum[i].x > 0)
        {
            if (res < sum[i].y) res = sum[i].y, cnt = 1;
            else if (res == sum[i].y) ++cnt;
        }
    minpos[0] = n + 1;
    ff(i, 1, n) minpos[i] = min(minpos[i - 1], sum[i].y);
    ff(i, 1, n)
    {
        int pos = bs(1, i - 1, sum[i].x);
        if (pos != -1 && sum[i].y > minpos[pos])
        {
            if (res < sum[i].y - minpos[pos])
                res = sum[i].y - minpos[pos], cnt = 1;
            else if (res == sum[i].y - minpos[pos]) ++cnt;
        }
    }
    cout << res << " " << cnt;
}

int main()
{
    enter();
    solve();
    return 0;
}