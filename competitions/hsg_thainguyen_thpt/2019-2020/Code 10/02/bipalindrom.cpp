/// HDM
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input freopen("bipal.inp", "r", stdin);
#define output freopen("bipal.out", "w", stdout);
const int inf = 0x3f3f3f3f;
const ll oo = 0x3f3f3f3f3f3f3f3f;

using namespace std;

bool check(string& s, ll l, ll r) {
    while (l < r) {
        if (s[l++] != s[r--]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    fast
    input
    output

    string s;
    cin >> s;
    ll n = s.size();
    if (n&1 || s[0] == '0') {
        cout << "No";
    }
    else {
        cout << ((check(s, 0, (n>>1)-1) && check(s, n>>1, n-1)) ? "Yes" : "No");
    }
}
/*
12345654321 11111511111
1234565432111111511111
*/
