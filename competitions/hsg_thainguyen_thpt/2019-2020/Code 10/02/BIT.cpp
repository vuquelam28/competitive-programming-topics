/// HDM
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input freopen("BIT.inp", "r", stdin);
#define output freopen("BIT.out", "w", stdout);
const int inf = 0x3f3f3f3f;
const ll oo = 0x3f3f3f3f3f3f3f3f;

using namespace std;

ll g(ll n) {
    ll x = 1;
    while (x*2 < n) {
        x *= 2;
    }
    return x;
}

bool solve(ll& n) {
    bool s = 0;
    while (n > 1) {
        n -= g(n);
        s = !s;
    }
    return s;
}
int main() {
    fast
    input
    output

    ll n;
    while (cin >> n) {
        cout << solve(n) << endl;
    }
}
/*

*/
