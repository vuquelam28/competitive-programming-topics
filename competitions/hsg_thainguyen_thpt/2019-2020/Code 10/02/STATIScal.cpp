/// HDM
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input freopen("STATIS.inp", "r", stdin);
#define output freopen("STATIS.out", "w", stdout);
const int inf = 0x3f3f3f3f;
const ll oo = 0x3f3f3f3f3f3f3f3f;

using namespace std;

int main() {
    fast
    input
    output

    ll m, n, x;
    cin >> m >> n;
    ll cnt[103];
    memset(cnt, 0, sizeof(cnt));
    for (ll i = 0; i < m*n; ++i) {
        cin >> x;
        ++cnt[x];
    }
    vector< pair<ll, ll> > v;
    for (ll i = 0; i <= 100; ++i) {
        if (cnt[i] != 0) {
            v.pb({i, cnt[i]});
        }
    }
    sort(v.begin(), v.end(),
         [&](const pair<ll, ll>& a, const pair<ll, ll>& b) {
            if (a.se == b.se) { // cnt
                return a.fi < b.fi; // i
            }
            return a.se > b.se;
         });
    for (auto& x : v) {
        cout << x.fi << ":" << x.se << endl;
    }
}
/*
4 5
8 3 6 4 2
4 5 0 2 6
1 8 9 5 5
1 8 4 9 5
*/
