#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int main()
{
    int m, n;
    cin >> m >> n;

    int minv = INT_MAX;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];

            if (a[i][j] < minv)
                minv = a[i][j];
        }

    int res = 0;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            res += (a[i][j] - minv);

    cout << res;

    return 0;
}