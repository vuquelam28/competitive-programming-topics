#include <bits/stdc++.h>

#define task "maxval"
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i = (l); i <= (r); ++i)
#define Rep(i, r, l) for (int i = (r); i >= (l); --i)
#define SZ(x) ((int)(x).size())

using namespace std;
typedef vector<int> vi;
const int N = 2e5 + 2;
int n;
vi a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    a.assign(n, 0);
    rep(i, 0, n - 1) cin >> a[i];
    sort(all(a));
    a.erase(unique(all(a)), a.end());
    int ans = 0;
    rep(i, 0, SZ(a) - 1)
    {
        int lst = 0;
        for (int j = 2; (j - 1) * a[i] <= a.back(); j++)
        {
            auto it = lower_bound(a.begin() + lst, a.end(), j * a[i]);
            lst = it - a.begin();
            if (it != a.begin())
            {
                it--;
                ans = max(ans, *it % a[i]);
            }

        }
    }
    cout << ans;
    return 0;
}
