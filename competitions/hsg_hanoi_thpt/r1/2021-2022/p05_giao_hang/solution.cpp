#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e16;
const int maxN = 1e5 + 5;
struct val {
    int x, y;
};
int n, t;
val a[maxN];
val b[maxN];
struct cmpx {
    bool operator () (const val& a, const val& b) const {
        if (a.x != b.x) return a.x < b.x;
        return a.y < b.y;
    }
};
struct cmpy {
    bool operator () (const val& a, const val& b) const {
        if (a.y != b.y) return a.y < b.y;
        return a.x < b.x;
    }
};
struct cmpxy {
    bool operator () (const val& a, const val& b) const {
        if (a.y - a.x != b.y - b.x) return a.y - a.x < b.y - b.x;
        return a.y < b.y;
    }
};
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> t;
    for (int i = 1; i <= n; i++) cin >> a[i].x;
    for (int i = 1; i <= n; i++) cin >> a[i].y;
    for (int i = 1; i <= t; i++) cin >> b[i].x;
    for (int i = 1; i <= t; i++) cin >> b[i].y;

    int ans = INF;
    int cur = 0;

    sort(a + 1, a + 1 + n, cmpx());
    multiset<val, cmpx> sx;
    multiset<val, cmpxy> sxy;
    multiset<val, cmpy> sy;

    for (int i = 1; i <= t; i++) {
        sx.insert(a[i]);
        sxy.insert(a[i]);
        cur += a[i].x;
    }
    for (int i = t + 1; i <= n; i++) 
        sy.insert(a[i]);
    
    sort(b + 1, b + 1 + t, cmpxy());
    for (int i = 1; i <= t; i++)
        cur += b[i].x;

    ans = min(ans, cur);
    for (int i = 1; i <= t; i++) {
        int s1 = sy.empty() ? INF : sy.begin()->y - sx.rbegin()->x;
        int s2 = sxy.begin()->y - sxy.begin()->x;
        if (s1 < s2) {
            val tmp = *sx.rbegin();
            sy.erase(sy.begin());
            sx.erase(sx.find(tmp));
            sxy.erase(sxy.find(tmp));
            sy.insert(tmp);
        }
        else {
            val tmp = *sxy.begin();
            sx.erase(sx.find(tmp));
            sxy.erase(sxy.find(tmp));
        }
        cur += min(s1, s2);
        cur += b[i].y - b[i].x;
        ans = min(ans, cur);
    }
    cout << ans;
}
