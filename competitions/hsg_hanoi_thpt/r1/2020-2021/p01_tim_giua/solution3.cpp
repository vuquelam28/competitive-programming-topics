#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool minimize(ll& a, ll b) {
    if (a >= b) {
        a = b;
        return true;
    } return false;
}

ll f(int l, int r) {
    return (ll)(r + l) * (r - l + 1) / 2;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int l, r;
    cin >> l >> r;
    int lo = l, hi = r;
    while (hi - lo > 1) {
        int mid = (lo + hi) >> 1;
        if (f(l, mid) <= f(mid + 1, r)) {
            lo = mid;
        } else {
            hi = mid;
        }
    }    
    ll res = f(lo + 1, r) - f(l, lo);
    int ans = lo;
    if (hi < r) {
        if (minimize(res, f(l, hi) - f(hi + 1, r))) {
            ans = hi;
        }
    }
    cout << ans;
    return 0;
}
