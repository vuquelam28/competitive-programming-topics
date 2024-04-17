///HuDzG
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define HUNGIT "BIPAL"
#define F first
#define S second
#define pii pair<ll, ll>
#define nmax 1000005
#define OO 1000000000000000000
#define reset(a) memset(a, 0, sizeof(a))
#define AutoAC int main()

using namespace std;
string s;

void solve()
{
    ll n = s.length();
    s = ' ' + s;
    for(ll i = 1; i <= n / 4; i++)
    {
        if(s[i] != s[n / 2 - i + 1] || s[i + n / 2] != s[n - i + 1])
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}
AutoAC
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(HUNGIT".inp", "r", stdin);
    freopen(HUNGIT".out", "w", stdout);
    cin >> s;
    if(s.length() % 2 == 1 || s[0] == '0') cout << "No";
    else
    {
        solve();
    }
    return 0;
}
