///HuDzG
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define HUNGIT "STATIS"
#define F first
#define S second
#define pii pair<ll, ll>
#define nmax 1000005
#define OO 1000000000000000000
#define reset(a) memset(a, 0, sizeof(a))
#define AutoAC int main()

using namespace std;
ll n, m, maxx = 0;
struct hung
{
    ll x, y;
}a[nmax];

bool sx(hung a, hung b)
{
    if(a.x == b.x) return a.y > b.y;
    return a.x < b.x;
}
AutoAC
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(HUNGIT".inp", "r", stdin);
    freopen(HUNGIT".out", "w", stdout);
    for(ll i = 1; i <= 200; i++)
        a[i].y = i;
    cin >> n >> m;
    for(ll i = 1; i <= n * m; i++)
    {
        ll b;
        cin >> b;
        a[b].x++;
        maxx = max(maxx, b);
    }
    sort(a, a + 1 + maxx, sx);
    for(ll i = maxx; i >= 0; i--)
    {
        if(a[i].x != 0)
        {
            cout << a[i].y << ":" << a[i].x << endl;
        }
    }
    return 0;
}
