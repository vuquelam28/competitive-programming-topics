#include <bits/stdc++.h>
#define int long long
#define x first
#define y second

using namespace std;

const int maxn = 1e5 + 10;
int n, m;
pair < int, int > place[maxn];

void enter()
{ 
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) 
        cin >> place[i].x >> place[i].y;
}

void solve()
{
    int res = 0, cur = 0;
    for (int i = n; i >= 1; --i) 
        res += 2 * place[i].x * (place[i].y / m);

    for (int i = n; i >= 1; --i)
    {
        cur -= place[i].y % m;
        if (cur < 0) 
            res += place[i].x * 2, cur += m;
    }
    
    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);   

    enter();
    solve();

    return 0;
}


