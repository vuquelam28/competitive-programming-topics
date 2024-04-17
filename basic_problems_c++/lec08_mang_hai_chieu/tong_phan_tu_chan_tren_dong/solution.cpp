#include <bits/stdc++.h>

using namespace std;

int a[101][101];

main()
{
    int m, n, k;
    cin >> m >> n >> k;

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    int res = 0;
    for (int j = 1; j <= n; ++j)
        res += (a[k][j] % 2 == 0);

    cout << res;

    return 0;
}