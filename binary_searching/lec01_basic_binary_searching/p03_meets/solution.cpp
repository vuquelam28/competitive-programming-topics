#include <bits/stdc++.h>

#define rep(i, l, r) for (int i = (l); i <= (r); ++i)
#define Rep(i, r, l) for (int i = (r); i >= (l); --i)
#define F first
#define S second

using namespace std;
typedef pair<int, int> ii;

const int N = 1e5 + 2;
int n, q, d[N], id[N];
ii dd[N];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> q;
    rep(i, 1, n) cin >> d[i], dd[i] = {d[i], i};
    sort(d + 1, d + 1 + n);
    sort(dd + 1, dd + 1 + n);
    rep(i, 1, n) id[dd[i].S] = i;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x = id[x], y = id[y];
        if (x > y) swap(x, y);
        int mid = (d[y] + d[x]) / 2, mx = 0;
        int it = lower_bound(d + 1, d + 1 + n, mid) - d;
        mx = max(abs(d[y] - d[it]), abs(d[x] - d[it]));
        if (it - 1 > 0) mx = min(mx, max(abs(d[y] - d[it - 1]), abs(d[x] - d[it - 1])));
        cout << mx << '\n';
    }

    return 0;
}
