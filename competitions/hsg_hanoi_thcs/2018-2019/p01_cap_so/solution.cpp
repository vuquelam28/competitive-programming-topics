#include <bits/stdc++.h>
#define int long long
#define task "CAPSO."
#define inf 1e9 + 7

using namespace std;

int a, b, k;
vector < int > Square, Cube;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> k;
}

void create()
{
    for (int x = 1; x * x <= b; ++x)
        if (x * x >= a)
            Square.push_back(x * x);
    for (int y = 1; y * y * y <= b; ++y)
        if (y * y * y >= a)
            Cube.push_back(y * y * y);
}

void solve()
{
    int res = 0;
    for (int i = 0; i < Square.size(); ++i)
        for (int j = 0; j < Cube.size(); ++j)
            res += (abs(Square[i] - Cube[j]) <= k);

    cout << res;
}

main()
{
    enter();
    create();
    solve();
    return 0;
}