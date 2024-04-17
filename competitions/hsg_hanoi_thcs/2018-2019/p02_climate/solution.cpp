#include <bits/stdc++.h>
#define task "CLIMATE."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1e3 + 10;
int m, n, point[maxn], height[maxn];

void solve(int l, int r, int x)
{
    for (int i = 1; i <= m; ++i)
        if (point[i] >= l && point[i] <= r)
        {
            bool r = (point[i] % 2 == l % 2);
            height[i] = (r == true) ? height[i] + x : height[i] - x;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        cin >> point[i];

    int l, r, x;
    while (n--)
    {
        cin >> l >> r >> x;
        solve(l, r, x);
    }

    for (int i = 1; i <= m; ++i)
        cout << height[i] << endl;

    return 0;
}